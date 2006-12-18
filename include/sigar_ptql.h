/*
 * Copyright (C) [2004, 2005, 2006], Hyperic, Inc.
 * This file is part of SIGAR.
 * 
 * SIGAR is free software; you can redistribute it and/or modify
 * it under the terms version 2 of the GNU General Public License as
 * published by the Free Software Foundation. This program is distributed
 * in the hope that it will be useful, but WITHOUT ANY WARRANTY; without
 * even the implied warranty of MERCHANTABILITY or FITNESS FOR A
 * PARTICULAR PURPOSE. See the GNU General Public License for more
 * details.
 * 
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software
 * Foundation, Inc., 59 Temple Place, Suite 330, Boston, MA 02111-1307
 * USA.
 */

#ifndef SIGAR_PTQL_H
#define SIGAR_PTQL_H

typedef struct sigar_ptql_query_t sigar_ptql_query_t;

SIGAR_DECLARE(int) sigar_ptql_query_create(sigar_t *sigar,
                                           sigar_ptql_query_t **query,
                                           char *ptql);

SIGAR_DECLARE(int) sigar_ptql_query_match(sigar_t *sigar,
                                          sigar_ptql_query_t *query,
                                          sigar_pid_t pid);

SIGAR_DECLARE(int) sigar_ptql_query_destroy(sigar_t *sigar,
                                            sigar_ptql_query_t *query);

#endif /*SIGAR_PTQL_H*/
