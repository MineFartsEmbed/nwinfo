#pragma once

#include <windows.h>
#include <winioctl.h>

#include <stdint.h>
#include <stddef.h>

extern "C" {
    #include "nwinfo/libnw/acpi.h"
    #include "nwinfo/libnw/audio.h"
    #include "nwinfo/libnw/base64.h"
    #include "nwinfo/libnw/cpuid.h"
    #include "nwinfo/libnw/devtree.h"
    #include "nwinfo/libnw/disk.h"
    #include "nwinfo/libnw/drvstore.h"
    #include "nwinfo/libnw/efivars.h"
    #include "nwinfo/libnw/libnw.h"
    #include "nwinfo/libnw/network.h"
    #include "nwinfo/libnw/node.h"
    #include "nwinfo/libnw/nt.h"
    #include "nwinfo/libnw/nwapi.h"
    #include "nwinfo/libnw/smbios.h"
    #include "nwinfo/libnw/tpm.h"
    #include "nwinfo/libnw/utils.h"
    #include "nwinfo/libnw/vbr.h"
    #include "nwinfo/libnw/version.h"
}