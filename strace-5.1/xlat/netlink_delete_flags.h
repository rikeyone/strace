/* Generated by ./xlat/gen.sh from ./xlat/netlink_delete_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat netlink_delete_flags in mpers mode

# else

static
const struct xlat netlink_delete_flags[] = {
#if defined(NLM_F_NONREC) || (defined(HAVE_DECL_NLM_F_NONREC) && HAVE_DECL_NLM_F_NONREC)
  XLAT(NLM_F_NONREC),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
