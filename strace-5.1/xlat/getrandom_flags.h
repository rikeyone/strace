/* Generated by ./xlat/gen.sh from ./xlat/getrandom_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(GRND_NONBLOCK) || (defined(HAVE_DECL_GRND_NONBLOCK) && HAVE_DECL_GRND_NONBLOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((GRND_NONBLOCK) == (1), "GRND_NONBLOCK != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define GRND_NONBLOCK 1
#endif
#if defined(GRND_RANDOM) || (defined(HAVE_DECL_GRND_RANDOM) && HAVE_DECL_GRND_RANDOM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((GRND_RANDOM) == (2), "GRND_RANDOM != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define GRND_RANDOM 2
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat getrandom_flags in mpers mode

# else

static
const struct xlat getrandom_flags[] = {
 XLAT(GRND_NONBLOCK),
 XLAT(GRND_RANDOM),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
