#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.
AC_PREREQ([2.69])
AC_INIT([Cakelisp], [0.3.0], [macoy@macoy.me])
AM_INIT_AUTOMAKE([-Wall foreign subdir-objects])
AC_CONFIG_SRCDIR([3rdPartySrc/FindVisualStudio.cpp])
AC_CONFIG_HEADERS([config.h])
AC_CANONICAL_HOST

# Checks for programs.

# Checks for libraries.
AC_CHECK_LIB([dl], [dlopen], [], [
AC_MSG_FAILURE([unable to find dl library directory])
])

# Checks for header files.
AC_CHECK_HEADERS([fcntl.h stdint.h stdlib.h string.h strings.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.

# Checks for library functions.
AC_FUNC_ERROR_AT_LINE
AC_FUNC_FORK
AC_FUNC_MALLOC
AC_CHECK_FUNCS([dup2 mkdir realpath strstr])

case "${host_os}" in
    freebsd*|haiku*|linux*|macos*|netbsd*|openbsd*)
        AC_SUBST([CAKELISP_BUILD], [Build.sh])
		AC_SUBST([CAKELISP_TEST_FLAGS], [runtime/Config_Linux.cake])
        ;;
    *)
        AC_SUBST([CAKELISP_BUILD], [Build.bat])
		AC_SUBST([CAKELISP_TEST_FLAGS],
		[--execute runtime/Config_Windows.cake])
        ;;
esac

AC_CONFIG_FILES([Makefile
                 doc/Makefile])
AC_OUTPUT
