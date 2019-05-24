/* Generated by ./xlat/gen.sh from ./xlat/random_ioctl_cmds.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(RNDGETENTCNT) || (defined(HAVE_DECL_RNDGETENTCNT) && HAVE_DECL_RNDGETENTCNT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RNDGETENTCNT) == (_IOR( 'R', 0x00, int )), "RNDGETENTCNT != _IOR( 'R', 0x00, int )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RNDGETENTCNT _IOR( 'R', 0x00, int )
#endif
#if defined(RNDADDTOENTCNT) || (defined(HAVE_DECL_RNDADDTOENTCNT) && HAVE_DECL_RNDADDTOENTCNT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RNDADDTOENTCNT) == (_IOW( 'R', 0x01, int )), "RNDADDTOENTCNT != _IOW( 'R', 0x01, int )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RNDADDTOENTCNT _IOW( 'R', 0x01, int )
#endif
#if defined(RNDGETPOOL) || (defined(HAVE_DECL_RNDGETPOOL) && HAVE_DECL_RNDGETPOOL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RNDGETPOOL) == (_IOR( 'R', 0x02, int [2] )), "RNDGETPOOL != _IOR( 'R', 0x02, int [2] )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RNDGETPOOL _IOR( 'R', 0x02, int [2] )
#endif
#if defined(RNDADDENTROPY) || (defined(HAVE_DECL_RNDADDENTROPY) && HAVE_DECL_RNDADDENTROPY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RNDADDENTROPY) == (_IOW( 'R', 0x03, int [2] )), "RNDADDENTROPY != _IOW( 'R', 0x03, int [2] )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RNDADDENTROPY _IOW( 'R', 0x03, int [2] )
#endif
#if defined(RNDZAPENTCNT) || (defined(HAVE_DECL_RNDZAPENTCNT) && HAVE_DECL_RNDZAPENTCNT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RNDZAPENTCNT) == (_IO( 'R', 0x04 )), "RNDZAPENTCNT != _IO( 'R', 0x04 )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RNDZAPENTCNT _IO( 'R', 0x04 )
#endif
#if defined(RNDCLEARPOOL) || (defined(HAVE_DECL_RNDCLEARPOOL) && HAVE_DECL_RNDCLEARPOOL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RNDCLEARPOOL) == (_IO( 'R', 0x06 )), "RNDCLEARPOOL != _IO( 'R', 0x06 )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RNDCLEARPOOL _IO( 'R', 0x06 )
#endif
#if defined(RNDRESEEDCRNG) || (defined(HAVE_DECL_RNDRESEEDCRNG) && HAVE_DECL_RNDRESEEDCRNG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RNDRESEEDCRNG) == (_IO( 'R', 0x07 )), "RNDRESEEDCRNG != _IO( 'R', 0x07 )");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RNDRESEEDCRNG _IO( 'R', 0x07 )
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat random_ioctl_cmds in mpers mode

# else

static
const struct xlat random_ioctl_cmds[] = {
 XLAT(RNDGETENTCNT),
 XLAT(RNDADDTOENTCNT),
 XLAT(RNDGETPOOL),
 XLAT(RNDADDENTROPY),
 XLAT(RNDZAPENTCNT),
 XLAT(RNDCLEARPOOL),
 XLAT(RNDRESEEDCRNG),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */