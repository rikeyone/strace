/* Generated by ./xlat/gen.sh from ./xlat/socketlayers.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SOL_IP) || (defined(HAVE_DECL_SOL_IP) && HAVE_DECL_SOL_IP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_IP) == (0), "SOL_IP != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_IP 0
#endif
#if !(defined __alpha__ || defined __hppa__ || defined __mips__ || defined __sparc__)
#if defined(SOL_SOCKET) || (defined(HAVE_DECL_SOL_SOCKET) && HAVE_DECL_SOL_SOCKET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_SOCKET) == (1), "SOL_SOCKET != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_SOCKET 1
#endif
#endif
#if defined(SOL_TCP) || (defined(HAVE_DECL_SOL_TCP) && HAVE_DECL_SOL_TCP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_TCP) == (6), "SOL_TCP != 6");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_TCP 6
#endif
#if defined(SOL_UDP) || (defined(HAVE_DECL_SOL_UDP) && HAVE_DECL_SOL_UDP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_UDP) == (17), "SOL_UDP != 17");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_UDP 17
#endif
#if defined(SOL_IPV6) || (defined(HAVE_DECL_SOL_IPV6) && HAVE_DECL_SOL_IPV6)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_IPV6) == (41), "SOL_IPV6 != 41");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_IPV6 41
#endif
#if defined(SOL_ICMPV6) || (defined(HAVE_DECL_SOL_ICMPV6) && HAVE_DECL_SOL_ICMPV6)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_ICMPV6) == (58), "SOL_ICMPV6 != 58");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_ICMPV6 58
#endif
#if defined(SOL_CAN_BASE) || (defined(HAVE_DECL_SOL_CAN_BASE) && HAVE_DECL_SOL_CAN_BASE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_CAN_BASE) == (100), "SOL_CAN_BASE != 100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_CAN_BASE 100
#endif
#if defined(SOL_CAN_RAW) || (defined(HAVE_DECL_SOL_CAN_RAW) && HAVE_DECL_SOL_CAN_RAW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_CAN_RAW) == (101), "SOL_CAN_RAW != 101");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_CAN_RAW 101
#endif
#if defined(SOL_SCTP) || (defined(HAVE_DECL_SOL_SCTP) && HAVE_DECL_SOL_SCTP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_SCTP) == (132), "SOL_SCTP != 132");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_SCTP 132
#endif
#if defined(SOL_UDPLITE) || (defined(HAVE_DECL_SOL_UDPLITE) && HAVE_DECL_SOL_UDPLITE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_UDPLITE) == (136), "SOL_UDPLITE != 136");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_UDPLITE 136
#endif
#if defined(SOL_RAW) || (defined(HAVE_DECL_SOL_RAW) && HAVE_DECL_SOL_RAW)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_RAW) == (255), "SOL_RAW != 255");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_RAW 255
#endif
#if defined(SOL_IPX) || (defined(HAVE_DECL_SOL_IPX) && HAVE_DECL_SOL_IPX)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_IPX) == (256), "SOL_IPX != 256");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_IPX 256
#endif
#if defined(SOL_AX25) || (defined(HAVE_DECL_SOL_AX25) && HAVE_DECL_SOL_AX25)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_AX25) == (257), "SOL_AX25 != 257");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_AX25 257
#endif
#if defined(SOL_ATALK) || (defined(HAVE_DECL_SOL_ATALK) && HAVE_DECL_SOL_ATALK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_ATALK) == (258), "SOL_ATALK != 258");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_ATALK 258
#endif
#if defined(SOL_NETROM) || (defined(HAVE_DECL_SOL_NETROM) && HAVE_DECL_SOL_NETROM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_NETROM) == (259), "SOL_NETROM != 259");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_NETROM 259
#endif
#if defined(SOL_ROSE) || (defined(HAVE_DECL_SOL_ROSE) && HAVE_DECL_SOL_ROSE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_ROSE) == (260), "SOL_ROSE != 260");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_ROSE 260
#endif
#if defined(SOL_DECNET) || (defined(HAVE_DECL_SOL_DECNET) && HAVE_DECL_SOL_DECNET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_DECNET) == (261), "SOL_DECNET != 261");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_DECNET 261
#endif
#if defined(SOL_X25) || (defined(HAVE_DECL_SOL_X25) && HAVE_DECL_SOL_X25)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_X25) == (262), "SOL_X25 != 262");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_X25 262
#endif
#if defined(SOL_PACKET) || (defined(HAVE_DECL_SOL_PACKET) && HAVE_DECL_SOL_PACKET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_PACKET) == (263), "SOL_PACKET != 263");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_PACKET 263
#endif
#if defined(SOL_ATM) || (defined(HAVE_DECL_SOL_ATM) && HAVE_DECL_SOL_ATM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_ATM) == (264), "SOL_ATM != 264");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_ATM 264
#endif
#if defined(SOL_AAL) || (defined(HAVE_DECL_SOL_AAL) && HAVE_DECL_SOL_AAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_AAL) == (265), "SOL_AAL != 265");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_AAL 265
#endif
#if defined(SOL_IRDA) || (defined(HAVE_DECL_SOL_IRDA) && HAVE_DECL_SOL_IRDA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_IRDA) == (266), "SOL_IRDA != 266");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_IRDA 266
#endif
#if defined(SOL_NETBEUI) || (defined(HAVE_DECL_SOL_NETBEUI) && HAVE_DECL_SOL_NETBEUI)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_NETBEUI) == (267), "SOL_NETBEUI != 267");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_NETBEUI 267
#endif
#if defined(SOL_LLC) || (defined(HAVE_DECL_SOL_LLC) && HAVE_DECL_SOL_LLC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_LLC) == (268), "SOL_LLC != 268");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_LLC 268
#endif
#if defined(SOL_DCCP) || (defined(HAVE_DECL_SOL_DCCP) && HAVE_DECL_SOL_DCCP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_DCCP) == (269), "SOL_DCCP != 269");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_DCCP 269
#endif
#if defined(SOL_NETLINK) || (defined(HAVE_DECL_SOL_NETLINK) && HAVE_DECL_SOL_NETLINK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_NETLINK) == (270), "SOL_NETLINK != 270");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_NETLINK 270
#endif
#if defined(SOL_TIPC) || (defined(HAVE_DECL_SOL_TIPC) && HAVE_DECL_SOL_TIPC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_TIPC) == (271), "SOL_TIPC != 271");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_TIPC 271
#endif
#if defined(SOL_RXRPC) || (defined(HAVE_DECL_SOL_RXRPC) && HAVE_DECL_SOL_RXRPC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_RXRPC) == (272), "SOL_RXRPC != 272");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_RXRPC 272
#endif
#if defined(SOL_PPPOL2TP) || (defined(HAVE_DECL_SOL_PPPOL2TP) && HAVE_DECL_SOL_PPPOL2TP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_PPPOL2TP) == (273), "SOL_PPPOL2TP != 273");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_PPPOL2TP 273
#endif
#if defined(SOL_BLUETOOTH) || (defined(HAVE_DECL_SOL_BLUETOOTH) && HAVE_DECL_SOL_BLUETOOTH)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_BLUETOOTH) == (274), "SOL_BLUETOOTH != 274");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_BLUETOOTH 274
#endif
#if defined(SOL_PNPIPE) || (defined(HAVE_DECL_SOL_PNPIPE) && HAVE_DECL_SOL_PNPIPE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_PNPIPE) == (275), "SOL_PNPIPE != 275");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_PNPIPE 275
#endif
#if defined(SOL_RDS) || (defined(HAVE_DECL_SOL_RDS) && HAVE_DECL_SOL_RDS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_RDS) == (276), "SOL_RDS != 276");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_RDS 276
#endif
#if defined(SOL_IUCV) || (defined(HAVE_DECL_SOL_IUCV) && HAVE_DECL_SOL_IUCV)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_IUCV) == (277), "SOL_IUCV != 277");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_IUCV 277
#endif
#if defined(SOL_CAIF) || (defined(HAVE_DECL_SOL_CAIF) && HAVE_DECL_SOL_CAIF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_CAIF) == (278), "SOL_CAIF != 278");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_CAIF 278
#endif
#if defined(SOL_ALG) || (defined(HAVE_DECL_SOL_ALG) && HAVE_DECL_SOL_ALG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_ALG) == (279), "SOL_ALG != 279");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_ALG 279
#endif
#if defined(SOL_NFC) || (defined(HAVE_DECL_SOL_NFC) && HAVE_DECL_SOL_NFC)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_NFC) == (280), "SOL_NFC != 280");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_NFC 280
#endif
#if defined(SOL_KCM) || (defined(HAVE_DECL_SOL_KCM) && HAVE_DECL_SOL_KCM)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_KCM) == (281), "SOL_KCM != 281");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_KCM 281
#endif
#if defined(SOL_TLS) || (defined(HAVE_DECL_SOL_TLS) && HAVE_DECL_SOL_TLS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_TLS) == (282), "SOL_TLS != 282");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_TLS 282
#endif
#if defined(SOL_XDP) || (defined(HAVE_DECL_SOL_XDP) && HAVE_DECL_SOL_XDP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_XDP) == (283), "SOL_XDP != 283");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_XDP 283
#endif
#if defined __alpha__ || defined __hppa__ || defined __mips__ || defined __sparc__
#if defined(SOL_SOCKET) || (defined(HAVE_DECL_SOL_SOCKET) && HAVE_DECL_SOL_SOCKET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SOL_SOCKET) == (0xffff), "SOL_SOCKET != 0xffff");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SOL_SOCKET 0xffff
#endif
#endif

#ifndef XLAT_MACROS_ONLY

# ifndef IN_MPERS

const struct xlat socketlayers[] = {

 XLAT(SOL_IP),
#if !(defined __alpha__ || defined __hppa__ || defined __mips__ || defined __sparc__)
 XLAT(SOL_SOCKET),
#endif
 XLAT(SOL_TCP),
 XLAT(SOL_UDP),
 XLAT(SOL_IPV6),
 XLAT(SOL_ICMPV6),
 XLAT(SOL_CAN_BASE),
 XLAT(SOL_CAN_RAW),
 XLAT(SOL_SCTP),
 XLAT(SOL_UDPLITE),
 XLAT(SOL_RAW),
 XLAT(SOL_IPX),
 XLAT(SOL_AX25),
 XLAT(SOL_ATALK),
 XLAT(SOL_NETROM),
 XLAT(SOL_ROSE),
 XLAT(SOL_DECNET),
 XLAT(SOL_X25),
 XLAT(SOL_PACKET),
 XLAT(SOL_ATM),
 XLAT(SOL_AAL),
 XLAT(SOL_IRDA),
 XLAT(SOL_NETBEUI),
 XLAT(SOL_LLC),
 XLAT(SOL_DCCP),
 XLAT(SOL_NETLINK),
 XLAT(SOL_TIPC),
 XLAT(SOL_RXRPC),
 XLAT(SOL_PPPOL2TP),
 XLAT(SOL_BLUETOOTH),
 XLAT(SOL_PNPIPE),
 XLAT(SOL_RDS),
 XLAT(SOL_IUCV),
 XLAT(SOL_CAIF),
 XLAT(SOL_ALG),
 XLAT(SOL_NFC),
 XLAT(SOL_KCM),
 XLAT(SOL_TLS),
 XLAT(SOL_XDP),
#if defined __alpha__ || defined __hppa__ || defined __mips__ || defined __sparc__
 XLAT(SOL_SOCKET),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
