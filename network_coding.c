// SPDX-License-Identifier: GPL-2.0
/* Copyright (C) 2009-2019  B.A.T.M.A.N. contributors:
 *
 * Martin Hundebøll <martin@hundeboll.net>
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
 * License-Filename: LICENSES/preferred/GPL-2.0
 */

#include "main.h"
#include "sys.h"

static struct settings_data batctl_settings_network_coding = {
	.sysfs_name = "network_coding",
	.params = sysfs_param_enable,
};

COMMAND_NAMED(SUBCOMMAND, network_coding, "nc", handle_sys_setting,
	      COMMAND_FLAG_MESH_IFACE, &batctl_settings_network_coding,
	      "[0|1]             \tdisplay or modify network_coding setting");
