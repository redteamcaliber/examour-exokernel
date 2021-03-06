/*
** This file is part of ExAmour

** Copyright (C) Remy Saissy <remy.saissy@epitech.net>
** ExAmour is free software; you can redistribute it and/or modify
** it under the terms of the GNU General Public License as published by
** the Free Software Foundation; either version 2 of the License, or
** (at your option) any later version.

** ExAmour is distributed in the hope that it will be useful,
** but WITHOUT ANY WARRANTY; without even the implied warranty of
** MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
** GNU General Public License for more details.

** You should have received a copy of the GNU General Public License
** along with this program; if not, write to the Free Software
** Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef	__SLAB_TYPES_H__
#define	__SLAB_TYPES_H__

/*
 * This header is can be removed if your application have already defined
 * the types within.
 */

#ifndef	__ASM__

#include	<stdint.h>

typedef uint32_t	vaddr_t;

#define	VADDR_ERROR	(int)-1

#endif /* !__ASM__ */


#endif /* __SLAB_TYPES__ */
