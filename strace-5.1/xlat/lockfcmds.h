/* Generated by ./xlat/gen.sh from ./xlat/lockfcmds.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat lockfcmds in mpers mode

# else

static
const struct xlat lockfcmds[] = {
#if defined(F_RDLCK) || (defined(HAVE_DECL_F_RDLCK) && HAVE_DECL_F_RDLCK)
  XLAT(F_RDLCK),
#endif
#if defined(F_WRLCK) || (defined(HAVE_DECL_F_WRLCK) && HAVE_DECL_F_WRLCK)
  XLAT(F_WRLCK),
#endif
#if defined(F_UNLCK) || (defined(HAVE_DECL_F_UNLCK) && HAVE_DECL_F_UNLCK)
  XLAT(F_UNLCK),
#endif
#if defined(F_EXLCK) || (defined(HAVE_DECL_F_EXLCK) && HAVE_DECL_F_EXLCK)
  XLAT(F_EXLCK),
#endif
#if defined(F_SHLCK) || (defined(HAVE_DECL_F_SHLCK) && HAVE_DECL_F_SHLCK)
  XLAT(F_SHLCK),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
