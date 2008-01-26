/*
tvm - scheduler.h
The Transterpreter - a portable virtual machine for Transputer bytecode
Copyright (C) 2004-2008 Christian L. Jacobsen, Matthew C. Jadud

This library is free software; you can redistribute it and/or
modify it under the terms of the GNU Lesser General Public
License as published by the Free Software Foundation; either
version 2.1 of the License, or (at your option) any later version.

This library is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public
License along with this library; if not, write to the Free Software
Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301  USA
*/

#ifndef SCHEDULER_H
#define SCHEDULER_H

extern int has_shutdown;

#ifdef SCHEDULER_ENABLE_BUSYWAIT_HOOK
extern void (*scheduler_busywait_hook)(void);
#endif

extern void timer_queue_insert(WORD current_time, WORD reschedule_time);
extern BYTEPTR run_next_on_queue(void);

#endif
