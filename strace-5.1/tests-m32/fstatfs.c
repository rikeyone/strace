/*
 * Copyright (c) 2015-2018 Dmitry V. Levin <ldv@altlinux.org>
 * All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "tests.h"
#include <asm/unistd.h>

#ifdef __NR_fstatfs

# define SYSCALL_ARG_FMT		"%d"
# define SYSCALL_ARG(file, desc)	(desc)
# define SYSCALL_NR			__NR_fstatfs
# define SYSCALL_NAME			"fstatfs"
# include "xstatfs.c"

#else

SKIP_MAIN_UNDEFINED("__NR_fstatfs")

#endif
