/* Generated by ./xlat/gen.sh from ./xlat/futexops.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(FUTEX_WAIT) || (defined(HAVE_DECL_FUTEX_WAIT) && HAVE_DECL_FUTEX_WAIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_WAIT) == (0), "FUTEX_WAIT != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_WAIT 0
#endif
#if defined(FUTEX_WAKE) || (defined(HAVE_DECL_FUTEX_WAKE) && HAVE_DECL_FUTEX_WAKE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_WAKE) == (1), "FUTEX_WAKE != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_WAKE 1
#endif
#if defined(FUTEX_FD) || (defined(HAVE_DECL_FUTEX_FD) && HAVE_DECL_FUTEX_FD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_FD) == (2), "FUTEX_FD != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_FD 2
#endif
#if defined(FUTEX_REQUEUE) || (defined(HAVE_DECL_FUTEX_REQUEUE) && HAVE_DECL_FUTEX_REQUEUE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_REQUEUE) == (3), "FUTEX_REQUEUE != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_REQUEUE 3
#endif
#if defined(FUTEX_CMP_REQUEUE) || (defined(HAVE_DECL_FUTEX_CMP_REQUEUE) && HAVE_DECL_FUTEX_CMP_REQUEUE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_CMP_REQUEUE) == (4), "FUTEX_CMP_REQUEUE != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_CMP_REQUEUE 4
#endif
#if defined(FUTEX_WAKE_OP) || (defined(HAVE_DECL_FUTEX_WAKE_OP) && HAVE_DECL_FUTEX_WAKE_OP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_WAKE_OP) == (5), "FUTEX_WAKE_OP != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_WAKE_OP 5
#endif
#if defined(FUTEX_LOCK_PI) || (defined(HAVE_DECL_FUTEX_LOCK_PI) && HAVE_DECL_FUTEX_LOCK_PI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_LOCK_PI) == (6), "FUTEX_LOCK_PI != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_LOCK_PI 6
#endif
#if defined(FUTEX_UNLOCK_PI) || (defined(HAVE_DECL_FUTEX_UNLOCK_PI) && HAVE_DECL_FUTEX_UNLOCK_PI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_UNLOCK_PI) == (7), "FUTEX_UNLOCK_PI != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_UNLOCK_PI 7
#endif
#if defined(FUTEX_TRYLOCK_PI) || (defined(HAVE_DECL_FUTEX_TRYLOCK_PI) && HAVE_DECL_FUTEX_TRYLOCK_PI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_TRYLOCK_PI) == (8), "FUTEX_TRYLOCK_PI != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_TRYLOCK_PI 8
#endif
#if defined(FUTEX_WAIT_BITSET) || (defined(HAVE_DECL_FUTEX_WAIT_BITSET) && HAVE_DECL_FUTEX_WAIT_BITSET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_WAIT_BITSET) == (9), "FUTEX_WAIT_BITSET != 9");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_WAIT_BITSET 9
#endif
#if defined(FUTEX_WAKE_BITSET) || (defined(HAVE_DECL_FUTEX_WAKE_BITSET) && HAVE_DECL_FUTEX_WAKE_BITSET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_WAKE_BITSET) == (10), "FUTEX_WAKE_BITSET != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_WAKE_BITSET 10
#endif
#if defined(FUTEX_WAIT_REQUEUE_PI) || (defined(HAVE_DECL_FUTEX_WAIT_REQUEUE_PI) && HAVE_DECL_FUTEX_WAIT_REQUEUE_PI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_WAIT_REQUEUE_PI) == (11), "FUTEX_WAIT_REQUEUE_PI != 11");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_WAIT_REQUEUE_PI 11
#endif
#if defined(FUTEX_CMP_REQUEUE_PI) || (defined(HAVE_DECL_FUTEX_CMP_REQUEUE_PI) && HAVE_DECL_FUTEX_CMP_REQUEUE_PI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_CMP_REQUEUE_PI) == (12), "FUTEX_CMP_REQUEUE_PI != 12");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_CMP_REQUEUE_PI 12
#endif
#if defined(FUTEX_WAIT_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAIT_PRIVATE) && HAVE_DECL_FUTEX_WAIT_PRIVATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_WAIT_PRIVATE) == ((FUTEX_WAIT | FUTEX_PRIVATE_FLAG)), "FUTEX_WAIT_PRIVATE != (FUTEX_WAIT | FUTEX_PRIVATE_FLAG)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_WAIT_PRIVATE (FUTEX_WAIT | FUTEX_PRIVATE_FLAG)
#endif
#if defined(FUTEX_WAKE_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAKE_PRIVATE) && HAVE_DECL_FUTEX_WAKE_PRIVATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_WAKE_PRIVATE) == ((FUTEX_WAKE | FUTEX_PRIVATE_FLAG)), "FUTEX_WAKE_PRIVATE != (FUTEX_WAKE | FUTEX_PRIVATE_FLAG)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_WAKE_PRIVATE (FUTEX_WAKE | FUTEX_PRIVATE_FLAG)
#endif
#if defined(FUTEX_REQUEUE_PRIVATE) || (defined(HAVE_DECL_FUTEX_REQUEUE_PRIVATE) && HAVE_DECL_FUTEX_REQUEUE_PRIVATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_REQUEUE_PRIVATE) == ((FUTEX_REQUEUE | FUTEX_PRIVATE_FLAG)), "FUTEX_REQUEUE_PRIVATE != (FUTEX_REQUEUE | FUTEX_PRIVATE_FLAG)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_REQUEUE_PRIVATE (FUTEX_REQUEUE | FUTEX_PRIVATE_FLAG)
#endif
#if defined(FUTEX_CMP_REQUEUE_PRIVATE) || (defined(HAVE_DECL_FUTEX_CMP_REQUEUE_PRIVATE) && HAVE_DECL_FUTEX_CMP_REQUEUE_PRIVATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_CMP_REQUEUE_PRIVATE) == ((FUTEX_CMP_REQUEUE | FUTEX_PRIVATE_FLAG)), "FUTEX_CMP_REQUEUE_PRIVATE != (FUTEX_CMP_REQUEUE | FUTEX_PRIVATE_FLAG)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_CMP_REQUEUE_PRIVATE (FUTEX_CMP_REQUEUE | FUTEX_PRIVATE_FLAG)
#endif
#if defined(FUTEX_WAKE_OP_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAKE_OP_PRIVATE) && HAVE_DECL_FUTEX_WAKE_OP_PRIVATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_WAKE_OP_PRIVATE) == ((FUTEX_WAKE_OP | FUTEX_PRIVATE_FLAG)), "FUTEX_WAKE_OP_PRIVATE != (FUTEX_WAKE_OP | FUTEX_PRIVATE_FLAG)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_WAKE_OP_PRIVATE (FUTEX_WAKE_OP | FUTEX_PRIVATE_FLAG)
#endif
#if defined(FUTEX_LOCK_PI_PRIVATE) || (defined(HAVE_DECL_FUTEX_LOCK_PI_PRIVATE) && HAVE_DECL_FUTEX_LOCK_PI_PRIVATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_LOCK_PI_PRIVATE) == ((FUTEX_LOCK_PI | FUTEX_PRIVATE_FLAG)), "FUTEX_LOCK_PI_PRIVATE != (FUTEX_LOCK_PI | FUTEX_PRIVATE_FLAG)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_LOCK_PI_PRIVATE (FUTEX_LOCK_PI | FUTEX_PRIVATE_FLAG)
#endif
#if defined(FUTEX_UNLOCK_PI_PRIVATE) || (defined(HAVE_DECL_FUTEX_UNLOCK_PI_PRIVATE) && HAVE_DECL_FUTEX_UNLOCK_PI_PRIVATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_UNLOCK_PI_PRIVATE) == ((FUTEX_UNLOCK_PI | FUTEX_PRIVATE_FLAG)), "FUTEX_UNLOCK_PI_PRIVATE != (FUTEX_UNLOCK_PI | FUTEX_PRIVATE_FLAG)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_UNLOCK_PI_PRIVATE (FUTEX_UNLOCK_PI | FUTEX_PRIVATE_FLAG)
#endif
#if defined(FUTEX_TRYLOCK_PI_PRIVATE) || (defined(HAVE_DECL_FUTEX_TRYLOCK_PI_PRIVATE) && HAVE_DECL_FUTEX_TRYLOCK_PI_PRIVATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_TRYLOCK_PI_PRIVATE) == ((FUTEX_TRYLOCK_PI | FUTEX_PRIVATE_FLAG)), "FUTEX_TRYLOCK_PI_PRIVATE != (FUTEX_TRYLOCK_PI | FUTEX_PRIVATE_FLAG)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_TRYLOCK_PI_PRIVATE (FUTEX_TRYLOCK_PI | FUTEX_PRIVATE_FLAG)
#endif
#if defined(FUTEX_WAIT_BITSET_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAIT_BITSET_PRIVATE) && HAVE_DECL_FUTEX_WAIT_BITSET_PRIVATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_WAIT_BITSET_PRIVATE) == ((FUTEX_WAIT_BITSET | FUTEX_PRIVATE_FLAG)), "FUTEX_WAIT_BITSET_PRIVATE != (FUTEX_WAIT_BITSET | FUTEX_PRIVATE_FLAG)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_WAIT_BITSET_PRIVATE (FUTEX_WAIT_BITSET | FUTEX_PRIVATE_FLAG)
#endif
#if defined(FUTEX_WAKE_BITSET_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAKE_BITSET_PRIVATE) && HAVE_DECL_FUTEX_WAKE_BITSET_PRIVATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_WAKE_BITSET_PRIVATE) == ((FUTEX_WAKE_BITSET | FUTEX_PRIVATE_FLAG)), "FUTEX_WAKE_BITSET_PRIVATE != (FUTEX_WAKE_BITSET | FUTEX_PRIVATE_FLAG)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_WAKE_BITSET_PRIVATE (FUTEX_WAKE_BITSET | FUTEX_PRIVATE_FLAG)
#endif
#if defined(FUTEX_WAIT_REQUEUE_PI_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAIT_REQUEUE_PI_PRIVATE) && HAVE_DECL_FUTEX_WAIT_REQUEUE_PI_PRIVATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_WAIT_REQUEUE_PI_PRIVATE) == ((FUTEX_WAIT_REQUEUE_PI | FUTEX_PRIVATE_FLAG)), "FUTEX_WAIT_REQUEUE_PI_PRIVATE != (FUTEX_WAIT_REQUEUE_PI | FUTEX_PRIVATE_FLAG)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_WAIT_REQUEUE_PI_PRIVATE (FUTEX_WAIT_REQUEUE_PI | FUTEX_PRIVATE_FLAG)
#endif
#if defined(FUTEX_CMP_REQUEUE_PI_PRIVATE) || (defined(HAVE_DECL_FUTEX_CMP_REQUEUE_PI_PRIVATE) && HAVE_DECL_FUTEX_CMP_REQUEUE_PI_PRIVATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((FUTEX_CMP_REQUEUE_PI_PRIVATE) == ((FUTEX_CMP_REQUEUE_PI | FUTEX_PRIVATE_FLAG)), "FUTEX_CMP_REQUEUE_PI_PRIVATE != (FUTEX_CMP_REQUEUE_PI | FUTEX_PRIVATE_FLAG)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define FUTEX_CMP_REQUEUE_PI_PRIVATE (FUTEX_CMP_REQUEUE_PI | FUTEX_PRIVATE_FLAG)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat futexops in mpers mode

# else

static
const struct xlat futexops[] = {
 XLAT(FUTEX_WAIT),
 XLAT(FUTEX_WAKE),
 XLAT(FUTEX_FD),
 XLAT(FUTEX_REQUEUE),
 XLAT(FUTEX_CMP_REQUEUE),
 XLAT(FUTEX_WAKE_OP),
 XLAT(FUTEX_LOCK_PI),
 XLAT(FUTEX_UNLOCK_PI),
 XLAT(FUTEX_TRYLOCK_PI),
 XLAT(FUTEX_WAIT_BITSET),
 XLAT(FUTEX_WAKE_BITSET),
 XLAT(FUTEX_WAIT_REQUEUE_PI),
 XLAT(FUTEX_CMP_REQUEUE_PI),
 XLAT(FUTEX_WAIT_PRIVATE),
 XLAT(FUTEX_WAKE_PRIVATE),
#if defined(FUTEX_FD) || (defined(HAVE_DECL_FUTEX_FD) && HAVE_DECL_FUTEX_FD)
  XLAT(FUTEX_FD|FUTEX_PRIVATE_FLAG),
#endif
 XLAT(FUTEX_REQUEUE_PRIVATE),
 XLAT(FUTEX_CMP_REQUEUE_PRIVATE),
 XLAT(FUTEX_WAKE_OP_PRIVATE),
 XLAT(FUTEX_LOCK_PI_PRIVATE),
 XLAT(FUTEX_UNLOCK_PI_PRIVATE),
 XLAT(FUTEX_TRYLOCK_PI_PRIVATE),
 XLAT(FUTEX_WAIT_BITSET_PRIVATE),
 XLAT(FUTEX_WAKE_BITSET_PRIVATE),
 XLAT(FUTEX_WAIT_REQUEUE_PI_PRIVATE),
 XLAT(FUTEX_CMP_REQUEUE_PI_PRIVATE),
#if defined(FUTEX_WAIT) || (defined(HAVE_DECL_FUTEX_WAIT) && HAVE_DECL_FUTEX_WAIT)
  XLAT(FUTEX_WAIT|FUTEX_CLOCK_REALTIME),
#endif
#if defined(FUTEX_WAIT_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAIT_PRIVATE) && HAVE_DECL_FUTEX_WAIT_PRIVATE)
  XLAT(FUTEX_WAIT_PRIVATE|FUTEX_CLOCK_REALTIME),
#endif
#if defined(FUTEX_WAIT_BITSET) || (defined(HAVE_DECL_FUTEX_WAIT_BITSET) && HAVE_DECL_FUTEX_WAIT_BITSET)
  XLAT(FUTEX_WAIT_BITSET|FUTEX_CLOCK_REALTIME),
#endif
#if defined(FUTEX_WAIT_BITSET_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAIT_BITSET_PRIVATE) && HAVE_DECL_FUTEX_WAIT_BITSET_PRIVATE)
  XLAT(FUTEX_WAIT_BITSET_PRIVATE|FUTEX_CLOCK_REALTIME),
#endif
#if defined(FUTEX_WAIT_REQUEUE_PI) || (defined(HAVE_DECL_FUTEX_WAIT_REQUEUE_PI) && HAVE_DECL_FUTEX_WAIT_REQUEUE_PI)
  XLAT(FUTEX_WAIT_REQUEUE_PI|FUTEX_CLOCK_REALTIME),
#endif
#if defined(FUTEX_WAIT_REQUEUE_PI_PRIVATE) || (defined(HAVE_DECL_FUTEX_WAIT_REQUEUE_PI_PRIVATE) && HAVE_DECL_FUTEX_WAIT_REQUEUE_PI_PRIVATE)
  XLAT(FUTEX_WAIT_REQUEUE_PI_PRIVATE|FUTEX_CLOCK_REALTIME),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
