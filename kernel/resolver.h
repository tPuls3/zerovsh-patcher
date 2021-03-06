/*
 * This file is part of ZeroVSH Patcher.

 * ZeroVSH Patcher is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.

 * ZeroVSH Patcher is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with ZeroVSH Patcher. If not, see <http://www.gnu.org/licenses/ .
 */

#ifndef RESOLVER_H_
#define RESOLVER_H_

#include <psptypes.h>

#define ITEMSOF(arr) (int)(sizeof(arr) / sizeof(0[arr]))

typedef struct {
	u32 nidsha1;
	u32 nid5xx;
	u32 nid570;
	u32 nid620;
	u32 nid63x;
	u32 nid660;
	u32 stub;
} nid;

typedef struct {
	const char *prxname;
	const char *name;
	u32 count;
} libname;

u32 moduleprobe_nid;

void zeroCtrlResolveNids(void);

#endif /* RESOLVER_H_ */
