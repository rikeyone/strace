/* Generated by ./xlat/gen.sh from ./xlat/sg_scsi_reset.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"

#if defined(SG_SCSI_RESET_NOTHING) || (defined(HAVE_DECL_SG_SCSI_RESET_NOTHING) && HAVE_DECL_SG_SCSI_RESET_NOTHING)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_SCSI_RESET_NOTHING) == (0), "SG_SCSI_RESET_NOTHING != 0");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_SCSI_RESET_NOTHING 0
#endif
#if defined(SG_SCSI_RESET_DEVICE) || (defined(HAVE_DECL_SG_SCSI_RESET_DEVICE) && HAVE_DECL_SG_SCSI_RESET_DEVICE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_SCSI_RESET_DEVICE) == (1), "SG_SCSI_RESET_DEVICE != 1");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_SCSI_RESET_DEVICE 1
#endif
#if defined(SG_SCSI_RESET_BUS) || (defined(HAVE_DECL_SG_SCSI_RESET_BUS) && HAVE_DECL_SG_SCSI_RESET_BUS)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_SCSI_RESET_BUS) == (2), "SG_SCSI_RESET_BUS != 2");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_SCSI_RESET_BUS 2
#endif
#if defined(SG_SCSI_RESET_HOST) || (defined(HAVE_DECL_SG_SCSI_RESET_HOST) && HAVE_DECL_SG_SCSI_RESET_HOST)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_SCSI_RESET_HOST) == (3), "SG_SCSI_RESET_HOST != 3");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_SCSI_RESET_HOST 3
#endif
#if defined(SG_SCSI_RESET_TARGET) || (defined(HAVE_DECL_SG_SCSI_RESET_TARGET) && HAVE_DECL_SG_SCSI_RESET_TARGET)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_SCSI_RESET_TARGET) == (4), "SG_SCSI_RESET_TARGET != 4");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_SCSI_RESET_TARGET 4
#endif
#if defined(SG_SCSI_RESET_NO_ESCALATE) || (defined(HAVE_DECL_SG_SCSI_RESET_NO_ESCALATE) && HAVE_DECL_SG_SCSI_RESET_NO_ESCALATE)
DIAG_PUSH_IGNORE_TAUTOLOGICAL_COMPARE
static_assert((SG_SCSI_RESET_NO_ESCALATE) == (0x100), "SG_SCSI_RESET_NO_ESCALATE != 0x100");
DIAG_POP_IGNORE_TAUTOLOGICAL_COMPARE
#else
# define SG_SCSI_RESET_NO_ESCALATE 0x100
#endif

#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat sg_scsi_reset in mpers mode

# else

static
const struct xlat sg_scsi_reset[] = {
 XLAT(SG_SCSI_RESET_NOTHING),
 XLAT(SG_SCSI_RESET_DEVICE),
 XLAT(SG_SCSI_RESET_BUS),
 XLAT(SG_SCSI_RESET_HOST),
 XLAT(SG_SCSI_RESET_TARGET),
 XLAT(SG_SCSI_RESET_NO_ESCALATE),
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
