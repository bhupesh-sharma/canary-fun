/* Copyright (C) 2011-2016 Free Software Foundation, Inc.
   This file is part of the GNU C Library.
   Contributed by Chris Metcalf <cmetcalf@tilera.com>, 2011.

   The GNU C Library is free software; you can redistribute it and/or
   modify it under the terms of the GNU Lesser General Public
   License as published by the Free Software Foundation; either
   version 2.1 of the License, or (at your option) any later version.

   The GNU C Library is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
   Lesser General Public License for more details.

   You should have received a copy of the GNU Lesser General Public
   License along with the GNU C Library.  If not, see
   <http://www.gnu.org/licenses/>.  */

#ifndef _TILE_LDSODEFS_H
#define _TILE_LDSODEFS_H 1

#include <elf.h>

struct La_tile_regs;
struct La_tile_retval;

#define ARCH_PLTENTER_MEMBERS                                           \
  ElfW(Addr) (*tile_gnu_pltenter) (ElfW(Sym) *, unsigned int, uintptr_t *, \
                                   uintptr_t *, struct La_tile_regs *,  \
                                   unsigned int *, const char *,        \
                                   long int *)

#define ARCH_PLTEXIT_MEMBERS \
  ElfW(Addr) (*tile_gnu_pltexit) (ElfW(Sym) *, unsigned int, uintptr_t *, \
                                  uintptr_t *, const struct La_tile_regs *, \
                                  struct La_tile_retval *, const char *)

#include_next <ldsodefs.h>

#endif
