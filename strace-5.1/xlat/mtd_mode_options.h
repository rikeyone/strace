/* Generated by ./xlat/gen.sh from ./xlat/mtd_mode_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat mtd_mode_options[];

# else

#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat mtd_mode_options[] = {
 XLAT(MTD_OPS_PLACE_OOB),
 XLAT(MTD_OPS_AUTO_OOB),
 XLAT(MTD_OPS_RAW),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
