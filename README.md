WPAD Sandbox Escape
===================

This project is used as the sandbox escape vector using `WinHTTP Web Proxy Auto-Discovery Service (WinHttpAutoProxySvc)`.

One way to trigger `WPAD` call is using `WinHttpOpen` and finally calling `WinHttpGetProxyForUrl`. However, these APIs are **blocked** due to sandbox restrictions.

Only Internet Explorer's `Enhanced Protected Mode` **allows** these APIs to be called. You can not trigger these APIs from `Chrome` or `other sandboxes`.


Software Layers
---------------

`WinHTTP` layer is exposed from `winhttp.dll`, `Remote Procedure Call (RPC)` layer is exposed from `rpcrt4.dll` and  `Advanced Local Procedure Call (ALPC)` is directly handled in **Windows Kernel**.

```
+----------------------------------------+
|               WinHTTP                  |
+----------------------------------------+
|      Remote Procedure Call (RPC)       |
+----------------------------------------+
|  Advanced Local Procedure Call (ALPC)  |
+----------------------------------------+
```

The checks happen in `WinHTTP` layer which disallows these calls to be successful from other sandboxes. Of-course, there are checks in other layers too. But those checks are passed due to nature of the sandbox.


Bypass
------

The bypass is very simple. However, it requires a lot of reverse enginerring efforts. One of the simple bypass is instead of relying on `WinHTTP` layer, we directly use `Remote Prodecure Calls (RPC)` layer to invoke functionaly in `WPAD` service.


Sandboxes Bypassed
------------------

1. Protected Mode Sandbox
2. Enhanced Protected Mode Sandbox
3. Edge Sandbox
4. Chrome GPU Sandbox
5. Adobe Reader Sandbox
6. Firefox Sandbox


Sandbox Not Bypassed
--------------------
1. Chrome Renderer Sandbox


Usage Instructions
==================

To gian `Local Privilege Escalation (LPE)` using this vector, we use a `WPAD` bug. We assume that we already have an `Remote Code Execution (RCE)` in the target **sandbox** environment.

To simulate an `RCE`, we are using `DLL injection`. Due to recent advancements in Windows security, now a days process can opt for **DLL Signature Verification**, i.e the DLL needs to be signed by Microsoft for it to get loaded in the address space for the process who has opted this security.

This security can circumvented by setting `_EPROCESS.SignatureLevel` and `_EPROCESS.SectionSignatureLevel` to `NULL`. We have provided a simple `pykd` script to automate this process.

To use this `pykd` script we need to install pykd and then enable to local kernel debugging.

PyKd
----

`pip install pykd`


PyKd Bootstrapper
-----------------

Download `https://githomelab.ru/pykd/pykd/uploads/f24e6c41ed38c5ea4bd8804b8e69373b/PYKD_BOOTSTRAPPER_2.0.0.16.zip`

Copy `pykd.dll` to `C:\Program Files\Windows Kits\10\Debuggers\x64\winext`


Kernel Debugging
----------------
`bcdedit /debug on`


Disable Signature Verification
------------------------------

1. Open WinDbg with **Local Kernel Debugging**
2. `!load pykd`
3. `!py C:\Scripts\disable-singature-verification.py <PID>`


Inject DLL
----------

1. Open `CMD.EXE` as `Administrator`
2. `python inject-dll.py --pid <PID> --dll C:\Scripts\Compiled\x64\WpadEscape.dll`


> Note: `WPAD PAC` file URL is hardcoded in the DLL as `http://localhost:8000/wpad.dat`. Before injecting the DLL run `python -m SimpleHTTPServer` in the directory where you are hosting `wpad.dat`
