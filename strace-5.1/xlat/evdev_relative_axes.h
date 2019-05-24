/* Generated by ./xlat/gen.sh from ./xlat/evdev_relative_axes.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(REL_X) || (defined(HAVE_DECL_REL_X) && HAVE_DECL_REL_X)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((REL_X) == (0x00), "REL_X != 0x00");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define REL_X 0x00
#endif
#if defined(REL_Y) || (defined(HAVE_DECL_REL_Y) && HAVE_DECL_REL_Y)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((REL_Y) == (0x01), "REL_Y != 0x01");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define REL_Y 0x01
#endif
#if defined(REL_Z) || (defined(HAVE_DECL_REL_Z) && HAVE_DECL_REL_Z)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((REL_Z) == (0x02), "REL_Z != 0x02");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define REL_Z 0x02
#endif
#if defined(REL_RX) || (defined(HAVE_DECL_REL_RX) && HAVE_DECL_REL_RX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((REL_RX) == (0x03), "REL_RX != 0x03");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define REL_RX 0x03
#endif
#if defined(REL_RY) || (defined(HAVE_DECL_REL_RY) && HAVE_DECL_REL_RY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((REL_RY) == (0x04), "REL_RY != 0x04");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define REL_RY 0x04
#endif
#if defined(REL_RZ) || (defined(HAVE_DECL_REL_RZ) && HAVE_DECL_REL_RZ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((REL_RZ) == (0x05), "REL_RZ != 0x05");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define REL_RZ 0x05
#endif
#if defined(REL_HWHEEL) || (defined(HAVE_DECL_REL_HWHEEL) && HAVE_DECL_REL_HWHEEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((REL_HWHEEL) == (0x06), "REL_HWHEEL != 0x06");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define REL_HWHEEL 0x06
#endif
#if defined(REL_DIAL) || (defined(HAVE_DECL_REL_DIAL) && HAVE_DECL_REL_DIAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((REL_DIAL) == (0x07), "REL_DIAL != 0x07");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define REL_DIAL 0x07
#endif
#if defined(REL_WHEEL) || (defined(HAVE_DECL_REL_WHEEL) && HAVE_DECL_REL_WHEEL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((REL_WHEEL) == (0x08), "REL_WHEEL != 0x08");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define REL_WHEEL 0x08
#endif
#if defined(REL_MISC) || (defined(HAVE_DECL_REL_MISC) && HAVE_DECL_REL_MISC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((REL_MISC) == (0x09), "REL_MISC != 0x09");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define REL_MISC 0x09
#endif
#if defined(REL_RESERVED) || (defined(HAVE_DECL_REL_RESERVED) && HAVE_DECL_REL_RESERVED)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((REL_RESERVED) == (0x0a), "REL_RESERVED != 0x0a");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define REL_RESERVED 0x0a
#endif
#if defined(REL_WHEEL_HI_RES) || (defined(HAVE_DECL_REL_WHEEL_HI_RES) && HAVE_DECL_REL_WHEEL_HI_RES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((REL_WHEEL_HI_RES) == (0x0b), "REL_WHEEL_HI_RES != 0x0b");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define REL_WHEEL_HI_RES 0x0b
#endif
#if defined(REL_HWHEEL_HI_RES) || (defined(HAVE_DECL_REL_HWHEEL_HI_RES) && HAVE_DECL_REL_HWHEEL_HI_RES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((REL_HWHEEL_HI_RES) == (0x0c), "REL_HWHEEL_HI_RES != 0x0c");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define REL_HWHEEL_HI_RES 0x0c
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat evdev_relative_axes in mpers mode

# else

static
const struct xlat evdev_relative_axes[] = {
 [REL_X] = XLAT(REL_X),
 [REL_Y] = XLAT(REL_Y),
 [REL_Z] = XLAT(REL_Z),
 [REL_RX] = XLAT(REL_RX),
 [REL_RY] = XLAT(REL_RY),
 [REL_RZ] = XLAT(REL_RZ),
 [REL_HWHEEL] = XLAT(REL_HWHEEL),
 [REL_DIAL] = XLAT(REL_DIAL),
 [REL_WHEEL] = XLAT(REL_WHEEL),
 [REL_MISC] = XLAT(REL_MISC),
 [REL_RESERVED] = XLAT(REL_RESERVED),
 [REL_WHEEL_HI_RES] = XLAT(REL_WHEEL_HI_RES),
 [REL_HWHEEL_HI_RES] = XLAT(REL_HWHEEL_HI_RES),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
