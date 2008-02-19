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

#ifndef CDEFS_H
#define CDEFS_H

#include "config.h"

#if defined(__cplusplus)
#define __BEGIN_DECLS      extern "C" {
#define __END_DECLS        };
#else
#define __BEGIN_DECLS
#define __END_DECLS
#endif

#define __CONCAT2(X,Y)     X##Y
#define __CONCAT3(X,Y,Z)   X##Y##Z

#define __CONCAT(X,Y)      __CONCAT2(X,Y)
#define __STRING(X)        #X

#endif /* CDEFS_H */
