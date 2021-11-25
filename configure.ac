#                                               -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.
AC_PREREQ([2.69])
AC_INIT([Cakelisp], [0.3.0], [macoy@macoy.me])
AM_INIT_AUTOMAKE([-Wall foreign subdir-objects])
AC_CONFIG_SRCDIR([3rdPartySrc/FindVisualStudio.cpp])
AC_CONFIG_HEADERS([config.h])
AC_CANONICAL_HOST

# Checks for programs.
AC_PROG_CXX
AC_PROG_CPP

# Checks for libraries.
AC_CHECK_LIB([dl], [dlopen], [], [
AC_MSG_FAILURE([unable to find dl library directory])
])

# Checks for header files.
AC_CHECK_HEADERS([fcntl.h stdint.h stdlib.h string.h strings.h unistd.h])

# Checks for typedefs, structures, and compiler characteristics.
AC_CHECK_HEADER_STDBOOL
AC_C_INLINE
AC_TYPE_INT32_T
AC_TYPE_INT64_T
AC_TYPE_PID_T
AC_TYPE_SIZE_T
AC_TYPE_UINT32_T
AC_TYPE_UINT8_T

# Checks for library functions.
AC_FUNC_ERROR_AT_LINE
AC_FUNC_FORK
AC_FUNC_MALLOC
AC_CHECK_FUNCS([dup2 mkdir realpath strstr])

case "${host_os}" in
    linux*)
        AC_SUBST([CAKELISP_BOOTSTRAP], [Bootstrap.cake])
		AC_SUBST([CAKELISP_RUNTIME], [Config_Linux.cake])
        ;;
    cygwin*|mingw*)
        AC_SUBST([CAKELISP_BOOTSTRAP], [Bootstrap_MSVC.cake])
		AC_SUBST([CAKELISP_RUNTIME], [Config_Mingw.cake])
        ;;
    *)
        AC_SUBST([CAKELISP_BOOTSTRAP], [Bootstrap_MSVC.cake])
		AC_SUBST([CAKELISP_RUNTIME], [Config_Windows.cake])
        ;;
esac

AC_CONFIG_FILES([Makefile
                 doc/Makefile
                 src/Makefile])
AC_OUTPUT
