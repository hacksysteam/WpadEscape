# -*- coding: utf-8 -*-

import os
import sys
import errno
import shutil
import argparse
import win32api
import win32con
import win32process
import win32security
from ctypes import *
from ctypes.wintypes import *

# Constants
STILL_ACTIVE = 259
LIST_MODULES_ALL = 0x3
MEM_COMMIT = 0x00001000
PAGE_EXECUTE_READWRITE = 0x40
PROCESS_ALL_ACCESS = 0x1F0FFF
PROCESS_QUERY_INFORMATION = 0x0400

SIZE_T = c_size_t
LPCWSTR = c_wchar_p
PSIZE_T = POINTER(SIZE_T)
LPDWORD = PDWORD = POINTER(DWORD)

# DLL Proxy
ntdll = windll.ntdll
psapi = windll.psapi
shell32 = windll.shell32
kernel32 = windll.kernel32

kernel32.GetCurrentProcess.argtype = None
kernel32.GetCurrentProcess.restype = HANDLE

kernel32.GetExitCodeProcess.argtypes = [HANDLE, LPDWORD]
kernel32.GetExitCodeProcess.restype = BOOL

kernel32.GetModuleHandleA.argtypes = [LPCSTR]
kernel32.GetModuleHandleA.restype = HMODULE

kernel32.GetProcAddress.argtypes = [HMODULE, LPCSTR]
kernel32.GetProcAddress.restype = LPVOID

kernel32.OpenProcess.argtypes = [DWORD, BOOL, DWORD]
kernel32.OpenProcess.restype = HANDLE

kernel32.VirtualAllocEx.argtypes = [HANDLE, LPVOID, SIZE_T, DWORD, DWORD]
kernel32.VirtualAllocEx.restype = LPVOID

kernel32.WriteProcessMemory.restype = BOOL
kernel32.WriteProcessMemory.argtypes = [HANDLE, LPVOID, LPCVOID, SIZE_T, PSIZE_T]

ntdll.RtlCreateUserThread.argtypes = [HANDLE, LPVOID, BOOL, ULONG, LPDWORD, LPDWORD, LPVOID, LPVOID, LPVOID, LPVOID]
ntdll.RtlCreateUserThread.restype = BOOL


class MODULEINFO(Structure):
    _fields_ = [
        ("lpBaseOfDll", LPVOID),
        ("SizeOfImage", DWORD),
        ("EntryPoint", LPVOID)
    ]


def auto_int(x):
    return int(x, 0)


def to_hex(val, nbits=64):
    return hex((val + (1 << nbits)) % (1 << nbits)).rstrip("L")


def copy_file(src, dst):
    shutil.copy(src, dst)


def close_handle(handle):
    return win32api.CloseHandle(handle)


def is_pid_running(pid):
    h_process = kernel32.OpenProcess(PROCESS_QUERY_INFORMATION, False, pid)
    if not h_process:
        return False

    exit_code = DWORD()
    success = kernel32.GetExitCodeProcess(h_process, byref(exit_code)) == 0

    close_handle(h_process)

    return success or exit_code.value == STILL_ACTIVE


def enable_privilege(privilege_name):
    success = False
    privilege_id = win32security.LookupPrivilegeValue(
        None,
        privilege_name
    )

    new_privilege = [(privilege_id, win32con.SE_PRIVILEGE_ENABLED)]

    h_token = win32security.OpenProcessToken(
        win32process.GetCurrentProcess(),
        win32security.TOKEN_ALL_ACCESS
    )

    if h_token:
        success = win32security.AdjustTokenPrivileges(
            h_token, 0, new_privilege
        )

        close_handle(h_token)

    return success


def get_process_handle(pid):
    return kernel32.OpenProcess(PROCESS_ALL_ACCESS, False, pid)


def allocate_memory(h_process, size):
    return kernel32.VirtualAllocEx(h_process, 0, size, MEM_COMMIT, PAGE_EXECUTE_READWRITE)


def write_to_memory(h_process, p_destination_buffer, data, data_size):
    return kernel32.WriteProcessMemory(h_process, p_destination_buffer, data, data_size, None)


def get_proc_address(module, api):
    h_module = kernel32.GetModuleHandleA(module)
    return kernel32.GetProcAddress(h_module, api)


def create_remote_thread(h_process, routine, parameters):
    h_thread = HANDLE()
    ntdll.RtlCreateUserThread(
        h_process,
        None,
        0,
        0,
        None,
        None,
        routine,
        parameters,
        byref(h_thread),
        None
    )


def inject_dll_into_process(pid, dll):
    api = "LoadLibraryA"
    module = "kernel32.dll"

    # copy the file to C:\Windows\Fonts directory
    # some of the sandboxes like Chrome can only load DLL from this directory
    destination_dll_path = "C:\\Windows\\Fonts\\{0}".format(os.path.basename(dll))

    copy_file(dll, destination_dll_path)
    print "[+] Copied the DLL to: {0}".format(destination_dll_path)

    h_process = get_process_handle(pid)
    print "[+] Process Handle: {0}".format(to_hex(h_process))

    proc_address = get_proc_address(module, api)
    print "[+] Resolved {0}: {1}".format(api, to_hex(proc_address))

    remote_parameter_memory = allocate_memory(h_process, len(destination_dll_path))
    print "[+] Remote Allocated Memory: {0}".format(to_hex(remote_parameter_memory))

    write_to_memory(h_process, remote_parameter_memory, destination_dll_path, len(destination_dll_path))

    # create remote thread and execute the api
    create_remote_thread(h_process, proc_address, remote_parameter_memory)
    print "[+] Created Remote Thread"


if __name__ == "__main__":
    parser = argparse.ArgumentParser(description="DLL Injection Toolkit")

    parser.add_argument(
        "-p", "--pid", help="Target process id", action="store", type=auto_int, required=True
    )
    parser.add_argument(
        "-d", "--dll", help="DLL to inject", action="store", required=True
    )

    args = parser.parse_args()

    dll_path = args.dll
    process_id = args.pid

    print "[+] DLL Path: {0}".format(dll_path)
    # verify if DLL exists
    if not os.path.exists(dll_path):
        print "[-] DLL path is invalid"
        sys.exit(errno.ENOENT)

    # first verify if running as admin
    is_admin = shell32.IsUserAnAdmin()
    if not is_admin:
        print "[-] Please run this tool as an Administrator"
        sys.exit(errno.EACCES)
    else:
        print "[+] Running with Administrator privileges"

    # enable SeDebugPrivilege privilege which is required to open other processes
    privilege_enabled = enable_privilege(win32security.SE_DEBUG_NAME)
    if not privilege_enabled:
        print "[-] Failed to enable SeDebugPrivilege privilege"
        sys.exit(errno.EACCES)
    else:
        print "[+] Successfully enabled SeDebugPrivilege privilege"

    print "[+] Process Id: {0}".format(process_id)
    # verify if the process is running
    if not is_pid_running(process_id):
        print "[-] PID is not running"
        sys.exit(errno.ENOENT)

    inject_dll_into_process(process_id, dll_path)
