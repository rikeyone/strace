/* Generated by ./xlat/gen.sh from ./xlat/sa_handler_values.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sa_handler_values in mpers mode

# else

static
const struct xlat sa_handler_values[] = {
#if defined(SIG_ERR) || (defined(HAVE_DECL_SIG_ERR) && HAVE_DECL_SIG_ERR)
  XLAT_TYPE(unsigned long, SIG_ERR),
#endif
#if defined(SIG_DFL) || (defined(HAVE_DECL_SIG_DFL) && HAVE_DECL_SIG_DFL)
  XLAT_TYPE(unsigned long, SIG_DFL),
#endif
#if defined(SIG_IGN) || (defined(HAVE_DECL_SIG_IGN) && HAVE_DECL_SIG_IGN)
  XLAT_TYPE(unsigned long, SIG_IGN),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
