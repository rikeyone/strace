/*
 * Copyright (c) 2014-2018 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

{ 0,			"r0" },
{ 1,			"r1" },
{ 2,			"r2" },
{ 3,			"r3" },
{ 4,			"r4" },
{ 5,			"r5" },
{ 6,			"r6" },
{ 7,			"r7" },
{ 8,			"r8" },
{ 9,			"r9" },
{ 10,			"r10" },
{ 11,			"r11" },
{ 12,			"r12" },
{ 13,			"r13" },
{ 14,			"r14" },
{ 15,			"r15" },
{ 16,			"r16" },
{ 17,			"r17" },
{ 18,			"r18" },
{ 19,			"r19" },
{ 20,			"r20" },
{ 21,			"r21" },
{ 22,			"r22" },
{ 23,			"r23" },
{ 24,			"r24" },
{ 25,			"r25" },
{ 26,			"r26" },
{ 27,			"r27" },
{ 28,			"r28" },
{ 29,			"r29" },
{ 30,			"r30" },
{ 31,			"r31" },
{ 32,			"f0" },
{ 33,			"f1" },
{ 34,			"f2" },
{ 35,			"f3" },
{ 36,			"f4" },
{ 37,			"f5" },
{ 38,			"f6" },
{ 39,			"f7" },
{ 40,			"f8" },
{ 41,			"f9" },
{ 42,			"f10" },
{ 43,			"f11" },
{ 44,			"f12" },
{ 45,			"f13" },
{ 46,			"f14" },
{ 47,			"f15" },
{ 48,			"f16" },
{ 49,			"f17" },
{ 50,			"f18" },
{ 51,			"f19" },
{ 52,			"f20" },
{ 53,			"f21" },
{ 54,			"f22" },
{ 55,			"f23" },
{ 56,			"f24" },
{ 57,			"f25" },
{ 58,			"f26" },
{ 59,			"f27" },
{ 60,			"f28" },
{ 61,			"f29" },
{ 62,			"f30" },
{ 63,			"f31" },
{ 64,			"pc" },
{ 65,			"cause" },
{ 66,			"badvaddr" },
{ 67,			"mmhi" },
{ 68,			"mmlo" },
{ 69,			"fpcsr" },
{ 70,			"fpeir" },
/* Other fields in "struct user" */
XLAT_UOFF(u_tsize),
XLAT_UOFF(u_dsize),
XLAT_UOFF(u_ssize),
XLAT_UOFF(start_code),
XLAT_UOFF(start_data),
XLAT_UOFF(start_stack),
XLAT_UOFF(signal),
XLAT_UOFF(u_ar0),
XLAT_UOFF(magic),
XLAT_UOFF(u_comm),
#include "../userent0.h"
