/*
 * Copyright (C) 2007, 2008 Francesco Salvestrini
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

#ifndef LIBC_PARAM_H
#define LIBC_PARAM_H

#include "config/config.h"
#include "libs/c/limits.h"

__BEGIN_DECLS

#define NBBY        CHAR_BIT

/* Bit map related macros.  */
#define setbit(a,i) ((a)[(i)  / NBBY] |= 1 << ((i) %   NBBY))
#define clrbit(a,i) ((a)[(i)  / NBBY] &= ~(1 << ((i) % NBBY)))
#define isset(a,i)  ((a)[(i)  / NBBY] &  (1 << ((i) %  NBBY)))
#define isclr(a,i)  (((a)[(i) / NBBY] &  (1 << ((i) %  NBBY))) == 0)

/* Macros for min/max.  */
#define MIN(a,b)    (((a) < (b)) ? (a) : (b))
#define MAX(a,b)    (((a) > (b)) ? (a) : (b))

__END_DECLS

#endif /* LIBC_PARAM_H */
