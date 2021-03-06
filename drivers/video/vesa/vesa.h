/* 
 * This file is part of ExAmour

 * Copyright (C) Remy Saissy <remy.saissy@gmail.com>
 * ExAmour is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation; either version 2 of the License, or
 * (at your option) any later version.

 * ExAmour is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.

 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA  02111-1307  USA
*/

#ifndef	__VESA_H__
#define	__VESA_H__

#ifndef	__ASM__

#include	<stdbool.h>
#include	<stdint.h>

bool	vesa_init(void);

void	vesa_cls(void);

void	vesa_putpixel(uint32_t x, uint32_t y, uint32_t color);


#endif /* __ASM__ */

#endif /*  __VESA_H__ */
