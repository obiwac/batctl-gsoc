/*
 * Copyright (C) 2009 Clark Williams <williams@redhat.com>
 * Copyright (C) 2009 Xiao Guangrong <xiaoguangrong@cn.fujitsu.com>
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of version 2 of the GNU General Public
 * License as published by the Free Software Foundation.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU
 * General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 51 Franklin Street, Fifth Floor, Boston, MA
 * 02110-1301, USA
 *
 */

#ifndef __DEBUGFS_H__
#define __DEBUGFS_H__

#include <sys/mount.h>
#include <string.h>

#ifndef MAX_PATH
# define MAX_PATH 256
#endif

#ifndef STR
# define _STR(x) #x
# define STR(x) _STR(x)
#endif

extern const char *debugfs_find_mountpoint(void);
extern int debugfs_valid_mountpoint(const char *debugfs);
extern int debugfs_valid_entry(const char *path);
extern char *debugfs_mount(const char *mountpoint);
extern int debugfs_write(const char *entry, const char *value);
extern int debugfs_read(const char *entry, char *buffer, size_t size);
extern int debugfs_make_path(const char *element, char *buffer, int size);

#endif /* __DEBUGFS_H__ */
