/* Generated by ./xlat/gen.sh from ./xlat/btrfs_send_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BTRFS_SEND_FLAG_NO_FILE_DATA) || (defined(HAVE_DECL_BTRFS_SEND_FLAG_NO_FILE_DATA) && HAVE_DECL_BTRFS_SEND_FLAG_NO_FILE_DATA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_SEND_FLAG_NO_FILE_DATA) == (0x1), "BTRFS_SEND_FLAG_NO_FILE_DATA != 0x1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_SEND_FLAG_NO_FILE_DATA 0x1
#endif
#if defined(BTRFS_SEND_FLAG_OMIT_STREAM_HEADER) || (defined(HAVE_DECL_BTRFS_SEND_FLAG_OMIT_STREAM_HEADER) && HAVE_DECL_BTRFS_SEND_FLAG_OMIT_STREAM_HEADER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_SEND_FLAG_OMIT_STREAM_HEADER) == (0x2), "BTRFS_SEND_FLAG_OMIT_STREAM_HEADER != 0x2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_SEND_FLAG_OMIT_STREAM_HEADER 0x2
#endif
#if defined(BTRFS_SEND_FLAG_OMIT_END_CMD) || (defined(HAVE_DECL_BTRFS_SEND_FLAG_OMIT_END_CMD) && HAVE_DECL_BTRFS_SEND_FLAG_OMIT_END_CMD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BTRFS_SEND_FLAG_OMIT_END_CMD) == (0x4), "BTRFS_SEND_FLAG_OMIT_END_CMD != 0x4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BTRFS_SEND_FLAG_OMIT_END_CMD 0x4
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat btrfs_send_flags[];

# else

#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat btrfs_send_flags[] = {
 XLAT(BTRFS_SEND_FLAG_NO_FILE_DATA),
 XLAT(BTRFS_SEND_FLAG_OMIT_STREAM_HEADER),
 XLAT(BTRFS_SEND_FLAG_OMIT_END_CMD),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
