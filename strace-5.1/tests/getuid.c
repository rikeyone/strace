/*
 * Copyright (c) 2016-2018 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "tests.h"
#include <asm/unistd.h>

#ifdef __NR_getuid

# include <stdio.h>
# include <unistd.h>

int
main(void)
{
	printf("getuid() = %ld\n", syscall(__NR_getuid));
	return 0;
}

#else

SKIP_MAIN_UNDEFINED("__NR_getuid")

#endif
