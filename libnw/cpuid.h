// SPDX-License-Identifier: Unlicense
#pragma once

#include "nwinfo/libcpuid/libcpuid.h"

struct system_id_t* NWL_GetCpuid(void);
void NWL_FreeCpuFreq(void);
