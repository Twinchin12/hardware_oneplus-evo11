/*
 * Copyright (C) 2021 The LineageOS Project
 * SPDX-License-Identifier: Apache-2.0
 */

#include <compositionengine/FodExtension.h>

uint32_t getFodZOrder(uint32_t, bool touched) {
    return touched ? 0xfc8 : 0xbd6;
}

uint32_t getFodUsageBits(uint32_t usageBits, bool) {
    return usageBits;
}