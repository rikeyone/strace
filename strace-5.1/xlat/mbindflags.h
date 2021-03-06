/* Generated by ./xlat/gen.sh from ./xlat/mbindflags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(MPOL_MF_STRICT) || (defined(HAVE_DECL_MPOL_MF_STRICT) && HAVE_DECL_MPOL_MF_STRICT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPOL_MF_STRICT) == (1), "MPOL_MF_STRICT != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MPOL_MF_STRICT 1
#endif
#if defined(MPOL_MF_MOVE) || (defined(HAVE_DECL_MPOL_MF_MOVE) && HAVE_DECL_MPOL_MF_MOVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPOL_MF_MOVE) == (2), "MPOL_MF_MOVE != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MPOL_MF_MOVE 2
#endif
#if defined(MPOL_MF_MOVE_ALL) || (defined(HAVE_DECL_MPOL_MF_MOVE_ALL) && HAVE_DECL_MPOL_MF_MOVE_ALL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((MPOL_MF_MOVE_ALL) == (4), "MPOL_MF_MOVE_ALL != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define MPOL_MF_MOVE_ALL 4
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat mbindflags in mpers mode

# else

static
const struct xlat mbindflags[] = {
 XLAT(MPOL_MF_STRICT),
 XLAT(MPOL_MF_MOVE),
 XLAT(MPOL_MF_MOVE_ALL),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
