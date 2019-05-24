/* Generated by ./xlat/gen.sh from ./xlat/sock_rds_options.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(RDS_CANCEL_SENT_TO) || (defined(HAVE_DECL_RDS_CANCEL_SENT_TO) && HAVE_DECL_RDS_CANCEL_SENT_TO)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_CANCEL_SENT_TO) == (1), "RDS_CANCEL_SENT_TO != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_CANCEL_SENT_TO 1
#endif
#if defined(RDS_GET_MR) || (defined(HAVE_DECL_RDS_GET_MR) && HAVE_DECL_RDS_GET_MR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_GET_MR) == (2), "RDS_GET_MR != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_GET_MR 2
#endif
#if defined(RDS_FREE_MR) || (defined(HAVE_DECL_RDS_FREE_MR) && HAVE_DECL_RDS_FREE_MR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_FREE_MR) == (3), "RDS_FREE_MR != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_FREE_MR 3
#endif
#if defined(RDS_BARRIER) || (defined(HAVE_DECL_RDS_BARRIER) && HAVE_DECL_RDS_BARRIER)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_BARRIER) == (4), "RDS_BARRIER != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_BARRIER 4
#endif
#if defined(RDS_RECVERR) || (defined(HAVE_DECL_RDS_RECVERR) && HAVE_DECL_RDS_RECVERR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_RECVERR) == (5), "RDS_RECVERR != 5");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_RECVERR 5
#endif
#if defined(RDS_CONG_MONITOR) || (defined(HAVE_DECL_RDS_CONG_MONITOR) && HAVE_DECL_RDS_CONG_MONITOR)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_CONG_MONITOR) == (6), "RDS_CONG_MONITOR != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_CONG_MONITOR 6
#endif
#if defined(RDS_GET_MR_FOR_DEST) || (defined(HAVE_DECL_RDS_GET_MR_FOR_DEST) && HAVE_DECL_RDS_GET_MR_FOR_DEST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_GET_MR_FOR_DEST) == (7), "RDS_GET_MR_FOR_DEST != 7");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_GET_MR_FOR_DEST 7
#endif
#if defined(SO_RDS_TRANSPORT) || (defined(HAVE_DECL_SO_RDS_TRANSPORT) && HAVE_DECL_SO_RDS_TRANSPORT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SO_RDS_TRANSPORT) == (8), "SO_RDS_TRANSPORT != 8");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SO_RDS_TRANSPORT 8
#endif
#if defined(SO_RDS_MSG_RXPATH_LATENCY) || (defined(HAVE_DECL_SO_RDS_MSG_RXPATH_LATENCY) && HAVE_DECL_SO_RDS_MSG_RXPATH_LATENCY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SO_RDS_MSG_RXPATH_LATENCY) == (10), "SO_RDS_MSG_RXPATH_LATENCY != 10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SO_RDS_MSG_RXPATH_LATENCY 10
#endif
#ifndef __hppa__
#if defined(SO_TIMESTAMP_OLD) || (defined(HAVE_DECL_SO_TIMESTAMP_OLD) && HAVE_DECL_SO_TIMESTAMP_OLD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SO_TIMESTAMP_OLD) == (29), "SO_TIMESTAMP_OLD != 29");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SO_TIMESTAMP_OLD 29
#endif
#endif
#if defined(RDS_INFO_COUNTERS) || (defined(HAVE_DECL_RDS_INFO_COUNTERS) && HAVE_DECL_RDS_INFO_COUNTERS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_INFO_COUNTERS) == (10000), "RDS_INFO_COUNTERS != 10000");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_INFO_COUNTERS 10000
#endif
#if defined(RDS_INFO_CONNECTIONS) || (defined(HAVE_DECL_RDS_INFO_CONNECTIONS) && HAVE_DECL_RDS_INFO_CONNECTIONS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_INFO_CONNECTIONS) == (10001), "RDS_INFO_CONNECTIONS != 10001");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_INFO_CONNECTIONS 10001
#endif
#if defined(RDS_INFO_FLOWS) || (defined(HAVE_DECL_RDS_INFO_FLOWS) && HAVE_DECL_RDS_INFO_FLOWS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_INFO_FLOWS) == (10002), "RDS_INFO_FLOWS != 10002");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_INFO_FLOWS 10002
#endif
#if defined(RDS_INFO_SEND_MESSAGES) || (defined(HAVE_DECL_RDS_INFO_SEND_MESSAGES) && HAVE_DECL_RDS_INFO_SEND_MESSAGES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_INFO_SEND_MESSAGES) == (10003), "RDS_INFO_SEND_MESSAGES != 10003");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_INFO_SEND_MESSAGES 10003
#endif
#if defined(RDS_INFO_RETRANS_MESSAGES) || (defined(HAVE_DECL_RDS_INFO_RETRANS_MESSAGES) && HAVE_DECL_RDS_INFO_RETRANS_MESSAGES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_INFO_RETRANS_MESSAGES) == (10004), "RDS_INFO_RETRANS_MESSAGES != 10004");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_INFO_RETRANS_MESSAGES 10004
#endif
#if defined(RDS_INFO_RECV_MESSAGES) || (defined(HAVE_DECL_RDS_INFO_RECV_MESSAGES) && HAVE_DECL_RDS_INFO_RECV_MESSAGES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_INFO_RECV_MESSAGES) == (10005), "RDS_INFO_RECV_MESSAGES != 10005");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_INFO_RECV_MESSAGES 10005
#endif
#if defined(RDS_INFO_SOCKETS) || (defined(HAVE_DECL_RDS_INFO_SOCKETS) && HAVE_DECL_RDS_INFO_SOCKETS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_INFO_SOCKETS) == (10006), "RDS_INFO_SOCKETS != 10006");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_INFO_SOCKETS 10006
#endif
#if defined(RDS_INFO_TCP_SOCKETS) || (defined(HAVE_DECL_RDS_INFO_TCP_SOCKETS) && HAVE_DECL_RDS_INFO_TCP_SOCKETS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_INFO_TCP_SOCKETS) == (10007), "RDS_INFO_TCP_SOCKETS != 10007");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_INFO_TCP_SOCKETS 10007
#endif
#if defined(RDS_INFO_IB_CONNECTIONS) || (defined(HAVE_DECL_RDS_INFO_IB_CONNECTIONS) && HAVE_DECL_RDS_INFO_IB_CONNECTIONS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_INFO_IB_CONNECTIONS) == (10008), "RDS_INFO_IB_CONNECTIONS != 10008");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_INFO_IB_CONNECTIONS 10008
#endif
#if defined(RDS_INFO_CONNECTION_STATS) || (defined(HAVE_DECL_RDS_INFO_CONNECTION_STATS) && HAVE_DECL_RDS_INFO_CONNECTION_STATS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_INFO_CONNECTION_STATS) == (10009), "RDS_INFO_CONNECTION_STATS != 10009");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_INFO_CONNECTION_STATS 10009
#endif
#if defined(RDS_INFO_IWARP_CONNECTIONS) || (defined(HAVE_DECL_RDS_INFO_IWARP_CONNECTIONS) && HAVE_DECL_RDS_INFO_IWARP_CONNECTIONS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((RDS_INFO_IWARP_CONNECTIONS) == (10010), "RDS_INFO_IWARP_CONNECTIONS != 10010");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define RDS_INFO_IWARP_CONNECTIONS 10010
#endif
#ifdef __hppa__
#if defined(SO_TIMESTAMP_OLD) || (defined(HAVE_DECL_SO_TIMESTAMP_OLD) && HAVE_DECL_SO_TIMESTAMP_OLD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SO_TIMESTAMP_OLD) == (0x4012), "SO_TIMESTAMP_OLD != 0x4012");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SO_TIMESTAMP_OLD 0x4012
#endif
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sock_rds_options in mpers mode

# else

static
const struct xlat sock_rds_options[] = {
 XLAT(RDS_CANCEL_SENT_TO),
 XLAT(RDS_GET_MR),
 XLAT(RDS_FREE_MR),
 XLAT(RDS_BARRIER),
 XLAT(RDS_RECVERR),
 XLAT(RDS_CONG_MONITOR),
 XLAT(RDS_GET_MR_FOR_DEST),
 XLAT(SO_RDS_TRANSPORT),
 XLAT(SO_RDS_MSG_RXPATH_LATENCY),

#ifndef __hppa__
 XLAT(SO_TIMESTAMP_OLD),
#endif

 XLAT(RDS_INFO_COUNTERS),
 XLAT(RDS_INFO_CONNECTIONS),
 XLAT(RDS_INFO_FLOWS),
 XLAT(RDS_INFO_SEND_MESSAGES),
 XLAT(RDS_INFO_RETRANS_MESSAGES),
 XLAT(RDS_INFO_RECV_MESSAGES),
 XLAT(RDS_INFO_SOCKETS),
 XLAT(RDS_INFO_TCP_SOCKETS),
 XLAT(RDS_INFO_IB_CONNECTIONS),
 XLAT(RDS_INFO_CONNECTION_STATS),
 XLAT(RDS_INFO_IWARP_CONNECTIONS),

#ifdef __hppa__
 XLAT(SO_TIMESTAMP_OLD),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
