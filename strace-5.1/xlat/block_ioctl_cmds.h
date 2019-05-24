/* Generated by ./xlat/gen.sh from ./xlat/block_ioctl_cmds.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BLKROSET) || (defined(HAVE_DECL_BLKROSET) && HAVE_DECL_BLKROSET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKROSET) == (_IO(0x12, 93)), "BLKROSET != _IO(0x12, 93)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKROSET _IO(0x12, 93)
#endif
#if defined(BLKROGET) || (defined(HAVE_DECL_BLKROGET) && HAVE_DECL_BLKROGET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKROGET) == (_IO(0x12, 94)), "BLKROGET != _IO(0x12, 94)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKROGET _IO(0x12, 94)
#endif
#if defined(BLKRRPART) || (defined(HAVE_DECL_BLKRRPART) && HAVE_DECL_BLKRRPART)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKRRPART) == (_IO(0x12, 95)), "BLKRRPART != _IO(0x12, 95)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKRRPART _IO(0x12, 95)
#endif
#if defined(BLKGETSIZE) || (defined(HAVE_DECL_BLKGETSIZE) && HAVE_DECL_BLKGETSIZE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKGETSIZE) == (_IO(0x12, 96)), "BLKGETSIZE != _IO(0x12, 96)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKGETSIZE _IO(0x12, 96)
#endif
#if defined(BLKFLSBUF) || (defined(HAVE_DECL_BLKFLSBUF) && HAVE_DECL_BLKFLSBUF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKFLSBUF) == (_IO(0x12, 97)), "BLKFLSBUF != _IO(0x12, 97)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKFLSBUF _IO(0x12, 97)
#endif
#if defined(BLKRASET) || (defined(HAVE_DECL_BLKRASET) && HAVE_DECL_BLKRASET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKRASET) == (_IO(0x12, 98)), "BLKRASET != _IO(0x12, 98)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKRASET _IO(0x12, 98)
#endif
#if defined(BLKRAGET) || (defined(HAVE_DECL_BLKRAGET) && HAVE_DECL_BLKRAGET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKRAGET) == (_IO(0x12, 99)), "BLKRAGET != _IO(0x12, 99)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKRAGET _IO(0x12, 99)
#endif
#if defined(BLKFRASET) || (defined(HAVE_DECL_BLKFRASET) && HAVE_DECL_BLKFRASET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKFRASET) == (_IO(0x12, 100)), "BLKFRASET != _IO(0x12, 100)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKFRASET _IO(0x12, 100)
#endif
#if defined(BLKFRAGET) || (defined(HAVE_DECL_BLKFRAGET) && HAVE_DECL_BLKFRAGET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKFRAGET) == (_IO(0x12, 101)), "BLKFRAGET != _IO(0x12, 101)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKFRAGET _IO(0x12, 101)
#endif
#if defined(BLKSECTSET) || (defined(HAVE_DECL_BLKSECTSET) && HAVE_DECL_BLKSECTSET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKSECTSET) == (_IO(0x12, 102)), "BLKSECTSET != _IO(0x12, 102)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKSECTSET _IO(0x12, 102)
#endif
#if defined(BLKSECTGET) || (defined(HAVE_DECL_BLKSECTGET) && HAVE_DECL_BLKSECTGET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKSECTGET) == (_IO(0x12, 103)), "BLKSECTGET != _IO(0x12, 103)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKSECTGET _IO(0x12, 103)
#endif
#if defined(BLKSSZGET) || (defined(HAVE_DECL_BLKSSZGET) && HAVE_DECL_BLKSSZGET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKSSZGET) == (_IO(0x12, 104)), "BLKSSZGET != _IO(0x12, 104)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKSSZGET _IO(0x12, 104)
#endif
#if defined(BLKPG) || (defined(HAVE_DECL_BLKPG) && HAVE_DECL_BLKPG)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKPG) == (_IO(0x12, 105)), "BLKPG != _IO(0x12, 105)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKPG _IO(0x12, 105)
#endif
#if defined(BLKELVGET) || (defined(HAVE_DECL_BLKELVGET) && HAVE_DECL_BLKELVGET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKELVGET) == (_IOR(0x12, 106, size_t)), "BLKELVGET != _IOR(0x12, 106, size_t)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKELVGET _IOR(0x12, 106, size_t)
#endif
#if defined(BLKELVSET) || (defined(HAVE_DECL_BLKELVSET) && HAVE_DECL_BLKELVSET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKELVSET) == (_IOW(0x12, 107, size_t)), "BLKELVSET != _IOW(0x12, 107, size_t)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKELVSET _IOW(0x12, 107, size_t)
#endif
#if defined(BLKBSZGET) || (defined(HAVE_DECL_BLKBSZGET) && HAVE_DECL_BLKBSZGET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKBSZGET) == (_IOR(0x12, 112, size_t)), "BLKBSZGET != _IOR(0x12, 112, size_t)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKBSZGET _IOR(0x12, 112, size_t)
#endif
#if defined(BLKBSZSET) || (defined(HAVE_DECL_BLKBSZSET) && HAVE_DECL_BLKBSZSET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKBSZSET) == (_IOW(0x12, 113, size_t)), "BLKBSZSET != _IOW(0x12, 113, size_t)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKBSZSET _IOW(0x12, 113, size_t)
#endif
#if defined(BLKGETSIZE64) || (defined(HAVE_DECL_BLKGETSIZE64) && HAVE_DECL_BLKGETSIZE64)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKGETSIZE64) == (_IOR(0x12, 114, size_t)), "BLKGETSIZE64 != _IOR(0x12, 114, size_t)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKGETSIZE64 _IOR(0x12, 114, size_t)
#endif
#if defined(BLKTRACESETUP) || (defined(HAVE_DECL_BLKTRACESETUP) && HAVE_DECL_BLKTRACESETUP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKTRACESETUP) == (_IOWR(0x12, 115, struct blk_user_trace_setup)), "BLKTRACESETUP != _IOWR(0x12, 115, struct blk_user_trace_setup)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKTRACESETUP _IOWR(0x12, 115, struct blk_user_trace_setup)
#endif
#if defined(BLKTRACESTART) || (defined(HAVE_DECL_BLKTRACESTART) && HAVE_DECL_BLKTRACESTART)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKTRACESTART) == (_IO(0x12, 116)), "BLKTRACESTART != _IO(0x12, 116)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKTRACESTART _IO(0x12, 116)
#endif
#if defined(BLKTRACESTOP) || (defined(HAVE_DECL_BLKTRACESTOP) && HAVE_DECL_BLKTRACESTOP)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKTRACESTOP) == (_IO(0x12, 117)), "BLKTRACESTOP != _IO(0x12, 117)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKTRACESTOP _IO(0x12, 117)
#endif
#if defined(BLKTRACETEARDOWN) || (defined(HAVE_DECL_BLKTRACETEARDOWN) && HAVE_DECL_BLKTRACETEARDOWN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKTRACETEARDOWN) == (_IO(0x12, 118)), "BLKTRACETEARDOWN != _IO(0x12, 118)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKTRACETEARDOWN _IO(0x12, 118)
#endif
#if defined(BLKDISCARD) || (defined(HAVE_DECL_BLKDISCARD) && HAVE_DECL_BLKDISCARD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKDISCARD) == (_IO(0x12, 119)), "BLKDISCARD != _IO(0x12, 119)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKDISCARD _IO(0x12, 119)
#endif
#if defined(BLKIOMIN) || (defined(HAVE_DECL_BLKIOMIN) && HAVE_DECL_BLKIOMIN)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKIOMIN) == (_IO(0x12, 120)), "BLKIOMIN != _IO(0x12, 120)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKIOMIN _IO(0x12, 120)
#endif
#if defined(BLKIOOPT) || (defined(HAVE_DECL_BLKIOOPT) && HAVE_DECL_BLKIOOPT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKIOOPT) == (_IO(0x12, 121)), "BLKIOOPT != _IO(0x12, 121)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKIOOPT _IO(0x12, 121)
#endif
#if defined(BLKALIGNOFF) || (defined(HAVE_DECL_BLKALIGNOFF) && HAVE_DECL_BLKALIGNOFF)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKALIGNOFF) == (_IO(0x12, 122)), "BLKALIGNOFF != _IO(0x12, 122)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKALIGNOFF _IO(0x12, 122)
#endif
#if defined(BLKPBSZGET) || (defined(HAVE_DECL_BLKPBSZGET) && HAVE_DECL_BLKPBSZGET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKPBSZGET) == (_IO(0x12, 123)), "BLKPBSZGET != _IO(0x12, 123)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKPBSZGET _IO(0x12, 123)
#endif
#if defined(BLKDISCARDZEROES) || (defined(HAVE_DECL_BLKDISCARDZEROES) && HAVE_DECL_BLKDISCARDZEROES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKDISCARDZEROES) == (_IO(0x12, 124)), "BLKDISCARDZEROES != _IO(0x12, 124)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKDISCARDZEROES _IO(0x12, 124)
#endif
#if defined(BLKSECDISCARD) || (defined(HAVE_DECL_BLKSECDISCARD) && HAVE_DECL_BLKSECDISCARD)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKSECDISCARD) == (_IO(0x12, 125)), "BLKSECDISCARD != _IO(0x12, 125)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKSECDISCARD _IO(0x12, 125)
#endif
#if defined(BLKROTATIONAL) || (defined(HAVE_DECL_BLKROTATIONAL) && HAVE_DECL_BLKROTATIONAL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKROTATIONAL) == (_IO(0x12, 126)), "BLKROTATIONAL != _IO(0x12, 126)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKROTATIONAL _IO(0x12, 126)
#endif
#if defined(BLKZEROOUT) || (defined(HAVE_DECL_BLKZEROOUT) && HAVE_DECL_BLKZEROOUT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKZEROOUT) == (_IO(0x12, 127)), "BLKZEROOUT != _IO(0x12, 127)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKZEROOUT _IO(0x12, 127)
#endif
#if defined(BLKDAXGET) || (defined(HAVE_DECL_BLKDAXGET) && HAVE_DECL_BLKDAXGET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKDAXGET) == (_IO(0x12, 129)), "BLKDAXGET != _IO(0x12, 129)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKDAXGET _IO(0x12, 129)
#endif
#if defined(BLKGETZONESZ) || (defined(HAVE_DECL_BLKGETZONESZ) && HAVE_DECL_BLKGETZONESZ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKGETZONESZ) == (_IOR(0x12, 132, uint32_t)), "BLKGETZONESZ != _IOR(0x12, 132, uint32_t)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKGETZONESZ _IOR(0x12, 132, uint32_t)
#endif
#if defined(BLKGETNRZONES) || (defined(HAVE_DECL_BLKGETNRZONES) && HAVE_DECL_BLKGETNRZONES)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BLKGETNRZONES) == (_IOR(0x12, 133, uint32_t)), "BLKGETNRZONES != _IOR(0x12, 133, uint32_t)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BLKGETNRZONES _IOR(0x12, 133, uint32_t)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

extern const struct xlat block_ioctl_cmds[];

# else

#  if !(defined HAVE_M32_MPERS || defined HAVE_MX32_MPERS)
static
#  endif
const struct xlat block_ioctl_cmds[] = {
 XLAT(BLKROSET),
 XLAT(BLKROGET),
 XLAT(BLKRRPART),
 XLAT(BLKGETSIZE),
 XLAT(BLKFLSBUF),
 XLAT(BLKRASET),
 XLAT(BLKRAGET),
 XLAT(BLKFRASET),
 XLAT(BLKFRAGET),
 XLAT(BLKSECTSET),
 XLAT(BLKSECTGET),
 XLAT(BLKSSZGET),
 XLAT(BLKPG),
 XLAT(BLKELVGET),
 XLAT(BLKELVSET),
 XLAT(BLKBSZGET),
 XLAT(BLKBSZSET),
 XLAT(BLKGETSIZE64),
 XLAT(BLKTRACESETUP),
 XLAT(BLKTRACESTART),
 XLAT(BLKTRACESTOP),
 XLAT(BLKTRACETEARDOWN),
 XLAT(BLKDISCARD),
 XLAT(BLKIOMIN),
 XLAT(BLKIOOPT),
 XLAT(BLKALIGNOFF),
 XLAT(BLKPBSZGET),
 XLAT(BLKDISCARDZEROES),
 XLAT(BLKSECDISCARD),
 XLAT(BLKROTATIONAL),
 XLAT(BLKZEROOUT),



 XLAT(BLKDAXGET),


 XLAT(BLKGETZONESZ),
 XLAT(BLKGETNRZONES),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
