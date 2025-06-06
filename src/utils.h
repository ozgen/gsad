/* Copyright (C) 2018-2021 Greenbone AG
 *
 * SPDX-License-Identifier: AGPL-3.0-or-later
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU Affero General Public License as
 * published by the Free Software Foundation, either version 3 of the
 * License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU Affero General Public License for more details.
 *
 * You should have received a copy of the GNU Affero General Public License
 * along with this program. If not, see <http://www.gnu.org/licenses/>.
 */

/**
 * @file utils.h
 * @brief Headers/structs for utility functions in GSAD
 */

#ifndef _GSAD_UTILS_H
#define _GSAD_UTILS_H

#include <glib.h> // for gboolean, gchar

gboolean
str_equal (const gchar *, const gchar *);

gchar *
capitalize (const char *);

gboolean
credential_username_is_valid (const gchar *);

#endif /* not _GSAD_UTILS_H */
