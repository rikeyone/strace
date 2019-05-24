/* Generated by ./xlat/gen.sh from ./xlat/bpf_map_update_elem_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_ANY) || (defined(HAVE_DECL_BPF_ANY) && HAVE_DECL_BPF_ANY)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_ANY) == (0), "BPF_ANY != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_ANY 0
#endif
#if defined(BPF_NOEXIST) || (defined(HAVE_DECL_BPF_NOEXIST) && HAVE_DECL_BPF_NOEXIST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_NOEXIST) == (1), "BPF_NOEXIST != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_NOEXIST 1
#endif
#if defined(BPF_EXIST) || (defined(HAVE_DECL_BPF_EXIST) && HAVE_DECL_BPF_EXIST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_EXIST) == (2), "BPF_EXIST != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_EXIST 2
#endif
#if defined(BPF_F_LOCK) || (defined(HAVE_DECL_BPF_F_LOCK) && HAVE_DECL_BPF_F_LOCK)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_F_LOCK) == (4), "BPF_F_LOCK != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_F_LOCK 4
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_map_update_elem_flags in mpers mode

# else

static
const struct xlat bpf_map_update_elem_flags[] = {
 [BPF_ANY] = XLAT(BPF_ANY),
 [BPF_NOEXIST] = XLAT(BPF_NOEXIST),
 [BPF_EXIST] = XLAT(BPF_EXIST),
 [BPF_F_LOCK] = XLAT(BPF_F_LOCK),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
