#####
#
# SYNOPSIS
#
#   AX_C___ATTRIBUTE___UNUSED
#
# DESCRIPTION
#
#   Provides a test for the compiler support of __attribute__((unused))
#   extensions.
#
#   defines HAVE___ATTRIBUTE___UNUSED if it is found.
#
# LAST MODIFICATION
#
#   2007-02-18
#
# COPYLEFT
#
#   Copyright (C) 2008 Francesco Salvestrini
#
# This program is free software; you can redistribute it and/or modify
# it under the terms of the GNU General Public License as published by
# the Free Software Foundation; either version 2 of the License, or
# (at your option) any later version.
#
# This program is distributed in the hope that it will be useful,
# but WITHOUT ANY WARRANTY; without even the implied warranty of
# MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
# GNU General Public License for more details.
#
# You should have received a copy of the GNU General Public License along
# with this program; if not, write to the Free Software Foundation, Inc.,
# 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
#

AC_DEFUN([AX_C___ATTRIBUTE___UNUSED], [
  AC_MSG_CHECKING(if compiler supports __attribute__((unused)))
  AC_CACHE_VAL(ax_cv_c__attribute___unused, [
    AC_COMPILE_IFELSE(
      AC_LANG_SOURCE([[
int
main(int argc, char **argv)
{
	int a  __attribute__ ((unused));

	return 0;
}
      ]]),
      ax_cv_c__attribute___unused=yes,
      ax_cv_c__attribute___unused=no
    )])
  if test "x$ax_cv_c__attribute___unused" != "xno" ; then
    AC_DEFINE(HAVE___ATTRIBUTE___UNUSED,,[Define if your compiler allows __attribute__((unused))])
  fi
  AC_MSG_RESULT($ax_cv_c__attribute___unused)
])
