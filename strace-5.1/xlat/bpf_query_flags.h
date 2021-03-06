/* Generated by ./xlat/gen.sh from ./xlat/bpf_query_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_F_QUERY_EFFECTIVE) || (defined(HAVE_DECL_BPF_F_QUERY_EFFECTIVE) && HAVE_DECL_BPF_F_QUERY_EFFECTIVE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_F_QUERY_EFFECTIVE) == ((1U << 0)), "BPF_F_QUERY_EFFECTIVE != (1U << 0)");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_F_QUERY_EFFECTIVE (1U << 0)
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_query_flags in mpers mode

# else

static
const struct xlat bpf_query_flags[] = {
 XLAT(BPF_F_QUERY_EFFECTIVE),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
