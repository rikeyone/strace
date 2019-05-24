/* Generated by ./xlat/gen.sh from ./xlat/fan_mark_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(FAN_MARK_ADD) || (defined(HAVE_DECL_FAN_MARK_ADD) && HAVE_DECL_FAN_MARK_ADD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_ADD) == (0x00000001), "FAN_MARK_ADD != 0x00000001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_ADD 0x00000001
#endif
#if defined(FAN_MARK_REMOVE) || (defined(HAVE_DECL_FAN_MARK_REMOVE) && HAVE_DECL_FAN_MARK_REMOVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_REMOVE) == (0x00000002), "FAN_MARK_REMOVE != 0x00000002");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_REMOVE 0x00000002
#endif
#if defined(FAN_MARK_DONT_FOLLOW) || (defined(HAVE_DECL_FAN_MARK_DONT_FOLLOW) && HAVE_DECL_FAN_MARK_DONT_FOLLOW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_DONT_FOLLOW) == (0x00000004), "FAN_MARK_DONT_FOLLOW != 0x00000004");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_DONT_FOLLOW 0x00000004
#endif
#if defined(FAN_MARK_ONLYDIR) || (defined(HAVE_DECL_FAN_MARK_ONLYDIR) && HAVE_DECL_FAN_MARK_ONLYDIR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_ONLYDIR) == (0x00000008), "FAN_MARK_ONLYDIR != 0x00000008");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_ONLYDIR 0x00000008
#endif
#if defined(FAN_MARK_MOUNT) || (defined(HAVE_DECL_FAN_MARK_MOUNT) && HAVE_DECL_FAN_MARK_MOUNT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_MOUNT) == (0x00000010), "FAN_MARK_MOUNT != 0x00000010");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_MOUNT 0x00000010
#endif
#if defined(FAN_MARK_IGNORED_MASK) || (defined(HAVE_DECL_FAN_MARK_IGNORED_MASK) && HAVE_DECL_FAN_MARK_IGNORED_MASK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_IGNORED_MASK) == (0x00000020), "FAN_MARK_IGNORED_MASK != 0x00000020");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_IGNORED_MASK 0x00000020
#endif
#if defined(FAN_MARK_IGNORED_SURV_MODIFY) || (defined(HAVE_DECL_FAN_MARK_IGNORED_SURV_MODIFY) && HAVE_DECL_FAN_MARK_IGNORED_SURV_MODIFY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_IGNORED_SURV_MODIFY) == (0x00000040), "FAN_MARK_IGNORED_SURV_MODIFY != 0x00000040");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_IGNORED_SURV_MODIFY 0x00000040
#endif
#if defined(FAN_MARK_FLUSH) || (defined(HAVE_DECL_FAN_MARK_FLUSH) && HAVE_DECL_FAN_MARK_FLUSH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_FLUSH) == (0x00000080), "FAN_MARK_FLUSH != 0x00000080");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_FLUSH 0x00000080
#endif
#if defined(FAN_MARK_FILESYSTEM) || (defined(HAVE_DECL_FAN_MARK_FILESYSTEM) && HAVE_DECL_FAN_MARK_FILESYSTEM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FAN_MARK_FILESYSTEM) == (0x00000100), "FAN_MARK_FILESYSTEM != 0x00000100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FAN_MARK_FILESYSTEM 0x00000100
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat fan_mark_flags in mpers mode

# else

static
const struct xlat fan_mark_flags[] = {
 XLAT(FAN_MARK_ADD),
 XLAT(FAN_MARK_REMOVE),
 XLAT(FAN_MARK_DONT_FOLLOW),
 XLAT(FAN_MARK_ONLYDIR),
 XLAT(FAN_MARK_MOUNT),
 XLAT(FAN_MARK_IGNORED_MASK),
 XLAT(FAN_MARK_IGNORED_SURV_MODIFY),
 XLAT(FAN_MARK_FLUSH),
 XLAT(FAN_MARK_FILESYSTEM),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
