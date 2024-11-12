#    -*- Autoconf -*-
# Process this file with autoconf to produce a configure script.

AC_PREREQ(2.65)
AC_INIT([libinterp],[0.13],[andrzej.odrzywolek@uj.edu.pl],[],[2024-11-12])
AC_CONFIG_SRCDIR([config.h.in])
AC_CONFIG_HEADERS([config.h])
AM_INIT_AUTOMAKE([-Wall -Werror gnu])
AC_CONFIG_MACRO_DIR([m4])
AM_PROG_AR
        
AC_CONFIG_FILES([                
Makefile
src/Makefile
doc/Makefile
])

# Checks for programs.
AC_PROG_CC
AM_PROG_CC_C_O
#AC_DISABLE_SHARED
LT_INIT
##LT_INIT([disable-shared])

# Checks for libraries.
AC_CHECK_LIB([m], [ceil])


# Checks for library functions.
AC_CHECK_FUNCS([ceil])

# Checks for header files.

AC_CHECK_HEADERS([math.h])


# Checks for typedefs, structures, and compiler characteristics.
AC_C_CONST
AC_C_INLINE
AC_HEADER_STDBOOL


AC_OUTPUT
