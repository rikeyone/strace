/* Generated by ./xlat/gen.sh from ./xlat/whence_codes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

const struct xlat whence_codes[] = {
#if defined(SEEK_SET) || (defined(HAVE_DECL_SEEK_SET) && HAVE_DECL_SEEK_SET)
  XLAT(SEEK_SET),
#endif
#if defined(SEEK_CUR) || (defined(HAVE_DECL_SEEK_CUR) && HAVE_DECL_SEEK_CUR)
  XLAT(SEEK_CUR),
#endif
#if defined(SEEK_END) || (defined(HAVE_DECL_SEEK_END) && HAVE_DECL_SEEK_END)
  XLAT(SEEK_END),
#endif
#if defined(SEEK_DATA) || (defined(HAVE_DECL_SEEK_DATA) && HAVE_DECL_SEEK_DATA)
  XLAT(SEEK_DATA),
#endif
#if defined(SEEK_HOLE) || (defined(HAVE_DECL_SEEK_HOLE) && HAVE_DECL_SEEK_HOLE)
  XLAT(SEEK_HOLE),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
