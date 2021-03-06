/*
 * Copyright (C) 2008, 2009 Francesco Salvestrini
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along
 * with this program; if not, write to the Free Software Foundation, Inc.,
 * 51 Franklin Street, Fifth Floor, Boston, MA 02110-1301 USA.
 */

#ifndef ELKLIB_LIBC_LIMITS_H
#define ELKLIB_LIBC_LIMITS_H

#include "elklib.h"
#include "libc/limits.h"
#include "libc/bits/wordsize.h"
#include "libcompiler/cdefs.h"

__BEGIN_DECLS

/*
 * Type  Minsize Minval (signed)  Maxval (signed)  Maxval (unsigned)
 * char  8       -127             127              255
 * short 16      -32,767          32,767           65,535
 * int   16      -32,767          32,767           65,535
 * long  32      -2,147,483,647   2,147,483,647    4,294,967,295
 *
 * These values are the minimums guaranteed by the Standard. Many
 * implementations allow larger values, but portable programs shouldn't depend
 * on it.
 */

#define CHAR_BIT    8

#define SCHAR_MIN   (-128)
#define SCHAR_MAX   127
#define UCHAR_MAX   255

#define SHRT_MAX    ((short) (~0>>1))
#define SHRT_MIN    ((-SHRT_MAX) - 1)
#define USHRT_MAX   ((unsigned short) (~0))

#define INT_MAX     ((int) (~0>>1))
#define INT_MIN     ((-INT_MAX) - 1)
#define UINT_MAX    ((unsigned int) (~0))

/* XXX FIXME: Please fix the following define ASAP */
#define FLT_MAX     ((float) (~0>>1))
#define FLT_MIN     ((-FLT_MAX) - 1)
#define DBL_MAX     ((double) (~0>>1))
#define DBL_MIN     ((-DBL_MAX) - 1)
#define LDBL_MAX    ((long double) (~0>>1))
#define LDBL_MIN    ((-LDBL_MAX) - 1)

#define UINTPTR_MAX UINT_MAX

#if __WORDSIZE == 64
#define LONG_MAX    9223372036854775807L
#else
#define LONG_MAX    2147483647L
#endif
#define LONG_MIN    (-LONG_MAX - 1L)

/* Maximum value an `unsigned long int' can hold.  (Minimum is 0.)  */
#if __WORDSIZE == 64
#define ULONG_MAX   18446744073709551615UL
#else
#define ULONG_MAX   4294967295UL
#endif

#define LLONG_MAX   9223372036854775807LL
#define LLONG_MIN   (-LLONG_MAX - 1LL)
#define ULLONG_MAX  18446744073709551615ULL

#define PATH_MAX    4096

__END_DECLS

#endif /* ELKLIB_LIBC_LIMITS_H */
