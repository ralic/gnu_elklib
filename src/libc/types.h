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

#ifndef LIBC_TYPES_H
#define LIBC_TYPES_H

#include "config.h"
#include "libc/stddef.h"
#include "compiler/cdefs.h"

__BEGIN_DECLS

typedef uint_t mode_t;
typedef long   off_t;     /* XXX FIXME: Find a proper place ... */

__END_DECLS

#endif /* LIBC_TYPES_H */
