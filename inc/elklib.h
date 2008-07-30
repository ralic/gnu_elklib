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

#ifndef ELKLIB_H
#define ELKLIB_H

#define ELKLIB_PRINTF_BUFFER_LENGTH 1024
#define ELKLIB_VERSION              "0.0"

/* XXX FIXME: We should use the __BEGIN_DECLS and __END_DECLS macros instead */
#if defined(__cplusplus)
extern "C" {
#endif

	/* C glue */
	void elklib_c_init(void);
	void elklib_c_fini(void);

	/* C++ glue */
	void elklib_cxx_init(void);
	void elklib_cxx_fini(void);

#if defined(__cplusplus)
};
#endif

#endif /* ELKLIB_H */
