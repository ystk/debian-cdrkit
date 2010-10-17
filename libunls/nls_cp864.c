/*
 * This file has been modified for the cdrkit suite.
 *
 * The behaviour and appearence of the program code below can differ to a major
 * extent from the version distributed by the original author(s).
 *
 * For details, see Changelog file distributed with the cdrkit package. If you
 * received this file from another source then ask the distributing person for
 * a log of modifications.
 *
 */

/* @(#)nls_cp864.c	1.2 05/05/01 2000 J. Schilling */
/*
 *	Modifications to make the code portable Copyright (c) 2000 J. Schilling
 *
 *	Code taken from the Linux kernel.
 */
/*
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2
 * as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License along with
 * this program; see the file COPYING.  If not, write to the Free Software
 * Foundation, 59 Temple Place - Suite 330, Boston, MA 02111-1307, USA.
 */
/*
 * linux/fs/nls_cp864.c
 *
 * Charset cp864 translation tables.
 * Generated automatically from the Unicode and charset
 * tables from the Unicode Organization (www.unicode.org).
 * The Unicode to charset table has only exact mappings.
 */

#include <mconfig.h>
#include "nls.h"

static struct unls_unicode charset2uni[256] = {
	/* 0x00*/
	{0x00, 0x00}, {0x01, 0x00}, {0x02, 0x00}, {0x03, 0x00},
	{0x04, 0x00}, {0x05, 0x00}, {0x06, 0x00}, {0x07, 0x00},
	{0x08, 0x00}, {0x09, 0x00}, {0x0a, 0x00}, {0x0b, 0x00},
	{0x0c, 0x00}, {0x0d, 0x00}, {0x0e, 0x00}, {0x0f, 0x00},
	/* 0x10*/
	{0x10, 0x00}, {0x11, 0x00}, {0x12, 0x00}, {0x13, 0x00},
	{0x14, 0x00}, {0x15, 0x00}, {0x16, 0x00}, {0x17, 0x00},
	{0x18, 0x00}, {0x19, 0x00}, {0x1a, 0x00}, {0x1b, 0x00},
	{0x1c, 0x00}, {0x1d, 0x00}, {0x1e, 0x00}, {0x1f, 0x00},
	/* 0x20*/
	{0x20, 0x00}, {0x21, 0x00}, {0x22, 0x00}, {0x23, 0x00},
	{0x24, 0x00}, {0x6a, 0x06}, {0x26, 0x00}, {0x27, 0x00},
	{0x28, 0x00}, {0x29, 0x00}, {0x2a, 0x00}, {0x2b, 0x00},
	{0x2c, 0x00}, {0x2d, 0x00}, {0x2e, 0x00}, {0x2f, 0x00},
	/* 0x30*/
	{0x30, 0x00}, {0x31, 0x00}, {0x32, 0x00}, {0x33, 0x00},
	{0x34, 0x00}, {0x35, 0x00}, {0x36, 0x00}, {0x37, 0x00},
	{0x38, 0x00}, {0x39, 0x00}, {0x3a, 0x00}, {0x3b, 0x00},
	{0x3c, 0x00}, {0x3d, 0x00}, {0x3e, 0x00}, {0x3f, 0x00},
	/* 0x40*/
	{0x40, 0x00}, {0x41, 0x00}, {0x42, 0x00}, {0x43, 0x00},
	{0x44, 0x00}, {0x45, 0x00}, {0x46, 0x00}, {0x47, 0x00},
	{0x48, 0x00}, {0x49, 0x00}, {0x4a, 0x00}, {0x4b, 0x00},
	{0x4c, 0x00}, {0x4d, 0x00}, {0x4e, 0x00}, {0x4f, 0x00},
	/* 0x50*/
	{0x50, 0x00}, {0x51, 0x00}, {0x52, 0x00}, {0x53, 0x00},
	{0x54, 0x00}, {0x55, 0x00}, {0x56, 0x00}, {0x57, 0x00},
	{0x58, 0x00}, {0x59, 0x00}, {0x5a, 0x00}, {0x5b, 0x00},
	{0x5c, 0x00}, {0x5d, 0x00}, {0x5e, 0x00}, {0x5f, 0x00},
	/* 0x60*/
	{0x60, 0x00}, {0x61, 0x00}, {0x62, 0x00}, {0x63, 0x00},
	{0x64, 0x00}, {0x65, 0x00}, {0x66, 0x00}, {0x67, 0x00},
	{0x68, 0x00}, {0x69, 0x00}, {0x6a, 0x00}, {0x6b, 0x00},
	{0x6c, 0x00}, {0x6d, 0x00}, {0x6e, 0x00}, {0x6f, 0x00},
	/* 0x70*/
	{0x70, 0x00}, {0x71, 0x00}, {0x72, 0x00}, {0x73, 0x00},
	{0x74, 0x00}, {0x75, 0x00}, {0x76, 0x00}, {0x77, 0x00},
	{0x78, 0x00}, {0x79, 0x00}, {0x7a, 0x00}, {0x7b, 0x00},
	{0x7c, 0x00}, {0x7d, 0x00}, {0x7e, 0x00}, {0x7f, 0x00},
	/* 0x80*/
	{0xb0, 0x00}, {0xb7, 0x00}, {0x19, 0x22}, {0x1a, 0x22},
	{0x92, 0x25}, {0x00, 0x25}, {0x02, 0x25}, {0x3c, 0x25},
	{0x24, 0x25}, {0x2c, 0x25}, {0x1c, 0x25}, {0x34, 0x25},
	{0x10, 0x25}, {0x0c, 0x25}, {0x14, 0x25}, {0x18, 0x25},
	/* 0x90*/
	{0xb2, 0x03}, {0x1e, 0x22}, {0xc6, 0x03}, {0xb1, 0x00},
	{0xbd, 0x00}, {0xbc, 0x00}, {0x48, 0x22}, {0xab, 0x00},
	{0xbb, 0x00}, {0xf7, 0xfe}, {0xf8, 0xfe}, {0x00, 0x00},
	{0x00, 0x00}, {0xfb, 0xfe}, {0xfc, 0xfe}, {0x00, 0x00},
	/* 0xa0*/
	{0xa0, 0x00}, {0xad, 0x00}, {0x82, 0xfe}, {0xa3, 0x00},
	{0xa4, 0x00}, {0x84, 0xfe}, {0x00, 0x00}, {0x00, 0x00},
	{0x8e, 0xfe}, {0x8f, 0xfe}, {0x95, 0xfe}, {0x99, 0xfe},
	{0x0c, 0x06}, {0x9d, 0xfe}, {0xa1, 0xfe}, {0xa5, 0xfe},
	/* 0xb0*/
	{0x60, 0x06}, {0x61, 0x06}, {0x62, 0x06}, {0x63, 0x06},
	{0x64, 0x06}, {0x65, 0x06}, {0x66, 0x06}, {0x67, 0x06},
	{0x68, 0x06}, {0x69, 0x06}, {0xd1, 0xfe}, {0x1b, 0x06},
	{0xb1, 0xfe}, {0xb5, 0xfe}, {0xb9, 0xfe}, {0x1f, 0x06},
	/* 0xc0*/
	{0xa2, 0x00}, {0x80, 0xfe}, {0x81, 0xfe}, {0x83, 0xfe},
	{0x85, 0xfe}, {0xca, 0xfe}, {0x8b, 0xfe}, {0x8d, 0xfe},
	{0x91, 0xfe}, {0x93, 0xfe}, {0x97, 0xfe}, {0x9b, 0xfe},
	{0x9f, 0xfe}, {0xa3, 0xfe}, {0xa7, 0xfe}, {0xa9, 0xfe},
	/* 0xd0*/
	{0xab, 0xfe}, {0xad, 0xfe}, {0xaf, 0xfe}, {0xb3, 0xfe},
	{0xb7, 0xfe}, {0xbb, 0xfe}, {0xbf, 0xfe}, {0xc1, 0xfe},
	{0xc5, 0xfe}, {0xcb, 0xfe}, {0xcf, 0xfe}, {0xa6, 0x00},
	{0xac, 0x00}, {0xf7, 0x00}, {0xd7, 0x00}, {0xc9, 0xfe},
	/* 0xe0*/
	{0x40, 0x06}, {0xd3, 0xfe}, {0xd7, 0xfe}, {0xdb, 0xfe},
	{0xdf, 0xfe}, {0xe3, 0xfe}, {0xe7, 0xfe}, {0xeb, 0xfe},
	{0xed, 0xfe}, {0xef, 0xfe}, {0xf3, 0xfe}, {0xbd, 0xfe},
	{0xcc, 0xfe}, {0xce, 0xfe}, {0xcd, 0xfe}, {0xe1, 0xfe},
	/* 0xf0*/
	{0x7d, 0xfe}, {0x51, 0x06}, {0xe5, 0xfe}, {0xe9, 0xfe},
	{0xec, 0xfe}, {0xf0, 0xfe}, {0xf2, 0xfe}, {0xd0, 0xfe},
	{0xd5, 0xfe}, {0xf5, 0xfe}, {0xf6, 0xfe}, {0xdd, 0xfe},
	{0xd9, 0xfe}, {0xf1, 0xfe}, {0xa0, 0x25}, {0x00, 0x00},
};

static unsigned char page00[256] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, /* 0x00-0x07 */
	0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, /* 0x08-0x0f */
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, /* 0x10-0x17 */
	0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, /* 0x18-0x1f */
	0x20, 0x21, 0x22, 0x23, 0x24, 0x00, 0x26, 0x27, /* 0x20-0x27 */
	0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, /* 0x28-0x2f */
	0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, /* 0x30-0x37 */
	0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, /* 0x38-0x3f */
	0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, /* 0x40-0x47 */
	0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, /* 0x48-0x4f */
	0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, /* 0x50-0x57 */
	0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, /* 0x58-0x5f */
	0x60, 0x61, 0x62, 0x63, 0x64, 0x65, 0x66, 0x67, /* 0x60-0x67 */
	0x68, 0x69, 0x6a, 0x6b, 0x6c, 0x6d, 0x6e, 0x6f, /* 0x68-0x6f */
	0x70, 0x71, 0x72, 0x73, 0x74, 0x75, 0x76, 0x77, /* 0x70-0x77 */
	0x78, 0x79, 0x7a, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, /* 0x78-0x7f */

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x80-0x87 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x88-0x8f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x90-0x97 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x98-0x9f */
	0xa0, 0x00, 0xc0, 0xa3, 0xa4, 0x00, 0xdb, 0x00, /* 0xa0-0xa7 */
	0x00, 0x00, 0x00, 0x97, 0xdc, 0xa1, 0x00, 0x00, /* 0xa8-0xaf */
	0x80, 0x93, 0x00, 0x00, 0x00, 0x00, 0x00, 0x81, /* 0xb0-0xb7 */
	0x00, 0x00, 0x00, 0x98, 0x95, 0x94, 0x00, 0x00, /* 0xb8-0xbf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xc0-0xc7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xc8-0xcf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xde, /* 0xd0-0xd7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xd8-0xdf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xe0-0xe7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xe8-0xef */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xdd, /* 0xf0-0xf7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xf8-0xff */
};

static unsigned char page03[256] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x00-0x07 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x08-0x0f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x10-0x17 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x18-0x1f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x20-0x27 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x28-0x2f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x30-0x37 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x38-0x3f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x40-0x47 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x48-0x4f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x50-0x57 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x58-0x5f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x60-0x67 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x68-0x6f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x70-0x77 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x78-0x7f */

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x80-0x87 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x88-0x8f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x90-0x97 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x98-0x9f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xa0-0xa7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xa8-0xaf */
	0x00, 0x00, 0x90, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xb0-0xb7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xb8-0xbf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x92, 0x00, /* 0xc0-0xc7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xc8-0xcf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xd0-0xd7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xd8-0xdf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xe0-0xe7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xe8-0xef */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xf0-0xf7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xf8-0xff */
};

static unsigned char page06[256] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x00-0x07 */
	0x00, 0x00, 0x00, 0x00, 0xac, 0x00, 0x00, 0x00, /* 0x08-0x0f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x10-0x17 */
	0x00, 0x00, 0x00, 0xbb, 0x00, 0x00, 0x00, 0xbf, /* 0x18-0x1f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x20-0x27 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x28-0x2f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x30-0x37 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x38-0x3f */
	0xe0, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x40-0x47 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x48-0x4f */
	0x00, 0xf1, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x50-0x57 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x58-0x5f */
	0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, /* 0x60-0x67 */
	0xb8, 0xb9, 0x25, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x68-0x6f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x70-0x77 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x78-0x7f */

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x80-0x87 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x88-0x8f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x90-0x97 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x98-0x9f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xa0-0xa7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xa8-0xaf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xb0-0xb7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xb8-0xbf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xc0-0xc7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xc8-0xcf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xd0-0xd7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xd8-0xdf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xe0-0xe7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xe8-0xef */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xf0-0xf7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xf8-0xff */
};

static unsigned char page22[256] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x00-0x07 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x08-0x0f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x10-0x17 */
	0x00, 0x82, 0x83, 0x00, 0x00, 0x00, 0x91, 0x00, /* 0x18-0x1f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x20-0x27 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x28-0x2f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x30-0x37 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x38-0x3f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x40-0x47 */
	0x96, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x48-0x4f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x50-0x57 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x58-0x5f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x60-0x67 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x68-0x6f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x70-0x77 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x78-0x7f */

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x80-0x87 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x88-0x8f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x90-0x97 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x98-0x9f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xa0-0xa7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xa8-0xaf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xb0-0xb7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xb8-0xbf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xc0-0xc7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xc8-0xcf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xd0-0xd7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xd8-0xdf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xe0-0xe7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xe8-0xef */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xf0-0xf7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xf8-0xff */
};

static unsigned char page25[256] = {
	0x85, 0x00, 0x86, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x00-0x07 */
	0x00, 0x00, 0x00, 0x00, 0x8d, 0x00, 0x00, 0x00, /* 0x08-0x0f */
	0x8c, 0x00, 0x00, 0x00, 0x8e, 0x00, 0x00, 0x00, /* 0x10-0x17 */
	0x8f, 0x00, 0x00, 0x00, 0x8a, 0x00, 0x00, 0x00, /* 0x18-0x1f */
	0x00, 0x00, 0x00, 0x00, 0x88, 0x00, 0x00, 0x00, /* 0x20-0x27 */
	0x00, 0x00, 0x00, 0x00, 0x89, 0x00, 0x00, 0x00, /* 0x28-0x2f */
	0x00, 0x00, 0x00, 0x00, 0x8b, 0x00, 0x00, 0x00, /* 0x30-0x37 */
	0x00, 0x00, 0x00, 0x00, 0x87, 0x00, 0x00, 0x00, /* 0x38-0x3f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x40-0x47 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x48-0x4f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x50-0x57 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x58-0x5f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x60-0x67 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x68-0x6f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x70-0x77 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x78-0x7f */

	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x80-0x87 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x88-0x8f */
	0x00, 0x00, 0x84, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x90-0x97 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x98-0x9f */
	0xfe, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xa0-0xa7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xa8-0xaf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xb0-0xb7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xb8-0xbf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xc0-0xc7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xc8-0xcf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xd0-0xd7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xd8-0xdf */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xe0-0xe7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xe8-0xef */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xf0-0xf7 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0xf8-0xff */
};

static unsigned char pagefe[256] = {
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x00-0x07 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x08-0x0f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x10-0x17 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x18-0x1f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x20-0x27 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x28-0x2f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x30-0x37 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x38-0x3f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x40-0x47 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x48-0x4f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x50-0x57 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x58-0x5f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x60-0x67 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x68-0x6f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x70-0x77 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0xf0, 0x00, 0x00, /* 0x78-0x7f */

	0xc1, 0xc2, 0xa2, 0xc3, 0xa5, 0xc4, 0x00, 0x00, /* 0x80-0x87 */
	0x00, 0x00, 0x00, 0xc6, 0x00, 0xc7, 0xa8, 0xa9, /* 0x88-0x8f */
	0x00, 0xc8, 0x00, 0xc9, 0x00, 0xaa, 0x00, 0xca, /* 0x90-0x97 */
	0x00, 0xab, 0x00, 0xcb, 0x00, 0xad, 0x00, 0xcc, /* 0x98-0x9f */
	0x00, 0xae, 0x00, 0xcd, 0x00, 0xaf, 0x00, 0xce, /* 0xa0-0xa7 */
	0x00, 0xcf, 0x00, 0xd0, 0x00, 0xd1, 0x00, 0xd2, /* 0xa8-0xaf */
	0x00, 0xbc, 0x00, 0xd3, 0x00, 0xbd, 0x00, 0xd4, /* 0xb0-0xb7 */
	0x00, 0xbe, 0x00, 0xd5, 0x00, 0xeb, 0x00, 0xd6, /* 0xb8-0xbf */
	0x00, 0xd7, 0x00, 0x00, 0x00, 0xd8, 0x00, 0x00, /* 0xc0-0xc7 */
	0x00, 0xdf, 0xc5, 0xd9, 0xec, 0xee, 0xed, 0xda, /* 0xc8-0xcf */
	0xf7, 0xba, 0x00, 0xe1, 0x00, 0xf8, 0x00, 0xe2, /* 0xd0-0xd7 */
	0x00, 0xfc, 0x00, 0xe3, 0x00, 0xfb, 0x00, 0xe4, /* 0xd8-0xdf */
	0x00, 0xef, 0x00, 0xe5, 0x00, 0xf2, 0x00, 0xe6, /* 0xe0-0xe7 */
	0x00, 0xf3, 0x00, 0xe7, 0xf4, 0xe8, 0x00, 0xe9, /* 0xe8-0xef */
	0xf5, 0xfd, 0xf6, 0xea, 0x00, 0xf9, 0xfa, 0x99, /* 0xf0-0xf7 */
	0x9a, 0x00, 0x00, 0x9d, 0x9e, 0x00, 0x00, 0x00, /* 0xf8-0xff */
};

static unsigned char *page_uni2charset[256] = {
	page00, NULL,   NULL,   page03, NULL,   NULL,   page06, NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   page22, NULL,   NULL,   page25, NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   NULL,
	NULL,   NULL,   NULL,   NULL,   NULL,   NULL,   pagefe, NULL,
};

#if 0
static unsigned char charset2upper[256] = {
	0x00, 0x01, 0x02, 0x03, 0x04, 0x05, 0x06, 0x07, /* 0x00-0x07 */
	0x08, 0x09, 0x0a, 0x0b, 0x0c, 0x0d, 0x0e, 0x0f, /* 0x08-0x0f */
	0x10, 0x11, 0x12, 0x13, 0x14, 0x15, 0x16, 0x17, /* 0x10-0x17 */
	0x18, 0x19, 0x1a, 0x1b, 0x1c, 0x1d, 0x1e, 0x1f, /* 0x18-0x1f */
	0x20, 0x21, 0x22, 0x23, 0x24, 0x25, 0x26, 0x27, /* 0x20-0x27 */
	0x28, 0x29, 0x2a, 0x2b, 0x2c, 0x2d, 0x2e, 0x2f, /* 0x28-0x2f */
	0x30, 0x31, 0x32, 0x33, 0x34, 0x35, 0x36, 0x37, /* 0x30-0x37 */
	0x38, 0x39, 0x3a, 0x3b, 0x3c, 0x3d, 0x3e, 0x3f, /* 0x38-0x3f */
	0x40, 0x41, 0x42, 0x43, 0x44, 0x45, 0x46, 0x47, /* 0x40-0x47 */
	0x48, 0x49, 0x4a, 0x4b, 0x4c, 0x4d, 0x4e, 0x4f, /* 0x48-0x4f */
	0x50, 0x51, 0x52, 0x53, 0x54, 0x55, 0x56, 0x57, /* 0x50-0x57 */
	0x58, 0x59, 0x5a, 0x5b, 0x5c, 0x5d, 0x5e, 0x5f, /* 0x58-0x5f */
	0x60, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x60-0x67 */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x68-0x6f */
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, /* 0x70-0x77 */
	0x00, 0x00, 0x00, 0x7b, 0x7c, 0x7d, 0x7e, 0x7f, /* 0x78-0x7f */
	0x80, 0x81, 0x82, 0x83, 0x84, 0x85, 0x86, 0x87, /* 0x80-0x87 */
	0x88, 0x89, 0x8a, 0x8b, 0x8c, 0x8d, 0x8e, 0x8f, /* 0x88-0x8f */
	0x90, 0x91, 0x92, 0x93, 0x94, 0x95, 0x96, 0x97, /* 0x90-0x97 */
	0x98, 0x99, 0x9a, 0x9b, 0x9c, 0x9d, 0x9e, 0x9f, /* 0x98-0x9f */
	0xa0, 0xa1, 0xa2, 0xa3, 0xa4, 0xa5, 0xa6, 0xa7, /* 0xa0-0xa7 */
	0xa8, 0xa9, 0xaa, 0xab, 0xac, 0xad, 0xae, 0xaf, /* 0xa8-0xaf */
	0xb0, 0xb1, 0xb2, 0xb3, 0xb4, 0xb5, 0xb6, 0xb7, /* 0xb0-0xb7 */
	0xb8, 0xb9, 0xba, 0xbb, 0xbc, 0xbd, 0xbe, 0xbf, /* 0xb8-0xbf */
	0xc0, 0xc1, 0xc2, 0xc3, 0xc4, 0xc5, 0xc6, 0xc7, /* 0xc0-0xc7 */
	0xc8, 0xc9, 0xca, 0xcb, 0xcc, 0xcd, 0xce, 0xcf, /* 0xc8-0xcf */
	0xd0, 0xd1, 0xd2, 0xd3, 0xd4, 0xd5, 0xd6, 0xd7, /* 0xd0-0xd7 */
	0xd8, 0xd9, 0xda, 0xdb, 0xdc, 0xdd, 0xde, 0xdf, /* 0xd8-0xdf */
	0xe0, 0xe1, 0xe2, 0xe3, 0xe4, 0xe5, 0xe6, 0xe7, /* 0xe0-0xe7 */
	0xe8, 0xe9, 0xea, 0xeb, 0xec, 0xed, 0xee, 0xef, /* 0xe8-0xef */
	0xf0, 0xf1, 0xf2, 0xf3, 0xf4, 0xf5, 0xf6, 0xf7, /* 0xf0-0xf7 */
	0xf8, 0xf9, 0xfa, 0xfb, 0xfc, 0xfd, 0xfe, 0xff, /* 0xf8-0xff */
};
#endif

static struct unls_table table = {
	"cp864",
	page_uni2charset,
	charset2uni,
	NULL
};

int
init_unls_cp864()
{
	return (register_unls(&table));
}
