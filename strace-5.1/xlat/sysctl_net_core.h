/* Generated by ./xlat/gen.sh from ./xlat/sysctl_net_core.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sysctl_net_core in mpers mode

# else

static
const struct xlat sysctl_net_core[] = {
 XLAT(NET_CORE_WMEM_MAX),
 XLAT(NET_CORE_RMEM_MAX),
 XLAT(NET_CORE_WMEM_DEFAULT),
 XLAT(NET_CORE_RMEM_DEFAULT),
 XLAT(NET_CORE_MAX_BACKLOG),
 XLAT(NET_CORE_FASTROUTE),
 XLAT(NET_CORE_MSG_COST),
 XLAT(NET_CORE_MSG_BURST),
 XLAT(NET_CORE_OPTMEM_MAX),
 XLAT(NET_CORE_HOT_LIST_LENGTH),
 XLAT(NET_CORE_DIVERT_VERSION),
 XLAT(NET_CORE_NO_CONG_THRESH),
 XLAT(NET_CORE_NO_CONG),
 XLAT(NET_CORE_LO_CONG),
 XLAT(NET_CORE_MOD_CONG),
 XLAT(NET_CORE_DEV_WEIGHT),
 XLAT(NET_CORE_SOMAXCONN),
#if defined(NET_CORE_DESTROY_DELAY) || (defined(HAVE_DECL_NET_CORE_DESTROY_DELAY) && HAVE_DECL_NET_CORE_DESTROY_DELAY)
  XLAT(NET_CORE_DESTROY_DELAY),
#endif
#if defined(NET_CORE_BUDGET) || (defined(HAVE_DECL_NET_CORE_BUDGET) && HAVE_DECL_NET_CORE_BUDGET)
  XLAT(NET_CORE_BUDGET),
#endif
#if defined(NET_CORE_AEVENT_ETIME) || (defined(HAVE_DECL_NET_CORE_AEVENT_ETIME) && HAVE_DECL_NET_CORE_AEVENT_ETIME)
  XLAT(NET_CORE_AEVENT_ETIME),
#endif
#if defined(NET_CORE_AEVENT_RSEQTH) || (defined(HAVE_DECL_NET_CORE_AEVENT_RSEQTH) && HAVE_DECL_NET_CORE_AEVENT_RSEQTH)
  XLAT(NET_CORE_AEVENT_RSEQTH),
#endif
#if defined(NET_CORE_WARNINGS) || (defined(HAVE_DECL_NET_CORE_WARNINGS) && HAVE_DECL_NET_CORE_WARNINGS)
  XLAT(NET_CORE_WARNINGS),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
