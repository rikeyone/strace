/*
 * Copyright (c) 2015-2019 The strace developers.
 * All rights reserved.
 *
 * SPDX-License-Identifier: LGPL-2.1-or-later
 */

#ifndef sys_ARCH_mmap
# define sys_ARCH_mmap sys_mmap
#endif
[  0] = { 2,	TM,		SEN(io_setup),			"io_setup"		},
[  1] = { 1,	TM,		SEN(io_destroy),		"io_destroy"		},
[  2] = { 3,	0,		SEN(io_submit),			"io_submit"		},
[  3] = { 3,	0,		SEN(io_cancel),			"io_cancel"		},
[  4] = { 5,	0,		SEN(io_getevents_time32),	"io_getevents"		},
[  5] = { 5,	TF,		SEN(setxattr),			"setxattr"		},
[  6] = { 5,	TF,		SEN(setxattr),			"lsetxattr"		},
[  7] = { 5,	TD,		SEN(fsetxattr),			"fsetxattr"		},
[  8] = { 4,	TF,		SEN(getxattr),			"getxattr"		},
[  9] = { 4,	TF,		SEN(getxattr),			"lgetxattr"		},
[ 10] = { 4,	TD,		SEN(fgetxattr),			"fgetxattr"		},
[ 11] = { 3,	TF,		SEN(listxattr),			"listxattr"		},
[ 12] = { 3,	TF,		SEN(listxattr),			"llistxattr"		},
[ 13] = { 3,	TD,		SEN(flistxattr),		"flistxattr"		},
[ 14] = { 2,	TF,		SEN(removexattr),		"removexattr"		},
[ 15] = { 2,	TF,		SEN(removexattr),		"lremovexattr"		},
[ 16] = { 2,	TD,		SEN(fremovexattr),		"fremovexattr"		},
[ 17] = { 2,	TF,		SEN(getcwd),			"getcwd"		},
[ 18] = { 4,	0,		SEN(lookup_dcookie),		"lookup_dcookie"	},
[ 19] = { 2,	TD,		SEN(eventfd2),			"eventfd2"		},
[ 20] = { 1,	TD,		SEN(epoll_create1),		"epoll_create1"		},
[ 21] = { 4,	TD,		SEN(epoll_ctl),			"epoll_ctl"		},
[ 22] = { 6,	TD,		SEN(epoll_pwait),		"epoll_pwait"		},
[ 23] = { 1,	TD,		SEN(dup),			"dup"			},
[ 24] = { 3,	TD,		SEN(dup3),			"dup3"			},
[ 25] = { 3,	TD,		SEN(fcntl64),			"fcntl64"		},
[ 26] = { 1,	TD,		SEN(inotify_init1),		"inotify_init1"		},
[ 27] = { 3,	TD|TF,		SEN(inotify_add_watch),		"inotify_add_watch"	},
[ 28] = { 2,	TD,		SEN(inotify_rm_watch),		"inotify_rm_watch"	},
[ 29] = { 3,	TD,		SEN(ioctl),			"ioctl"			},
[ 30] = { 3,	0,		SEN(ioprio_set),		"ioprio_set"		},
[ 31] = { 2,	0,		SEN(ioprio_get),		"ioprio_get"		},
[ 32] = { 2,	TD,		SEN(flock),			"flock"			},
[ 33] = { 4,	TD|TF,		SEN(mknodat),			"mknodat"		},
[ 34] = { 3,	TD|TF,		SEN(mkdirat),			"mkdirat"		},
[ 35] = { 3,	TD|TF,		SEN(unlinkat),			"unlinkat"		},
[ 36] = { 3,	TD|TF,		SEN(symlinkat),			"symlinkat"		},
[ 37] = { 5,	TD|TF,		SEN(linkat),			"linkat"		},
[ 38] = { 4,	TD|TF,		SEN(renameat),			"renameat"		},
[ 39] = { 2,	TF,		SEN(umount2),			"umount2"		},
[ 40] = { 5,	TF,		SEN(mount),			"mount"			},
[ 41] = { 2,	TF,		SEN(pivotroot),			"pivot_root"		},
[ 42] = { 3,	0,		SEN(nfsservctl),		"nfsservctl"		},
[ 43] = { 3,	TF|TSF|TSFA,	SEN(statfs64),			"statfs64"		},
[ 44] = { 3,	TD|TFSF|TSFA,	SEN(fstatfs64),			"fstatfs64"		},
[ 45] = { 3,	TF,		SEN(truncate64),		"truncate64"		},
[ 46] = { 3,	TD,		SEN(ftruncate64),		"ftruncate64"		},
[ 47] = { 6,	TD,		SEN(fallocate),			"fallocate"		},
[ 48] = { 3,	TD|TF,		SEN(faccessat),			"faccessat"		},
[ 49] = { 1,	TF,		SEN(chdir),			"chdir"			},
[ 50] = { 1,	TD,		SEN(fchdir),			"fchdir"		},
[ 51] = { 1,	TF,		SEN(chroot),			"chroot"		},
[ 52] = { 2,	TD,		SEN(fchmod),			"fchmod"		},
[ 53] = { 3,	TD|TF,		SEN(fchmodat),			"fchmodat"		},
[ 54] = { 5,	TD|TF,		SEN(fchownat),			"fchownat"		},
[ 55] = { 3,	TD,		SEN(fchown),			"fchown"		},
[ 56] = { 4,	TD|TF,		SEN(openat),			"openat"		},
[ 57] = { 1,	TD,		SEN(close),			"close"			},
[ 58] = { 0,	0,		SEN(vhangup),			"vhangup"		},
[ 59] = { 2,	TD,		SEN(pipe2),			"pipe2"			},
[ 60] = { 4,	TF,		SEN(quotactl),			"quotactl"		},
[ 61] = { 3,	TD,		SEN(getdents64),		"getdents64"		},
[ 62] = { 5,	TD,		SEN(llseek),			"_llseek"		},
[ 63] = { 3,	TD,		SEN(read),			"read"			},
[ 64] = { 3,	TD,		SEN(write),			"write"			},
[ 65] = { 3,	TD,		SEN(readv),			"readv"			},
[ 66] = { 3,	TD,		SEN(writev),			"writev"		},
[ 67] = { 5,	TD,		SEN(pread),			"pread64"		},
[ 68] = { 5,	TD,		SEN(pwrite),			"pwrite64"		},
[ 69] = { 5,	TD,		SEN(preadv),			"preadv"		},
[ 70] = { 5,	TD,		SEN(pwritev),			"pwritev"		},
[ 71] = { 4,	TD|TN,		SEN(sendfile64),		"sendfile64"		},
[ 72] = { 6,	TD,		SEN(pselect6_time32),		"pselect6"		},
[ 73] = { 5,	TD,		SEN(ppoll_time32),		"ppoll"			},
[ 74] = { 4,	TD|TS,		SEN(signalfd4),			"signalfd4"		},
[ 75] = { 4,	TD,		SEN(vmsplice),			"vmsplice"		},
[ 76] = { 6,	TD,		SEN(splice),			"splice"		},
[ 77] = { 4,	TD,		SEN(tee),			"tee"			},
[ 78] = { 4,	TD|TF,		SEN(readlinkat),		"readlinkat"		},
[ 79] = { 4,	TD|TF|TFST|TSTA,SEN(fstatat64),			"fstatat64"		},
[ 80] = { 2,	TD|TFST|TSTA,	SEN(fstat64),			"fstat64"		},
[ 81] = { 0,	0,		SEN(sync),			"sync"			},
[ 82] = { 1,	TD,		SEN(fsync),			"fsync"			},
[ 83] = { 1,	TD,		SEN(fdatasync),			"fdatasync"		},
#ifdef ARCH_WANT_SYNC_FILE_RANGE2
[ 84] = { 6,	TD,		SEN(sync_file_range2),		"sync_file_range2"	},
#else
[ 84] = { 6,	TD,		SEN(sync_file_range),		"sync_file_range"	},
#endif
[ 85] = { 2,	TD,		SEN(timerfd_create),		"timerfd_create"	},
[ 86] = { 4,	TD,		SEN(timerfd_settime32),		"timerfd_settime"	},
[ 87] = { 2,	TD,		SEN(timerfd_gettime32),		"timerfd_gettime"	},
[ 88] = { 4,	TD|TF,		SEN(utimensat_time32),		"utimensat"		},
[ 89] = { 1,	TF,		SEN(acct),			"acct"			},
[ 90] = { 2,	0,		SEN(capget),			"capget"		},
[ 91] = { 2,	0,		SEN(capset),			"capset"		},
[ 92] = { 1,	NF,		SEN(personality),		"personality"		},
[ 93] = { 1,	TP|SE,		SEN(exit),			"exit"			},
[ 94] = { 1,	TP|SE,		SEN(exit),			"exit_group"		},
[ 95] = { 5,	TP,		SEN(waitid),			"waitid"		},
[ 96] = { 1,	0,		SEN(set_tid_address),		"set_tid_address"	},
[ 97] = { 1,	TP,		SEN(unshare),			"unshare"		},
[ 98] = { 6,	0,		SEN(futex_time32),		"futex"			},
[ 99] = { 2,	0,		SEN(set_robust_list),		"set_robust_list"	},
[100] = { 3,	0,		SEN(get_robust_list),		"get_robust_list"	},
[101] = { 2,	0,		SEN(nanosleep_time32),		"nanosleep"		},
[102] = { 2,	0,		SEN(getitimer),			"getitimer"		},
[103] = { 3,	0,		SEN(setitimer),			"setitimer"		},
[104] = { 4,	0,		SEN(kexec_load),		"kexec_load"		},
[105] = { 3,	0,		SEN(init_module),		"init_module"		},
[106] = { 2,	0,		SEN(delete_module),		"delete_module"		},
[107] = { 3,	0,		SEN(timer_create),		"timer_create"		},
[108] = { 2,	0,		SEN(timer_gettime32),		"timer_gettime"		},
[109] = { 1,	0,		SEN(timer_getoverrun),		"timer_getoverrun"	},
[110] = { 4,	0,		SEN(timer_settime32),		"timer_settime"		},
[111] = { 1,	0,		SEN(timer_delete),		"timer_delete"		},
[112] = { 2,	0,		SEN(clock_settime32),		"clock_settime"		},
[113] = { 2,	0,		SEN(clock_gettime32),		"clock_gettime"		},
[114] = { 2,	0,		SEN(clock_getres_time32),	"clock_getres"		},
[115] = { 4,	0,		SEN(clock_nanosleep_time32),	"clock_nanosleep"	},
[116] = { 3,	0,		SEN(syslog),			"syslog"		},
[117] = { 4,	0,		SEN(ptrace),			"ptrace"		},
[118] = { 2,	0,		SEN(sched_setparam),		"sched_setparam"	},
[119] = { 3,	0,		SEN(sched_setscheduler),	"sched_setscheduler"	},
[120] = { 1,	0,		SEN(sched_getscheduler),	"sched_getscheduler"	},
[121] = { 2,	0,		SEN(sched_getparam),		"sched_getparam"	},
[122] = { 3,	0,		SEN(sched_setaffinity),		"sched_setaffinity"	},
[123] = { 3,	0,		SEN(sched_getaffinity),		"sched_getaffinity"	},
[124] = { 0,	0,		SEN(sched_yield),		"sched_yield"		},
[125] = { 1,	0,		SEN(sched_get_priority_max),	"sched_get_priority_max"},
[126] = { 1,	0,		SEN(sched_get_priority_min),	"sched_get_priority_min"},
[127] = { 2,	0,		SEN(sched_rr_get_interval_time32),"sched_rr_get_interval"},
[128] = { 0,	0,		SEN(restart_syscall),		"restart_syscall"	},
[129] = { 2,	TS,		SEN(kill),			"kill"			},
[130] = { 2,	TS,		SEN(kill),			"tkill"			},
[131] = { 3,	TS,		SEN(tgkill),			"tgkill"		},
[132] = { 2,	TS,		SEN(sigaltstack),		"sigaltstack"		},
[133] = { 2,	TS,		SEN(rt_sigsuspend),		"rt_sigsuspend"		},
[134] = { 4,	TS,		SEN(rt_sigaction),		"rt_sigaction"		},
[135] = { 4,	TS,		SEN(rt_sigprocmask),		"rt_sigprocmask"	},
[136] = { 2,	TS,		SEN(rt_sigpending),		"rt_sigpending"		},
[137] = { 4,	TS,		SEN(rt_sigtimedwait_time32),	"rt_sigtimedwait"	},
[138] = { 3,	TS,		SEN(rt_sigqueueinfo),		"rt_sigqueueinfo"	},
[139] = { 0,	TS,		SEN(rt_sigreturn),		"rt_sigreturn"		},
[140] = { 3,	0,		SEN(setpriority),		"setpriority"		},
[141] = { 2,	0,		SEN(getpriority),		"getpriority"		},
[142] = { 4,	0,		SEN(reboot),			"reboot"		},
[143] = { 2,	0,		SEN(setregid),			"setregid"		},
[144] = { 1,	0,		SEN(setgid),			"setgid"		},
[145] = { 2,	0,		SEN(setreuid),			"setreuid"		},
[146] = { 1,	0,		SEN(setuid),			"setuid"		},
[147] = { 3,	0,		SEN(setresuid),			"setresuid"		},
[148] = { 3,	0,		SEN(getresuid),			"getresuid"		},
[149] = { 3,	0,		SEN(setresgid),			"setresgid"		},
[150] = { 3,	0,		SEN(getresgid),			"getresgid"		},
[151] = { 1,	NF,		SEN(setfsuid),			"setfsuid"		},
[152] = { 1,	NF,		SEN(setfsgid),			"setfsgid"		},
[153] = { 1,	0,		SEN(times),			"times"			},
[154] = { 2,	0,		SEN(setpgid),			"setpgid"		},
[155] = { 1,	0,		SEN(getpgid),			"getpgid"		},
[156] = { 1,	0,		SEN(getsid),			"getsid"		},
[157] = { 0,	0,		SEN(setsid),			"setsid"		},
[158] = { 2,	0,		SEN(getgroups),			"getgroups"		},
[159] = { 2,	0,		SEN(setgroups),			"setgroups"		},
[160] = { 1,	0,		SEN(uname),			"uname"			},
[161] = { 2,	0,		SEN(sethostname),		"sethostname"		},
[162] = { 2,	0,		SEN(setdomainname),		"setdomainname"		},
[163] = { 2,	0,		SEN(getrlimit),			"getrlimit"		},
[164] = { 2,	0,		SEN(setrlimit),			"setrlimit"		},
[165] = { 2,	0,		SEN(getrusage),			"getrusage"		},
[166] = { 1,	NF,		SEN(umask),			"umask"			},
[167] = { 5,	0,		SEN(prctl),			"prctl"			},
[168] = { 3,	0,		SEN(getcpu),			"getcpu"		},
[169] = { 2,	0,		SEN(gettimeofday),		"gettimeofday"		},
[170] = { 2,	0,		SEN(settimeofday),		"settimeofday"		},
[171] = { 1,	0,		SEN(adjtimex32),		"adjtimex"		},
[172] = { 0,	PU|NF,		SEN(getpid),			"getpid"		},
[173] = { 0,	PU|NF,		SEN(getppid),			"getppid"		},
[174] = { 0,	PU|NF,		SEN(getuid),			"getuid"		},
[175] = { 0,	PU|NF,		SEN(geteuid),			"geteuid"		},
[176] = { 0,	PU|NF,		SEN(getgid),			"getgid"		},
[177] = { 0,	PU|NF,		SEN(getegid),			"getegid"		},
[178] = { 0,	PU|NF,		SEN(gettid),			"gettid"		},
[179] = { 1,	0,		SEN(sysinfo),			"sysinfo"		},
[180] = { 4,	TD,		SEN(mq_open),			"mq_open"		},
[181] = { 1,	0,		SEN(mq_unlink),			"mq_unlink"		},
[182] = { 5,	TD,		SEN(mq_timedsend_time32),	"mq_timedsend"		},
[183] = { 5,	TD,		SEN(mq_timedreceive_time32),	"mq_timedreceive"	},
[184] = { 2,	TD,		SEN(mq_notify),			"mq_notify"		},
[185] = { 3,	TD,		SEN(mq_getsetattr),		"mq_getsetattr"		},
[186] = { 2,	TI,		SEN(msgget),			"msgget"		},
[187] = { 3,	TI,		SEN(msgctl),			"msgctl"		},
[188] = { 5,	TI,		SEN(msgrcv),			"msgrcv"		},
[189] = { 4,	TI,		SEN(msgsnd),			"msgsnd"		},
[190] = { 3,	TI,		SEN(semget),			"semget"		},
[191] = { 4,	TI,		SEN(semctl),			"semctl"		},
[192] = { 4,	TI,		SEN(semtimedop_time32),		"semtimedop"		},
[193] = { 3,	TI,		SEN(semop),			"semop"			},
[194] = { 3,	TI,		SEN(shmget),			"shmget"		},
[195] = { 3,	TI,		SEN(shmctl),			"shmctl"		},
[196] = { 3,	TI|TM|SI,	SEN(shmat),			"shmat"			},
[197] = { 1,	TI|TM|SI,	SEN(shmdt),			"shmdt"			},
[198] = { 3,	TN,		SEN(socket),			"socket"		},
[199] = { 4,	TN,		SEN(socketpair),		"socketpair"		},
[200] = { 3,	TN,		SEN(bind),			"bind"			},
[201] = { 2,	TN,		SEN(listen),			"listen"		},
[202] = { 3,	TN,		SEN(accept),			"accept"		},
[203] = { 3,	TN,		SEN(connect),			"connect"		},
[204] = { 3,	TN,		SEN(getsockname),		"getsockname"		},
[205] = { 3,	TN,		SEN(getpeername),		"getpeername"		},
[206] = { 6,	TN,		SEN(sendto),			"sendto"		},
[207] = { 6,	TN,		SEN(recvfrom),			"recvfrom"		},
[208] = { 5,	TN,		SEN(setsockopt),		"setsockopt"		},
[209] = { 5,	TN,		SEN(getsockopt),		"getsockopt"		},
[210] = { 2,	TN,		SEN(shutdown),			"shutdown"		},
[211] = { 3,	TN,		SEN(sendmsg),			"sendmsg"		},
[212] = { 3,	TN,		SEN(recvmsg),			"recvmsg"		},
[213] = { 4,	TD,		SEN(readahead),			"readahead"		},
[214] = { 1,	TM|SI,		SEN(brk),			"brk"			},
[215] = { 2,	TM|SI,		SEN(munmap),			"munmap"		},
[216] = { 5,	TM|SI,		SEN(mremap),			"mremap"		},
[217] = { 5,	0,		SEN(add_key),			"add_key"		},
[218] = { 4,	0,		SEN(request_key),		"request_key"		},
[219] = { 5,	0,		SEN(keyctl),			"keyctl"		},
[220] = { 5,	TP,		SEN(clone),			"clone"			},
[221] = { 3,	TF|TP|SE|SI,	SEN(execve),			"execve"		},
[222] = { 6,	TD|TM|SI,	SEN(ARCH_mmap),			"mmap2"			},
[223] = { 6,	TD,		SEN(fadvise64_64),		"fadvise64_64"		},
[224] = { 2,	TF,		SEN(swapon),			"swapon"		},
[225] = { 1,	TF,		SEN(swapoff),			"swapoff"		},
[226] = { 3,	TM|SI,		SEN(mprotect),			"mprotect"		},
[227] = { 3,	TM,		SEN(msync),			"msync"			},
[228] = { 2,	TM,		SEN(mlock),			"mlock"			},
[229] = { 2,	TM,		SEN(munlock),			"munlock"		},
[230] = { 1,	TM,		SEN(mlockall),			"mlockall"		},
[231] = { 0,	TM,		SEN(munlockall),		"munlockall"		},
[232] = { 3,	TM,		SEN(mincore),			"mincore"		},
[233] = { 3,	TM,		SEN(madvise),			"madvise"		},
[234] = { 5,	TM|SI,		SEN(remap_file_pages),		"remap_file_pages"	},
[235] = { 6,	TM,		SEN(mbind),			"mbind"			},
[236] = { 5,	TM,		SEN(get_mempolicy),		"get_mempolicy"		},
[237] = { 3,	TM,		SEN(set_mempolicy),		"set_mempolicy"		},
[238] = { 4,	TM,		SEN(migrate_pages),		"migrate_pages"		},
[239] = { 6,	TM,		SEN(move_pages),		"move_pages"		},
[240] = { 4,	TP|TS,		SEN(rt_tgsigqueueinfo),		"rt_tgsigqueueinfo"	},
[241] = { 5,	TD,		SEN(perf_event_open),		"perf_event_open"	},
[242] = { 4,	TN,		SEN(accept4),			"accept4"		},
[243] = { 5,	TN,		SEN(recvmmsg_time32),		"recvmmsg"		},
/* [244 ... 259] are arch specific */
[260] = { 4,	TP,		SEN(wait4),			"wait4"			},
[261] = { 4,	0,		SEN(prlimit64),			"prlimit64"		},
[262] = { 2,	TD,		SEN(fanotify_init),		"fanotify_init"		},
[263] = { 6,	TD|TF,		SEN(fanotify_mark),		"fanotify_mark"		},
[264] = { 5,	TD|TF,		SEN(name_to_handle_at),		"name_to_handle_at"	},
[265] = { 3,	TD,		SEN(open_by_handle_at),		"open_by_handle_at"	},
[266] = { 2,	0,		SEN(clock_adjtime32),		"clock_adjtime"		},
[267] = { 1,	TD,		SEN(syncfs),			"syncfs"		},
[268] = { 2,	TD,		SEN(setns),			"setns"			},
[269] = { 4,	TN,		SEN(sendmmsg),			"sendmmsg"		},
[270] = { 6,	0,		SEN(process_vm_readv),		"process_vm_readv"	},
[271] = { 6,	0,		SEN(process_vm_writev),		"process_vm_writev"	},
[272] = { 5,	0,		SEN(kcmp),			"kcmp"			},
[273] = { 3,	TD,		SEN(finit_module),		"finit_module"		},
[274] = { 3,	0,		SEN(sched_setattr),		"sched_setattr"		},
[275] = { 4,	0,		SEN(sched_getattr),		"sched_getattr"		},
[276] = { 5,	TD|TF,		SEN(renameat2),			"renameat2"		},
[277] = { 3,	0,		SEN(seccomp),			"seccomp"		},
[278] = { 3,	0,		SEN(getrandom),			"getrandom"		},
[279] = { 2,	TD,		SEN(memfd_create),		"memfd_create"		},
[280] = { 3,	TD,		SEN(bpf),			"bpf"			},
[281] = { 5,	TD|TF|TP|SE|SI,	SEN(execveat),			"execveat"		},
[282] = { 1,	TD,		SEN(userfaultfd),		"userfaultfd"		},
[283] = { 2,	0,		SEN(membarrier),		"membarrier"		},
[284] = { 3,	TM,		SEN(mlock2),			"mlock2"		},
[285] = { 6,	TD,		SEN(copy_file_range),		"copy_file_range"	},
[286] = { 6,	TD,		SEN(preadv2),			"preadv2"		},
[287] = { 6,	TD,		SEN(pwritev2),			"pwritev2"		},
[288] = { 4,	TM|SI,		SEN(pkey_mprotect),		"pkey_mprotect"		},
[289] = { 2,	0,		SEN(pkey_alloc),		"pkey_alloc"		},
[290] = { 1,	0,		SEN(pkey_free),			"pkey_free"		},
[291] = { 5,	TD|TF|TSTA,	SEN(statx),			"statx"			},
[292] = { 6,	0,		SEN(io_pgetevents_time32),	"io_pgetevents"		},
[293] = { 4,	0,		SEN(rseq),			"rseq"			},
[294] = { 5,	TD,		SEN(kexec_file_load),		"kexec_file_load"	},
[403] = { 2,	0,		SEN(clock_gettime64),		"clock_gettime64"	},
[404] = { 2,	0,		SEN(clock_settime64),		"clock_settime64"	},
[405] = { 2,	0,		SEN(clock_adjtime64),		"clock_adjtime64"	},
[406] = { 2,	0,		SEN(clock_getres_time64),	"clock_getres_time64"	},
[407] = { 4,	0,		SEN(clock_nanosleep_time64),	"clock_nanosleep_time64"},
[408] = { 2,	0,		SEN(timer_gettime64),		"timer_gettime64"	},
[409] = { 4,	0,		SEN(timer_settime64),		"timer_settime64"	},
[410] = { 2,	TD,		SEN(timerfd_gettime64),		"timerfd_gettime64"	},
[411] = { 4,	TD,		SEN(timerfd_settime64),		"timerfd_settime64"	},
[412] = { 4,	TD|TF,		SEN(utimensat_time64),		"utimensat_time64"	},
[413] = { 6,	TD,		SEN(pselect6_time64),		"pselect6_time64"	},
[414] = { 5,	TD,		SEN(ppoll_time64),		"ppoll_time64"		},
[416] = { 6,	0,		SEN(io_pgetevents_time64),	"io_pgetevents_time64"	},
[417] = { 5,	TN,		SEN(recvmmsg_time64),		"recvmmsg_time64"	},
[418] = { 5,	TD,		SEN(mq_timedsend_time64),	"mq_timedsend_time64"	},
[419] = { 5,	TD,		SEN(mq_timedreceive_time64),	"mq_timedreceive_time64"},
[420] = { 4,	TI,		SEN(semtimedop_time64),		"semtimedop_time64"	},
[421] = { 4,	TS,		SEN(rt_sigtimedwait_time64),	"rt_sigtimedwait_time64"},
[422] = { 6,	0,		SEN(futex_time64),		"futex_time64"		},
[423] = { 2,	0,		SEN(sched_rr_get_interval_time64),	"sched_rr_get_interval_time64"	},
[424] = { 4,	TD|TS,		SEN(pidfd_send_signal),		"pidfd_send_signal"	},
[425] = { 2,	TD,		SEN(io_uring_setup),		"io_uring_setup"	},
[426] = { 6,	TD|TS,		SEN(io_uring_enter),		"io_uring_enter"	},
[427] = { 4,	TD|TM,		SEN(io_uring_register),		"io_uring_register"	},

#undef sys_ARCH_mmap
#undef ARCH_WANT_SYNC_FILE_RANGE2
