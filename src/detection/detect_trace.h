//--------------------------------------------------------------------------
// Copyright (C) 2017-2017 Cisco and/or its affiliates. All rights reserved.
//
// This program is free software; you can redistribute it and/or modify it
// under the terms of the GNU General Public License Version 2 as published
// by the Free Software Foundation.  You may not use, modify or distribute
// this program under any other version of the GNU General Public License.
//
// This program is distributed in the hope that it will be useful, but
// WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
// General Public License for more details.
//
// You should have received a copy of the GNU General Public License along
// with this program; if not, write to the Free Software Foundation, Inc.,
// 51 Franklin Street, Fifth Floor, Boston, MA  02110-1301, USA.
//--------------------------------------------------------------------------

// detect_trace.h author Maya Dagon

#ifndef DETECT_TRACE_H
#define DETECT_TRACE_H

// Detection trace utility

#ifdef HAVE_CONFIG_H
#include "config.h"
#endif

#include "framework/cursor.h"
#include "main/snort_types.h"

#include "detection_options.h"
#include "pattern_match_data.h"

enum
{
	TRACE_DETECTION_ENGINE = 0x1,
	TRACE_RULE_EVAL = 0x2,
	TRACE_BUFFER_MINIMAL = 0x4,
	TRACE_BUFFER_VERBOSE = 0x8,
	TRACE_RULE_VARS = 0x10
};
	
void clear_trace_cursor_info();
void print_pkt_info(Packet* p);
void print_pattern(const PatternMatchData* pmd);
void dump_buffer(const uint8_t* buff, unsigned len);
void node_eval_trace(const detection_option_tree_node_t* node, const Cursor& cursor);

#endif

