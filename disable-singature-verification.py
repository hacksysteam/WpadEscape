# -*- coding: utf-8 -*-

import re
import sys
import pykd


def get_eprocess_using_pid(pid):
    process_command = "!process 0n{0} 0".format(int(pid, 10))
    eprocess_raw_output = pykd.dbgCommand(process_command)
    regex_obj = re.compile(r"^PROCESS\s([a-f0-9]{8,16})", re.IGNORECASE | re.MULTILINE)
    s_obj = regex_obj.search(eprocess_raw_output)
    return int(s_obj.group(1), 16)


def disable_signature_verification(pid):
    target_eprocess = get_eprocess_using_pid(pid)

    # Windows 10 x64 17134 (RS4)
    signature_level_offset = 0x6c8
    section_signature_level_offset = 0x6c9

    current_signature_level_value = pykd.loadBytes(target_eprocess + signature_level_offset, 1)[0]
    current_section_signature_level_value = pykd.loadBytes(target_eprocess + section_signature_level_offset, 1)[0]

    print "PID: {0}".format(pid)
    print "EPROCESS: {0}".format(hex(target_eprocess).rstrip("L"))
    print "Current SignatureLevel: {0}".format(current_signature_level_value)
    print "Current SectionSignatureLevel: {0}".format(current_section_signature_level_value)

    if current_signature_level_value and current_section_signature_level_value:
        pykd.setByte(target_eprocess + signature_level_offset, 0)
        pykd.setByte(target_eprocess + section_signature_level_offset, 0)

        new_signature_level_value = pykd.loadBytes(target_eprocess + signature_level_offset, 1)[0]
        new_section_signature_level_value = pykd.loadBytes(target_eprocess + section_signature_level_offset, 1)[0]

        print "New SignatureLevel: {0}".format(new_signature_level_value)
        print "New SectionSignatureLevel: {0}".format(new_section_signature_level_value)
    else:
        print "Signature verification is already disabled"


if __name__ == "__main__":
    if len(sys.argv) < 2:
        print "PID not provided. Exiting.."
        sys.exit(1)

    process_id = sys.argv[1]

    disable_signature_verification(process_id)
