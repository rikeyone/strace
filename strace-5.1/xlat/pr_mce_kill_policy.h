/* Generated by ./xlat/gen.sh from ./xlat/pr_mce_kill_policy.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(PR_MCE_KILL_LATE) || (defined(HAVE_DECL_PR_MCE_KILL_LATE) && HAVE_DECL_PR_MCE_KILL_LATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_MCE_KILL_LATE) == (0), "PR_MCE_KILL_LATE != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_MCE_KILL_LATE 0
#endif
#if defined(PR_MCE_KILL_EARLY) || (defined(HAVE_DECL_PR_MCE_KILL_EARLY) && HAVE_DECL_PR_MCE_KILL_EARLY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_MCE_KILL_EARLY) == (1), "PR_MCE_KILL_EARLY != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_MCE_KILL_EARLY 1
#endif
#if defined(PR_MCE_KILL_DEFAULT) || (defined(HAVE_DECL_PR_MCE_KILL_DEFAULT) && HAVE_DECL_PR_MCE_KILL_DEFAULT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((PR_MCE_KILL_DEFAULT) == (2), "PR_MCE_KILL_DEFAULT != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define PR_MCE_KILL_DEFAULT 2
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat pr_mce_kill_policy in mpers mode

# else

static
const struct xlat pr_mce_kill_policy[] = {
 XLAT(PR_MCE_KILL_LATE),
 XLAT(PR_MCE_KILL_EARLY),
 XLAT(PR_MCE_KILL_DEFAULT),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
