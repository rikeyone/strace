/* Generated by ./xlat/gen.sh from ./xlat/unshare_flags.in; do not edit. */

#include "gcc_compat.h"
#include "static_assert.h"


#ifndef XLAT_MACROS_ONLY

# ifdef IN_MPERS

#  error static const struct xlat unshare_flags in mpers mode

# else

static
const struct xlat unshare_flags[] = {
#if defined(CLONE_THREAD) || (defined(HAVE_DECL_CLONE_THREAD) && HAVE_DECL_CLONE_THREAD)
  XLAT(CLONE_THREAD),
#endif
#if defined(CLONE_FS) || (defined(HAVE_DECL_CLONE_FS) && HAVE_DECL_CLONE_FS)
  XLAT(CLONE_FS),
#endif
#if defined(CLONE_NEWNS) || (defined(HAVE_DECL_CLONE_NEWNS) && HAVE_DECL_CLONE_NEWNS)
  XLAT(CLONE_NEWNS),
#endif
#if defined(CLONE_SIGHAND) || (defined(HAVE_DECL_CLONE_SIGHAND) && HAVE_DECL_CLONE_SIGHAND)
  XLAT(CLONE_SIGHAND),
#endif
#if defined(CLONE_VM) || (defined(HAVE_DECL_CLONE_VM) && HAVE_DECL_CLONE_VM)
  XLAT(CLONE_VM),
#endif
#if defined(CLONE_FILES) || (defined(HAVE_DECL_CLONE_FILES) && HAVE_DECL_CLONE_FILES)
  XLAT(CLONE_FILES),
#endif
#if defined(CLONE_SYSVSEM) || (defined(HAVE_DECL_CLONE_SYSVSEM) && HAVE_DECL_CLONE_SYSVSEM)
  XLAT(CLONE_SYSVSEM),
#endif
#if defined(CLONE_NEWUTS) || (defined(HAVE_DECL_CLONE_NEWUTS) && HAVE_DECL_CLONE_NEWUTS)
  XLAT(CLONE_NEWUTS),
#endif
#if defined(CLONE_NEWIPC) || (defined(HAVE_DECL_CLONE_NEWIPC) && HAVE_DECL_CLONE_NEWIPC)
  XLAT(CLONE_NEWIPC),
#endif
#if defined(CLONE_NEWNET) || (defined(HAVE_DECL_CLONE_NEWNET) && HAVE_DECL_CLONE_NEWNET)
  XLAT(CLONE_NEWNET),
#endif
#if defined(CLONE_NEWUSER) || (defined(HAVE_DECL_CLONE_NEWUSER) && HAVE_DECL_CLONE_NEWUSER)
  XLAT(CLONE_NEWUSER),
#endif
#if defined(CLONE_NEWPID) || (defined(HAVE_DECL_CLONE_NEWPID) && HAVE_DECL_CLONE_NEWPID)
  XLAT(CLONE_NEWPID),
#endif
#if defined(CLONE_NEWCGROUP) || (defined(HAVE_DECL_CLONE_NEWCGROUP) && HAVE_DECL_CLONE_NEWCGROUP)
  XLAT(CLONE_NEWCGROUP),
#endif
 XLAT_END
};

# endif /* !IN_MPERS */

#endif /* !XLAT_MACROS_ONLY */
