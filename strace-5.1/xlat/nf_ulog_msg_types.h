/* Generated by ./xlat/gen.sh from ./xlat/nf_ulog_msg_types.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(NFULNL_MSG_PACKET) || (defined(HAVE_DECL_NFULNL_MSG_PACKET) && HAVE_DECL_NFULNL_MSG_PACKET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFULNL_MSG_PACKET) == (0), "NFULNL_MSG_PACKET != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFULNL_MSG_PACKET 0
#endif
#if defined(NFULNL_MSG_CONFIG) || (defined(HAVE_DECL_NFULNL_MSG_CONFIG) && HAVE_DECL_NFULNL_MSG_CONFIG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((NFULNL_MSG_CONFIG) == (1), "NFULNL_MSG_CONFIG != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define NFULNL_MSG_CONFIG 1
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat nf_ulog_msg_types in mpers mode

# else

static
const struct xlat nf_ulog_msg_types[] = {
 XLAT(NFULNL_MSG_PACKET),
 XLAT(NFULNL_MSG_CONFIG),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
