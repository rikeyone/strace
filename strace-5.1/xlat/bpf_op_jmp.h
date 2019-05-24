/* Generated by ./xlat/gen.sh from ./xlat/bpf_op_jmp.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(BPF_JA) || (defined(HAVE_DECL_BPF_JA) && HAVE_DECL_BPF_JA)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JA) == (0x00), "BPF_JA != 0x00");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JA 0x00
#endif
#if defined(BPF_JEQ) || (defined(HAVE_DECL_BPF_JEQ) && HAVE_DECL_BPF_JEQ)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JEQ) == (0x10), "BPF_JEQ != 0x10");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JEQ 0x10
#endif
#if defined(BPF_JGT) || (defined(HAVE_DECL_BPF_JGT) && HAVE_DECL_BPF_JGT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JGT) == (0x20), "BPF_JGT != 0x20");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JGT 0x20
#endif
#if defined(BPF_JGE) || (defined(HAVE_DECL_BPF_JGE) && HAVE_DECL_BPF_JGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JGE) == (0x30), "BPF_JGE != 0x30");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JGE 0x30
#endif
#if defined(BPF_JSET) || (defined(HAVE_DECL_BPF_JSET) && HAVE_DECL_BPF_JSET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JSET) == (0x40), "BPF_JSET != 0x40");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JSET 0x40
#endif
#if defined(BPF_JNE) || (defined(HAVE_DECL_BPF_JNE) && HAVE_DECL_BPF_JNE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JNE) == (0x50), "BPF_JNE != 0x50");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JNE 0x50
#endif
#if defined(BPF_JSGT) || (defined(HAVE_DECL_BPF_JSGT) && HAVE_DECL_BPF_JSGT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JSGT) == (0x60), "BPF_JSGT != 0x60");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JSGT 0x60
#endif
#if defined(BPF_JSGE) || (defined(HAVE_DECL_BPF_JSGE) && HAVE_DECL_BPF_JSGE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JSGE) == (0x70), "BPF_JSGE != 0x70");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JSGE 0x70
#endif
#if defined(BPF_CALL) || (defined(HAVE_DECL_BPF_CALL) && HAVE_DECL_BPF_CALL)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_CALL) == (0x80), "BPF_CALL != 0x80");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_CALL 0x80
#endif
#if defined(BPF_EXIT) || (defined(HAVE_DECL_BPF_EXIT) && HAVE_DECL_BPF_EXIT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_EXIT) == (0x90), "BPF_EXIT != 0x90");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_EXIT 0x90
#endif
#if defined(BPF_JLT) || (defined(HAVE_DECL_BPF_JLT) && HAVE_DECL_BPF_JLT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JLT) == (0xa0), "BPF_JLT != 0xa0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JLT 0xa0
#endif
#if defined(BPF_JLE) || (defined(HAVE_DECL_BPF_JLE) && HAVE_DECL_BPF_JLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JLE) == (0xb0), "BPF_JLE != 0xb0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JLE 0xb0
#endif
#if defined(BPF_JSLT) || (defined(HAVE_DECL_BPF_JSLT) && HAVE_DECL_BPF_JSLT)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JSLT) == (0xc0), "BPF_JSLT != 0xc0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JSLT 0xc0
#endif
#if defined(BPF_JSLE) || (defined(HAVE_DECL_BPF_JSLE) && HAVE_DECL_BPF_JSLE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((BPF_JSLE) == (0xd0), "BPF_JSLE != 0xd0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define BPF_JSLE 0xd0
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat bpf_op_jmp in mpers mode

# else

static
const struct xlat bpf_op_jmp[] = {
 XLAT(BPF_JA),
 XLAT(BPF_JEQ),
 XLAT(BPF_JGT),
 XLAT(BPF_JGE),
 XLAT(BPF_JSET),
 XLAT(BPF_JNE),
 XLAT(BPF_JSGT),
 XLAT(BPF_JSGE),
 XLAT(BPF_CALL),
 XLAT(BPF_EXIT),
 XLAT(BPF_JLT),
 XLAT(BPF_JLE),
 XLAT(BPF_JSLT),
 XLAT(BPF_JSLE),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
