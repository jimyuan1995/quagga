/* VTY IO SHELL -- VTY Shell I/O -- header
 * Virtual terminal [aka TeletYpe] interface routine.
 * Copyright (C) 1997, 98 Kunihiro Ishiguro
 *
 * Revisions: Copyright (C) 2010 Chris Hall (GMCH), Highwayman
 *
 * This file is part of GNU Zebra.
 *
 * GNU Zebra is free software; you can redistribute it and/or modify it
 * under the terms of the GNU General Public License as published by the
 * Free Software Foundation; either version 2, or (at your option) any
 * later version.
 *
 * GNU Zebra is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with GNU Zebra; see the file COPYING.  If not, write to the Free
 * Software Foundation, Inc., 59 Temple Place - Suite 330, Boston, MA
 * 02111-1307, USA.
 */

#ifndef _ZEBRA_VTY_IO_SHELL_H
#define _ZEBRA_VTY_IO_SHELL_H

#include "misc.h"
#include <errno.h>

#include "uty.h"
#include "vty.h"
#include "vty_io.h"
#include "vio_fifo.h"
#include "vio_lines.h"
#include "keystroke.h"
#include "thread.h"
#include "command.h"
#include "qstring.h"

/*==============================================================================
 * Here are structures and other definitions which are shared by:
 *
 *   vty_io.c   -- the main VTY I/O stuff
 *
 * for I/O for VTY Shell Server.
 */

/*==============================================================================
 * Functions
 */

extern int uty_vprintf_shell(vty_io vio, const char *format, va_list args) ;

#endif /* _ZEBRA_VTY_IO_SHELL_H */