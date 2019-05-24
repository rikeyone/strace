/*
 * Copyright (c) 2016-2018 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: GPL-2.0-or-later
 */

#include "tests.h"

#include <asm/unistd.h>

#ifdef __NR_process_vm_writev

# define OP     process_vm_writev
# define OP_NR  __NR_process_vm_writev
# define OP_STR "process_vm_writev"
# define OP_WR  1

# include "process_vm_readv_writev.c"

#else

SKIP_MAIN_UNDEFINED("__NR_process_vm_writev");

#endif
