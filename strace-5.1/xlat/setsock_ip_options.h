/* Generated by ./xlat/gen.sh from ./xlat/setsock_ip_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat setsock_ip_options in mpers mode

# else

static
const struct xlat setsock_ip_options[] = {
/*
* Options specific to setsockopt(SOL_IP).
* Common {g,s}etsockopt(SOL_IP) options
* should be in sock_ip_options.in instead.
*/

#if defined(ARPT_SO_SET_REPLACE) || (defined(HAVE_DECL_ARPT_SO_SET_REPLACE) && HAVE_DECL_ARPT_SO_SET_REPLACE)
  XLAT(ARPT_SO_SET_REPLACE),
#endif
#if defined(ARPT_SO_SET_ADD_COUNTERS) || (defined(HAVE_DECL_ARPT_SO_SET_ADD_COUNTERS) && HAVE_DECL_ARPT_SO_SET_ADD_COUNTERS)
  XLAT(ARPT_SO_SET_ADD_COUNTERS),
#endif

#if defined(EBT_SO_SET_ENTRIES) || (defined(HAVE_DECL_EBT_SO_SET_ENTRIES) && HAVE_DECL_EBT_SO_SET_ENTRIES)
  XLAT(EBT_SO_SET_ENTRIES),
#endif
#if defined(EBT_SO_SET_COUNTERS) || (defined(HAVE_DECL_EBT_SO_SET_COUNTERS) && HAVE_DECL_EBT_SO_SET_COUNTERS)
  XLAT(EBT_SO_SET_COUNTERS),
#endif

#if defined(IP_VS_SO_SET_NONE) || (defined(HAVE_DECL_IP_VS_SO_SET_NONE) && HAVE_DECL_IP_VS_SO_SET_NONE)
  XLAT(IP_VS_SO_SET_NONE),
#endif
#if defined(IP_VS_SO_SET_INSERT) || (defined(HAVE_DECL_IP_VS_SO_SET_INSERT) && HAVE_DECL_IP_VS_SO_SET_INSERT)
  XLAT(IP_VS_SO_SET_INSERT),
#endif
#if defined(IP_VS_SO_SET_ADD) || (defined(HAVE_DECL_IP_VS_SO_SET_ADD) && HAVE_DECL_IP_VS_SO_SET_ADD)
  XLAT(IP_VS_SO_SET_ADD),
#endif
#if defined(IP_VS_SO_SET_EDIT) || (defined(HAVE_DECL_IP_VS_SO_SET_EDIT) && HAVE_DECL_IP_VS_SO_SET_EDIT)
  XLAT(IP_VS_SO_SET_EDIT),
#endif
#if defined(IP_VS_SO_SET_DEL) || (defined(HAVE_DECL_IP_VS_SO_SET_DEL) && HAVE_DECL_IP_VS_SO_SET_DEL)
  XLAT(IP_VS_SO_SET_DEL),
#endif
#if defined(IP_VS_SO_SET_FLUSH) || (defined(HAVE_DECL_IP_VS_SO_SET_FLUSH) && HAVE_DECL_IP_VS_SO_SET_FLUSH)
  XLAT(IP_VS_SO_SET_FLUSH),
#endif
#if defined(IP_VS_SO_SET_LIST) || (defined(HAVE_DECL_IP_VS_SO_SET_LIST) && HAVE_DECL_IP_VS_SO_SET_LIST)
  XLAT(IP_VS_SO_SET_LIST),
#endif
#if defined(IP_VS_SO_SET_ADDDEST) || (defined(HAVE_DECL_IP_VS_SO_SET_ADDDEST) && HAVE_DECL_IP_VS_SO_SET_ADDDEST)
  XLAT(IP_VS_SO_SET_ADDDEST),
#endif
#if defined(IP_VS_SO_SET_DELDEST) || (defined(HAVE_DECL_IP_VS_SO_SET_DELDEST) && HAVE_DECL_IP_VS_SO_SET_DELDEST)
  XLAT(IP_VS_SO_SET_DELDEST),
#endif
#if defined(IP_VS_SO_SET_EDITDEST) || (defined(HAVE_DECL_IP_VS_SO_SET_EDITDEST) && HAVE_DECL_IP_VS_SO_SET_EDITDEST)
  XLAT(IP_VS_SO_SET_EDITDEST),
#endif
#if defined(IP_VS_SO_SET_TIMEOUT) || (defined(HAVE_DECL_IP_VS_SO_SET_TIMEOUT) && HAVE_DECL_IP_VS_SO_SET_TIMEOUT)
  XLAT(IP_VS_SO_SET_TIMEOUT),
#endif
#if defined(IP_VS_SO_SET_STARTDAEMON) || (defined(HAVE_DECL_IP_VS_SO_SET_STARTDAEMON) && HAVE_DECL_IP_VS_SO_SET_STARTDAEMON)
  XLAT(IP_VS_SO_SET_STARTDAEMON),
#endif
#if defined(IP_VS_SO_SET_STOPDAEMON) || (defined(HAVE_DECL_IP_VS_SO_SET_STOPDAEMON) && HAVE_DECL_IP_VS_SO_SET_STOPDAEMON)
  XLAT(IP_VS_SO_SET_STOPDAEMON),
#endif
#if defined(IP_VS_SO_SET_RESTORE) || (defined(HAVE_DECL_IP_VS_SO_SET_RESTORE) && HAVE_DECL_IP_VS_SO_SET_RESTORE)
  XLAT(IP_VS_SO_SET_RESTORE),
#endif
#if defined(IP_VS_SO_SET_SAVE) || (defined(HAVE_DECL_IP_VS_SO_SET_SAVE) && HAVE_DECL_IP_VS_SO_SET_SAVE)
  XLAT(IP_VS_SO_SET_SAVE),
#endif
#if defined(IP_VS_SO_SET_ZERO) || (defined(HAVE_DECL_IP_VS_SO_SET_ZERO) && HAVE_DECL_IP_VS_SO_SET_ZERO)
  XLAT(IP_VS_SO_SET_ZERO),
#endif

#if defined(IPT_SO_SET_REPLACE) || (defined(HAVE_DECL_IPT_SO_SET_REPLACE) && HAVE_DECL_IPT_SO_SET_REPLACE)
  XLAT(IPT_SO_SET_REPLACE),
#endif
#if defined(IPT_SO_SET_ADD_COUNTERS) || (defined(HAVE_DECL_IPT_SO_SET_ADD_COUNTERS) && HAVE_DECL_IPT_SO_SET_ADD_COUNTERS)
  XLAT(IPT_SO_SET_ADD_COUNTERS),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
