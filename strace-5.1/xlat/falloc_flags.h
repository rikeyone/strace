/* Generated by ./xlat/gen.sh from ./xlat/falloc_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(FALLOC_FL_KEEP_SIZE) || (defined(HAVE_DECL_FALLOC_FL_KEEP_SIZE) && HAVE_DECL_FALLOC_FL_KEEP_SIZE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FALLOC_FL_KEEP_SIZE) == (0x01), "FALLOC_FL_KEEP_SIZE != 0x01");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FALLOC_FL_KEEP_SIZE 0x01
#endif
#if defined(FALLOC_FL_PUNCH_HOLE) || (defined(HAVE_DECL_FALLOC_FL_PUNCH_HOLE) && HAVE_DECL_FALLOC_FL_PUNCH_HOLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FALLOC_FL_PUNCH_HOLE) == (0x02), "FALLOC_FL_PUNCH_HOLE != 0x02");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FALLOC_FL_PUNCH_HOLE 0x02
#endif
#if defined(FALLOC_FL_NO_HIDE_STALE) || (defined(HAVE_DECL_FALLOC_FL_NO_HIDE_STALE) && HAVE_DECL_FALLOC_FL_NO_HIDE_STALE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FALLOC_FL_NO_HIDE_STALE) == (0x04), "FALLOC_FL_NO_HIDE_STALE != 0x04");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FALLOC_FL_NO_HIDE_STALE 0x04
#endif
#if defined(FALLOC_FL_COLLAPSE_RANGE) || (defined(HAVE_DECL_FALLOC_FL_COLLAPSE_RANGE) && HAVE_DECL_FALLOC_FL_COLLAPSE_RANGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FALLOC_FL_COLLAPSE_RANGE) == (0x08), "FALLOC_FL_COLLAPSE_RANGE != 0x08");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FALLOC_FL_COLLAPSE_RANGE 0x08
#endif
#if defined(FALLOC_FL_ZERO_RANGE) || (defined(HAVE_DECL_FALLOC_FL_ZERO_RANGE) && HAVE_DECL_FALLOC_FL_ZERO_RANGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FALLOC_FL_ZERO_RANGE) == (0x10), "FALLOC_FL_ZERO_RANGE != 0x10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FALLOC_FL_ZERO_RANGE 0x10
#endif
#if defined(FALLOC_FL_INSERT_RANGE) || (defined(HAVE_DECL_FALLOC_FL_INSERT_RANGE) && HAVE_DECL_FALLOC_FL_INSERT_RANGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FALLOC_FL_INSERT_RANGE) == (0x20), "FALLOC_FL_INSERT_RANGE != 0x20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FALLOC_FL_INSERT_RANGE 0x20
#endif
#if defined(FALLOC_FL_UNSHARE_RANGE) || (defined(HAVE_DECL_FALLOC_FL_UNSHARE_RANGE) && HAVE_DECL_FALLOC_FL_UNSHARE_RANGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FALLOC_FL_UNSHARE_RANGE) == (0x40), "FALLOC_FL_UNSHARE_RANGE != 0x40");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FALLOC_FL_UNSHARE_RANGE 0x40
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat falloc_flags in mpers mode

# else

static
const struct xlat falloc_flags[] = {
 XLAT(FALLOC_FL_KEEP_SIZE),
 XLAT(FALLOC_FL_PUNCH_HOLE),
 XLAT(FALLOC_FL_NO_HIDE_STALE),
 XLAT(FALLOC_FL_COLLAPSE_RANGE),
 XLAT(FALLOC_FL_ZERO_RANGE),
 XLAT(FALLOC_FL_INSERT_RANGE),
 XLAT(FALLOC_FL_UNSHARE_RANGE),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
