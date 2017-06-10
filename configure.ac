#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ([2.69])
AC_INIT([tash], [1.0], [marco.carvalho.swasthya@gmail.com])
AC_CONFIG_SRCDIR([src/tash.c])
AM_INIT_AUTOMAKE
# AC_CONFIG_HEADERS([ta-lib.h])

# Checks for programs.
AC_PROG_CC

# Checks for libraries.
# FIXME: Replace `main' with a function in `-lm':
# AC_CHECK_LIB([m], [main])
AC_CHECK_LIB(ta_lib, TA_GetVersionString)

# Checks for header files.

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.

AC_CONFIG_FILES([Makefile src/Makefile])
AC_OUTPUT
