/* Generated by ./xlat/gen.sh from ./xlat/priorities.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat priorities in mpers mode

# else

static
const struct xlat priorities[] = {
#if defined(PRIO_PROCESS) || (defined(HAVE_DECL_PRIO_PROCESS) && HAVE_DECL_PRIO_PROCESS)
  XLAT(PRIO_PROCESS),
#endif
#if defined(PRIO_PGRP) || (defined(HAVE_DECL_PRIO_PGRP) && HAVE_DECL_PRIO_PGRP)
  XLAT(PRIO_PGRP),
#endif
#if defined(PRIO_USER) || (defined(HAVE_DECL_PRIO_USER) && HAVE_DECL_PRIO_USER)
  XLAT(PRIO_USER),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
