/* 
 * my.h - code to handle database connections etc.
 *
 * this file is part of GLADDB
 *
 * Copyright (c) 2012, 2013, 2014 Brett Sheffield <brett@gladserv.com>
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program (see the file COPYING in the distribution).
 * If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef __GLADDB_MY_H__
#define __GLADDB_MY_H__ 1

int db_connect_my(db_t *db);
int db_disconnect_my(db_t *db);
int db_exec_sql_my(db_t *db, char *sql);
int db_fetch_all_my(db_t *db, char *sql, field_t *filter, row_t **rows,
        int *rowc);

#endif /* __GLADDB_MY_H__ */
