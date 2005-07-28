#     							-*- Autoconf -*-
# serial 3
#
# Author: Martin Bravenboer <martin@cs.uu.nl>
#

# XT_ left in configure is the sign a macro was not defined, or there was a typo
# in a macro invocation.
m4_pattern_forbid([^XT_])

################################### INTERNAL STRATEGOXT MACROS #######################

# XT_INTERNAL_CHECK_STRATEGOXT
# ----------------------------
# Check for Stratego/XT in Stratego/XT itself.
AC_DEFUN([XT_INTERNAL_CHECK_STRATEGOXT],
[
  AC_REQUIRE([XT_WITH_STRATEGOXT_ARG])
  AC_REQUIRE([XT_CHECK_XTC])

  AC_MSG_CHECKING([whether location of Stratego/XT is explicitly set])
  if test "${STRATEGOXT:+set}" = set; then
    AC_MSG_RESULT([yes])
    XT_HANDLE_EXPLICIT_STRATEGOXT
  else
    AC_MSG_RESULT([no])

    # Try to find the Stratego/XT Packages using pkgconfig.
    #
    # No witnesses are used here, since some packages might not
    # yet be installed.
    XT_CHECK_PACKAGE([STRATEGOXT],[strategoxt])
    XT_CHECK_PACKAGE([STRATEGO_RUNTIME],[stratego-runtime])
    XT_CHECK_PACKAGE([STRATEGO_LIB],[stratego-lib])
  fi

  # backward compatibitily
  AC_SUBST([SRTS], ['$(STRATEGO_RUNTIME)'])

  # These packages need pkg-config files.
  AC_SUBST([STRC], ['$(STRATEGOXT)'])
  AC_SUBST([GPP], ['$(STRATEGOXT)'])
  AC_SUBST([STRATEGO_FRONT], ['$(STRATEGOXT)'])
  AC_SUBST([C_TOOLS], ['$(STRATEGOXT)'])
  AC_SUBST([ASFIX_TOOLS], ['$(STRATEGOXT)'])
  AC_SUBST([ATERM_FRONT], ['$(STRATEGOXT)'])
  AC_SUBST([SDF_FRONT], ['$(STRATEGOXT)'])
  AC_SUBST([SDF_TOOLS], ['$(STRATEGOXT)'])
  AC_SUBST([CONCRETE_SYNTAX], ['$(STRATEGOXT)'])
  AC_SUBST([XML_FRONT], ['$(STRATEGOXT)'])
  AC_SUBST([STRATEGO_REGULAR], ['$(STRATEGOXT)'])
])

# XT_INTERNAL_CHECK_PACKAGES
# --------------------------
AC_DEFUN([XT_INTERNAL_CHECK_PACKAGES],
[
  AC_REQUIRE([XT_CHECK_ATERM])
  AC_REQUIRE([XT_CHECK_SDF])
  AC_REQUIRE([XT_INTERNAL_CHECK_STRATEGOXT])
])

# XT_INTERNAL_USE_XT_PACKAGES
# -------------------
AC_DEFUN([XT_INTERNAL_USE_XT_PACKAGES],
[
  AC_REQUIRE([XT_SETUP])
  AC_REQUIRE([XT_WITH_XTC_ARGS])
  AC_REQUIRE([XT_INTERNAL_CHECK_PACKAGES])
])