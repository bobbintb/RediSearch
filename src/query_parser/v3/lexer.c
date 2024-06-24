
/* #line 1 "lexer.rl" */
/*
 * Copyright Redis Ltd. 2016 - present
 * Licensed under your choice of the Redis Source Available License 2.0 (RSALv2) or
 * the Server Side Public License v1 (SSPLv1).
 */

#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

#include "../parse.h"
#include "parser.h"
#include "../../query_node.h"
#include "../../stopwords.h"

/* forward declarations of stuff generated by lemon */

#define RSQuery_Parse_v3 RSQueryParser_v3_ // weird Lemon quirk.. oh well..
#define RSQuery_ParseAlloc_v3 RSQueryParser_v3_Alloc
#define RSQuery_ParseFree_v3 RSQueryParser_v3_Free

void RSQuery_Parse_v3(void *yyp, int yymajor, QueryToken yyminor, QueryParseCtx *ctx);
void *RSQuery_ParseAlloc_v3(void *(*mallocProc)(size_t));
void RSQuery_ParseFree_v3(void *p, void (*freeProc)(void *));


/* #line 758 "lexer.rl" */



/* #line 36 "lexer.c" */
static const char _query_actions[] = {
	0, 1, 0, 1, 1, 1, 2, 1, 
	19, 1, 20, 1, 21, 1, 22, 1, 
	23, 1, 24, 1, 25, 1, 26, 1, 
	27, 1, 28, 1, 29, 1, 30, 1, 
	31, 1, 32, 1, 33, 1, 34, 1, 
	35, 1, 36, 1, 37, 1, 38, 1, 
	39, 1, 40, 1, 41, 1, 42, 1, 
	43, 1, 44, 1, 45, 1, 46, 1, 
	47, 1, 48, 1, 49, 1, 50, 1, 
	51, 1, 52, 1, 53, 1, 54, 1, 
	55, 1, 56, 1, 57, 1, 58, 1, 
	59, 1, 60, 1, 61, 1, 62, 1, 
	63, 1, 64, 1, 65, 1, 66, 1, 
	67, 1, 68, 1, 69, 1, 70, 2, 
	2, 3, 2, 2, 4, 2, 2, 5, 
	2, 2, 6, 2, 2, 7, 2, 2, 
	8, 2, 2, 9, 2, 2, 10, 2, 
	2, 11, 2, 2, 12, 2, 2, 13, 
	2, 2, 14, 2, 2, 15, 2, 2, 
	16, 2, 2, 17, 2, 2, 18
};

static const short _query_key_offsets[] = {
	0, 10, 20, 22, 22, 23, 25, 27, 
	28, 28, 38, 48, 51, 53, 57, 59, 
	61, 65, 67, 69, 71, 81, 83, 85, 
	85, 89, 90, 94, 99, 103, 113, 124, 
	134, 139, 143, 147, 148, 152, 162, 174, 
	184, 189, 190, 192, 194, 195, 195, 200, 
	205, 210, 212, 213, 213, 217, 220, 224, 
	269, 280, 281, 282, 292, 303, 305, 306, 
	322, 333, 338, 341, 347, 363, 376, 381, 
	386, 389, 395, 397, 413, 428, 441, 442, 
	444, 445, 455, 468, 483, 496, 509, 522, 
	535, 548, 561, 574, 587, 597, 609, 616
};

static const char _query_trans_keys[] = {
	9, 13, 32, 47, 58, 64, 91, 96, 
	123, 126, 9, 13, 32, 47, 58, 64, 
	91, 96, 123, 126, 39, 92, 39, 39, 
	92, 39, 92, 41, 9, 13, 32, 47, 
	58, 64, 91, 96, 123, 126, 92, 96, 
	0, 47, 58, 64, 91, 94, 123, 127, 
	46, 48, 57, 48, 57, 43, 45, 48, 
	57, 48, 57, 48, 57, 43, 45, 48, 
	57, 48, 57, 78, 110, 70, 102, 9, 
	13, 32, 47, 58, 64, 91, 96, 123, 
	126, 39, 92, 39, 92, 36, 42, 92, 
	125, 125, 36, 42, 92, 125, 34, 36, 
	42, 92, 125, 36, 42, 92, 125, 92, 
	96, 0, 47, 58, 64, 91, 94, 123, 
	127, 42, 92, 96, 0, 47, 58, 64, 
	91, 94, 123, 127, 9, 13, 32, 47, 
	58, 64, 91, 96, 123, 126, 36, 39, 
	42, 92, 125, 36, 42, 92, 125, 36, 
	42, 92, 125, 125, 36, 42, 92, 125, 
	92, 96, 0, 47, 58, 64, 91, 94, 
	123, 127, 42, 92, 96, 125, 0, 47, 
	58, 64, 91, 94, 123, 127, 9, 13, 
	32, 47, 58, 64, 91, 96, 123, 126, 
	36, 42, 92, 119, 125, 39, 39, 92, 
	39, 92, 125, 36, 39, 42, 92, 125, 
	36, 39, 42, 92, 125, 36, 39, 42, 
	92, 125, 39, 92, 125, 36, 42, 92, 
	125, 39, 92, 125, 36, 42, 92, 125, 
	32, 33, 34, 36, 37, 39, 40, 41, 
	42, 43, 45, 46, 58, 59, 60, 61, 
	62, 63, 64, 65, 73, 91, 92, 93, 
	95, 97, 105, 119, 123, 124, 125, 126, 
	127, 0, 8, 9, 13, 14, 31, 35, 
	47, 48, 57, 94, 96, 42, 92, 96, 
	0, 47, 58, 64, 91, 94, 123, 127, 
	61, 34, 92, 96, 0, 47, 58, 64, 
	91, 94, 123, 127, 42, 92, 96, 0, 
	47, 58, 64, 91, 94, 123, 127, 39, 
	92, 119, 36, 43, 45, 46, 92, 96, 
	0, 47, 48, 57, 58, 64, 91, 94, 
	123, 127, 42, 92, 96, 0, 47, 58, 
	64, 91, 94, 123, 127, 42, 69, 101, 
	48, 57, 42, 48, 57, 42, 46, 69, 
	101, 48, 57, 42, 46, 69, 92, 96, 
	101, 0, 47, 48, 57, 58, 64, 91, 
	94, 123, 127, 42, 43, 45, 92, 96, 
	0, 47, 58, 64, 91, 94, 123, 127, 
	46, 73, 105, 48, 57, 42, 69, 101, 
	48, 57, 42, 48, 57, 42, 46, 69, 
	101, 48, 57, 48, 57, 42, 46, 69, 
	92, 96, 101, 0, 47, 48, 57, 58, 
	64, 91, 94, 123, 127, 42, 43, 45, 
	92, 96, 0, 47, 48, 57, 58, 64, 
	91, 94, 123, 127, 42, 92, 96, 0, 
	47, 48, 57, 58, 64, 91, 94, 123, 
	127, 61, 61, 62, 61, 92, 96, 0, 
	47, 58, 64, 91, 94, 123, 127, 42, 
	83, 92, 96, 115, 0, 47, 58, 64, 
	91, 94, 123, 127, 42, 78, 83, 92, 
	96, 110, 115, 0, 47, 58, 64, 91, 
	94, 123, 127, 42, 70, 92, 96, 102, 
	0, 47, 58, 64, 91, 94, 123, 127, 
	42, 77, 92, 96, 109, 0, 47, 58, 
	64, 91, 94, 123, 127, 42, 73, 92, 
	96, 105, 0, 47, 58, 64, 91, 94, 
	123, 127, 42, 83, 92, 96, 115, 0, 
	47, 58, 64, 91, 94, 123, 127, 42, 
	83, 92, 96, 115, 0, 47, 58, 64, 
	91, 94, 123, 127, 42, 73, 92, 96, 
	105, 0, 47, 58, 64, 91, 94, 123, 
	127, 42, 78, 92, 96, 110, 0, 47, 
	58, 64, 91, 94, 123, 127, 42, 71, 
	92, 96, 103, 0, 47, 58, 64, 91, 
	94, 123, 127, 9, 13, 32, 47, 58, 
	64, 91, 96, 123, 126, 39, 42, 92, 
	96, 0, 47, 58, 64, 91, 94, 123, 
	127, 34, 36, 39, 42, 92, 119, 125, 
	39, 92, 0
};

static const char _query_single_lengths[] = {
	0, 0, 2, 0, 1, 2, 2, 1, 
	0, 0, 2, 1, 0, 2, 0, 0, 
	2, 0, 2, 2, 0, 2, 2, 0, 
	4, 1, 4, 5, 4, 2, 3, 0, 
	5, 4, 4, 1, 4, 2, 4, 0, 
	5, 1, 2, 2, 1, 0, 5, 5, 
	5, 2, 1, 0, 4, 3, 4, 33, 
	3, 1, 1, 2, 3, 2, 1, 6, 
	3, 3, 1, 4, 6, 5, 3, 3, 
	1, 4, 0, 6, 5, 3, 1, 2, 
	1, 2, 5, 7, 5, 5, 5, 5, 
	5, 5, 5, 5, 0, 4, 7, 2
};

static const char _query_range_lengths[] = {
	5, 5, 0, 0, 0, 0, 0, 0, 
	0, 5, 4, 1, 1, 1, 1, 1, 
	1, 1, 0, 0, 5, 0, 0, 0, 
	0, 0, 0, 0, 0, 4, 4, 5, 
	0, 0, 0, 0, 0, 4, 4, 5, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 6, 
	4, 0, 0, 4, 4, 0, 0, 5, 
	4, 1, 1, 1, 5, 4, 1, 1, 
	1, 1, 1, 5, 5, 5, 0, 0, 
	0, 4, 4, 4, 4, 4, 4, 4, 
	4, 4, 4, 4, 5, 4, 0, 0
};

static const short _query_index_offsets[] = {
	0, 6, 12, 15, 16, 18, 21, 24, 
	26, 27, 33, 40, 43, 45, 49, 51, 
	53, 57, 59, 62, 65, 71, 74, 77, 
	78, 83, 85, 90, 96, 101, 108, 116, 
	122, 128, 133, 138, 140, 145, 152, 161, 
	167, 173, 175, 178, 181, 183, 184, 190, 
	196, 202, 205, 207, 208, 213, 217, 222, 
	262, 270, 272, 274, 281, 289, 292, 294, 
	306, 314, 319, 322, 328, 340, 350, 355, 
	360, 363, 369, 371, 383, 394, 403, 405, 
	408, 410, 417, 427, 439, 449, 459, 469, 
	479, 489, 499, 509, 519, 525, 534, 542
};

static const unsigned char _query_indicies[] = {
	1, 1, 1, 1, 1, 0, 2, 2, 
	2, 2, 2, 0, 5, 6, 4, 4, 
	8, 7, 7, 10, 9, 11, 10, 9, 
	12, 7, 9, 13, 13, 13, 13, 13, 
	0, 15, 14, 14, 14, 14, 14, 13, 
	16, 17, 14, 18, 0, 20, 20, 21, 
	19, 21, 19, 22, 0, 24, 24, 25, 
	23, 25, 0, 26, 26, 0, 27, 27, 
	0, 28, 28, 28, 28, 28, 0, 29, 
	31, 30, 32, 31, 30, 30, 33, 35, 
	36, 37, 34, 38, 33, 34, 34, 34, 
	34, 33, 39, 33, 35, 36, 37, 34, 
	33, 35, 36, 40, 34, 42, 33, 33, 
	33, 33, 33, 41, 35, 42, 33, 33, 
	33, 33, 33, 41, 41, 41, 41, 41, 
	41, 33, 33, 39, 35, 36, 37, 34, 
	44, 33, 45, 33, 43, 33, 46, 45, 
	47, 43, 48, 33, 43, 43, 43, 43, 
	33, 50, 33, 33, 33, 33, 33, 49, 
	46, 50, 33, 47, 33, 33, 33, 33, 
	49, 49, 49, 49, 49, 49, 33, 34, 
	34, 34, 51, 34, 33, 52, 33, 33, 
	54, 53, 55, 54, 53, 56, 33, 53, 
	33, 57, 35, 36, 37, 34, 59, 34, 
	60, 61, 62, 58, 59, 63, 60, 61, 
	62, 58, 64, 65, 59, 66, 0, 59, 
	33, 35, 36, 66, 34, 64, 65, 67, 
	59, 58, 58, 58, 58, 59, 69, 70, 
	71, 73, 74, 75, 76, 77, 78, 79, 
	80, 81, 83, 84, 85, 86, 87, 72, 
	88, 89, 90, 91, 92, 93, 94, 89, 
	90, 95, 96, 97, 98, 99, 68, 68, 
	69, 68, 72, 82, 72, 1, 100, 101, 
	0, 0, 0, 0, 0, 1, 103, 102, 
	105, 104, 106, 102, 102, 102, 102, 102, 
	2, 100, 106, 107, 107, 107, 107, 107, 
	2, 105, 6, 4, 109, 108, 111, 112, 
	112, 16, 15, 110, 110, 113, 110, 110, 
	110, 13, 115, 15, 114, 114, 114, 114, 
	114, 13, 115, 116, 116, 18, 114, 115, 
	21, 114, 115, 16, 116, 116, 17, 114, 
	115, 16, 117, 15, 114, 117, 114, 113, 
	114, 114, 114, 13, 115, 20, 20, 15, 
	114, 114, 114, 114, 114, 13, 118, 120, 
	120, 119, 0, 100, 122, 122, 22, 121, 
	100, 25, 121, 100, 118, 122, 122, 119, 
	121, 22, 102, 100, 118, 124, 101, 123, 
	124, 123, 82, 123, 123, 123, 1, 100, 
	24, 24, 101, 125, 125, 126, 125, 125, 
	125, 1, 100, 101, 121, 121, 126, 121, 
	121, 121, 1, 128, 127, 130, 131, 129, 
	133, 132, 134, 0, 0, 0, 0, 0, 
	28, 100, 135, 101, 125, 135, 125, 125, 
	125, 125, 1, 100, 136, 137, 101, 125, 
	136, 137, 125, 125, 125, 125, 1, 100, 
	138, 101, 125, 138, 125, 125, 125, 125, 
	1, 100, 139, 101, 125, 139, 125, 125, 
	125, 125, 1, 100, 140, 101, 125, 140, 
	125, 125, 125, 125, 1, 100, 141, 101, 
	125, 141, 125, 125, 125, 125, 1, 100, 
	142, 101, 125, 142, 125, 125, 125, 125, 
	1, 100, 143, 101, 125, 143, 125, 125, 
	125, 125, 1, 100, 144, 101, 125, 144, 
	125, 125, 125, 125, 1, 100, 145, 101, 
	125, 145, 125, 125, 125, 125, 1, 1, 
	1, 1, 1, 1, 102, 146, 100, 101, 
	125, 125, 125, 125, 125, 1, 148, 149, 
	150, 151, 152, 153, 147, 34, 64, 65, 
	59, 0
};

static const char _query_trans_targs[] = {
	55, 56, 60, 55, 2, 55, 3, 55, 
	5, 6, 8, 7, 55, 64, 55, 9, 
	12, 67, 65, 55, 14, 66, 71, 55, 
	17, 72, 19, 55, 81, 55, 22, 23, 
	55, 55, 24, 25, 26, 55, 55, 28, 
	55, 30, 31, 34, 37, 36, 35, 55, 
	55, 38, 39, 41, 42, 43, 45, 44, 
	55, 47, 48, 49, 53, 54, 95, 52, 
	50, 51, 55, 95, 55, 55, 57, 58, 
	55, 59, 55, 61, 62, 55, 63, 70, 
	70, 74, 75, 55, 55, 78, 79, 80, 
	81, 82, 83, 55, 92, 55, 56, 93, 
	94, 55, 55, 55, 55, 0, 55, 55, 
	55, 55, 1, 55, 55, 4, 55, 10, 
	11, 68, 55, 55, 13, 69, 15, 73, 
	18, 55, 16, 55, 76, 55, 77, 55, 
	55, 55, 55, 55, 55, 55, 20, 56, 
	84, 85, 56, 86, 87, 88, 89, 90, 
	91, 56, 21, 55, 27, 29, 32, 33, 
	40, 46
};

static const unsigned char _query_trans_actions[] = {
	109, 147, 120, 103, 0, 63, 0, 97, 
	0, 0, 0, 0, 65, 156, 101, 0, 
	0, 156, 5, 107, 0, 0, 114, 95, 
	0, 0, 0, 9, 117, 105, 0, 0, 
	67, 99, 0, 0, 0, 49, 55, 0, 
	47, 0, 0, 0, 0, 0, 0, 53, 
	57, 0, 0, 0, 0, 0, 0, 0, 
	51, 0, 0, 0, 0, 0, 150, 0, 
	0, 0, 45, 153, 43, 39, 0, 0, 
	41, 141, 33, 5, 5, 23, 138, 135, 
	132, 0, 111, 27, 29, 0, 0, 0, 
	141, 147, 147, 35, 0, 37, 141, 147, 
	129, 21, 25, 31, 59, 0, 89, 13, 
	75, 11, 0, 73, 83, 0, 87, 0, 
	0, 156, 93, 61, 0, 156, 0, 114, 
	0, 71, 0, 69, 147, 91, 114, 81, 
	19, 77, 15, 7, 79, 17, 0, 123, 
	147, 147, 126, 147, 147, 147, 147, 147, 
	147, 144, 0, 85, 0, 0, 0, 0, 
	0, 0
};

static const unsigned char _query_to_state_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 1, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0
};

static const unsigned char _query_from_state_actions[] = {
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 3, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0, 
	0, 0, 0, 0, 0, 0, 0, 0
};

static const short _query_eof_trans[] = {
	1, 1, 4, 4, 8, 8, 8, 8, 
	8, 1, 15, 15, 1, 20, 20, 1, 
	24, 1, 1, 1, 1, 30, 30, 30, 
	34, 34, 34, 34, 34, 34, 34, 34, 
	34, 34, 34, 34, 34, 34, 34, 34, 
	34, 34, 34, 34, 34, 34, 34, 34, 
	34, 1, 1, 1, 34, 34, 34, 0, 
	1, 103, 105, 103, 108, 103, 109, 111, 
	115, 115, 115, 115, 115, 115, 1, 122, 
	122, 122, 103, 124, 126, 122, 128, 130, 
	133, 1, 126, 126, 126, 126, 126, 126, 
	126, 126, 126, 126, 103, 126, 148, 1
};

static const int query_start = 55;
static const int query_first_final = 55;
static const int query_error = -1;

static const int query_en_main = 55;


/* #line 761 "lexer.rl" */

QueryNode *RSQuery_ParseRaw_v3(QueryParseCtx *q) {
  void *pParser = RSQuery_ParseAlloc_v3(rm_malloc);

  int cs, act;
  const char* ts = q->raw;          // query start
  const char* te = q->raw + q->len; // query end
  
/* #line 380 "lexer.c" */
	{
	cs = query_start;
	ts = 0;
	te = 0;
	act = 0;
	}

/* #line 769 "lexer.rl" */
  QueryToken tok = {.len = 0, .pos = 0, .s = 0};

  //parseCtx ctx = {.root = NULL, .ok = 1, .errorMsg = NULL, .q = q};
  const char* p = q->raw;
  const char* pe = q->raw + q->len;
  const char* eof = pe;

  
/* #line 397 "lexer.c" */
	{
	int _klen;
	unsigned int _trans;
	const char *_acts;
	unsigned int _nacts;
	const char *_keys;

	if ( p == pe )
		goto _test_eof;
_resume:
	_acts = _query_actions + _query_from_state_actions[cs];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 ) {
		switch ( *_acts++ ) {
	case 1:
/* #line 1 "NONE" */
	{ts = p;}
	break;
/* #line 416 "lexer.c" */
		}
	}

	_keys = _query_trans_keys + _query_key_offsets[cs];
	_trans = _query_index_offsets[cs];

	_klen = _query_single_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + _klen - 1;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + ((_upper-_lower) >> 1);
			if ( (*p) < *_mid )
				_upper = _mid - 1;
			else if ( (*p) > *_mid )
				_lower = _mid + 1;
			else {
				_trans += (unsigned int)(_mid - _keys);
				goto _match;
			}
		}
		_keys += _klen;
		_trans += _klen;
	}

	_klen = _query_range_lengths[cs];
	if ( _klen > 0 ) {
		const char *_lower = _keys;
		const char *_mid;
		const char *_upper = _keys + (_klen<<1) - 2;
		while (1) {
			if ( _upper < _lower )
				break;

			_mid = _lower + (((_upper-_lower) >> 1) & ~1);
			if ( (*p) < _mid[0] )
				_upper = _mid - 2;
			else if ( (*p) > _mid[1] )
				_lower = _mid + 2;
			else {
				_trans += (unsigned int)((_mid - _keys)>>1);
				goto _match;
			}
		}
		_trans += _klen;
	}

_match:
	_trans = _query_indicies[_trans];
_eof_trans:
	cs = _query_trans_targs[_trans];

	if ( _query_trans_actions[_trans] == 0 )
		goto _again;

	_acts = _query_actions + _query_trans_actions[_trans];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 )
	{
		switch ( *_acts++ )
		{
	case 2:
/* #line 1 "NONE" */
	{te = p+1;}
	break;
	case 3:
/* #line 99 "lexer.rl" */
	{act = 1;}
	break;
	case 4:
/* #line 111 "lexer.rl" */
	{act = 2;}
	break;
	case 5:
/* #line 123 "lexer.rl" */
	{act = 3;}
	break;
	case 6:
/* #line 133 "lexer.rl" */
	{act = 4;}
	break;
	case 7:
/* #line 153 "lexer.rl" */
	{act = 6;}
	break;
	case 8:
/* #line 163 "lexer.rl" */
	{act = 7;}
	break;
	case 9:
/* #line 280 "lexer.rl" */
	{act = 21;}
	break;
	case 10:
/* #line 312 "lexer.rl" */
	{act = 25;}
	break;
	case 11:
/* #line 320 "lexer.rl" */
	{act = 26;}
	break;
	case 12:
/* #line 336 "lexer.rl" */
	{act = 28;}
	break;
	case 13:
/* #line 370 "lexer.rl" */
	{act = 33;}
	break;
	case 14:
/* #line 380 "lexer.rl" */
	{act = 35;}
	break;
	case 15:
/* #line 390 "lexer.rl" */
	{act = 36;}
	break;
	case 16:
/* #line 457 "lexer.rl" */
	{act = 39;}
	break;
	case 17:
/* #line 580 "lexer.rl" */
	{act = 42;}
	break;
	case 18:
/* #line 676 "lexer.rl" */
	{act = 45;}
	break;
	case 19:
/* #line 143 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    tok.len = te - ts;
    tok.s = ts+1;
    RSQuery_Parse_v3(pParser, ARROW, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 20:
/* #line 163 "lexer.rl" */
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    tok.s = ts;
    tok.len = te-ts;
    tok.numval = *ts == '-' ? -INFINITY : INFINITY;
    RSQuery_Parse_v3(pParser, NUMBER, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 21:
/* #line 174 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    tok.s = "";
    tok.len = 0;
    RSQuery_Parse_v3(pParser, TERM, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 22:
/* #line 192 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts - q->raw;
    RSQuery_Parse_v3(pParser, NOT_EQUAL, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 23:
/* #line 200 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts - q->raw;
    RSQuery_Parse_v3(pParser, EQUAL_EQUAL, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 24:
/* #line 224 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts - q->raw;
    RSQuery_Parse_v3(pParser, GE, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 25:
/* #line 240 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts - q->raw;
    RSQuery_Parse_v3(pParser, LE, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 26:
/* #line 256 "lexer.rl" */
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, OR, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 27:
/* #line 272 "lexer.rl" */
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, RP, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 28:
/* #line 288 "lexer.rl" */
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 29:
/* #line 296 "lexer.rl" */
	{te = p+1;{ 
     tok.pos = ts-q->raw;
     RSQuery_Parse_v3(pParser, COLON, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
   }}
	break;
	case 30:
/* #line 304 "lexer.rl" */
	{te = p+1;{ 
     tok.pos = ts-q->raw;
     RSQuery_Parse_v3(pParser, SEMICOLON, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
   }}
	break;
	case 31:
/* #line 328 "lexer.rl" */
	{te = p+1;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, TILDE, tok, q);  
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 32:
/* #line 344 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, PERCENT, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 33:
/* #line 352 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, LSQB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 34:
/* #line 360 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, RSQB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 35:
/* #line 368 "lexer.rl" */
	{te = p+1;}
	break;
	case 36:
/* #line 370 "lexer.rl" */
	{te = p+1;{
    tok.pos = ts - q->raw;
    RSQuery_Parse_v3(pParser, PUNCTUATION, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 37:
/* #line 378 "lexer.rl" */
	{te = p+1;}
	break;
	case 38:
/* #line 401 "lexer.rl" */
	{te = p+1;{
    tok.numval = 0;
    tok.len = 1;
    tok.s = ts;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    int is_attr = (*(ts + 3) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_WILDCARD : QT_WILDCARD;
    tok.len = te - (ts + 3 + is_attr) - 2;
    tok.s = ts + 3 + is_attr;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, WILDCARD, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 39:
/* #line 430 "lexer.rl" */
	{te = p+1;{
    tok.numval = 0;
    tok.len = 1;
    tok.s = ts;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 0;
    tok.s = ts + 1;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, EMPTY_TAG, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 40:
/* #line 457 "lexer.rl" */
	{te = p+1;{
    tok.numval = 0;
    tok.len = 1;
    tok.s = ts;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = te - (ts + 2);
    tok.s = ts + 1;

    // remove leading spaces
    while(tok.len && isspace(tok.s[0])) {
      tok.s++;
      tok.len--;
    }
    // remove trailing spaces
    while(tok.len > 1 && isspace(tok.s[tok.len - 1])) {
      tok.len--;
    }
    tok.pos = tok.s - q->raw;
    tok.type = QT_TERM;
    RSQuery_Parse_v3(pParser, UNESCAPED_TAG, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 41:
/* #line 495 "lexer.rl" */
	{te = p+1;{
    tok.numval = 0;
    tok.len = 1;
    tok.s = ts;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = te - (ts + 2);
    tok.s = ts + 1;

    // remove leading spaces
    while(tok.len && isspace(tok.s[0])) {
      tok.s++;
      tok.len--;
    }

    // remove escape character before 'w'
    tok.s++;
    tok.len--;

    // remove trailing spaces
    while(tok.len > 1 && isspace(tok.s[tok.len - 1])) {
      tok.len--;
    }
    tok.pos = tok.s - q->raw;
    tok.type = QT_TERM;
    RSQuery_Parse_v3(pParser, UNESCAPED_TAG, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 42:
/* #line 538 "lexer.rl" */
	{te = p+1;{
    tok.numval = 0;
    tok.len = 1;
    tok.s = ts;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    int is_attr = (*(ts + 2) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 2 + is_attr) - 1;
    tok.s = ts + 2 + is_attr;
    tok.pos = tok.s - q->raw;
    
    // we don't remove the leading spaces, because the suffix starts when
    // '*' is found, then spaces are part of the tag

    // Invalid case: wildcard and suffix
    if(tok.len > 1 && tok.s[0] == 'w' && tok.s[1] == '\'') {
      {p++; goto _out; }
    }

    // remove trailing spaces
    while(tok.len > 1 && isspace(tok.s[tok.len - 1])) {
      tok.len--;
    }
    RSQuery_Parse_v3(pParser, SUFFIX_TAG, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 43:
/* #line 580 "lexer.rl" */
	{te = p+1;{
    tok.numval = 0;
    tok.len = 1;
    tok.s = ts;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    int is_attr = (*(ts + 1) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 1 + is_attr) - 2;
    tok.s = ts + 1 + is_attr;
    tok.pos = tok.s - q->raw;

    // remove leading spaces
    while(tok.len && isspace(tok.s[0])) {
      tok.s++;
      tok.len--;
    }

    // Invalid case: wildcard and prefix
    if(tok.len > 1 && tok.s[0] == 'w' && tok.s[1] == '\'') {
      {p++; goto _out; }
    }

    // we don't remove the trailing spaces, because the prefix ends when
    // '*' is found, then the spaces are part of the tag.

    RSQuery_Parse_v3(pParser, PREFIX_TAG, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 44:
/* #line 624 "lexer.rl" */
	{te = p+1;{
    tok.numval = 0;
    tok.len = 1;

    tok.s = ts + 1;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    int is_attr = (*(ts + 2) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 2 + is_attr) - 2;
    tok.s = ts + 2 + is_attr;
    tok.pos = tok.s - q->raw;

    // we don't remove leading/trailing spaces, all the text enclosed by the '*'
    // is part of the tag

    // Invalid case: wildcard and contains
    if(tok.len > 1 && tok.s[0] == 'w' && tok.s[1] == '\'') {
      {p++; goto _out; }
    }

    RSQuery_Parse_v3(pParser, CONTAINS_TAG, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 45:
/* #line 663 "lexer.rl" */
	{te = p+1;{
    int is_attr = (*ts == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 1 + is_attr);
    tok.s = ts + is_attr;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, PREFIX, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 46:
/* #line 689 "lexer.rl" */
	{te = p+1;{
    int is_attr = (*(ts + 1) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 2 + is_attr);
    tok.s = ts + 1 + is_attr;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, CONTAINS, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 47:
/* #line 702 "lexer.rl" */
	{te = p+1;{
    int is_attr = (*(ts+2) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.pos = ts-q->raw;
    tok.len = te - (ts + 2 + is_attr);
    tok.s = ts + 1 + is_attr;
    tok.numval = 0;
    RSQuery_Parse_v3(pParser, VERBATIM, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 48:
/* #line 715 "lexer.rl" */
	{te = p+1;{
    tok.numval = 0;
    tok.len = 1;
    tok.s = ts;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LP, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    int is_attr = (*(ts + 3) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_WILDCARD : QT_WILDCARD;
    tok.len = te - (ts + 3 + is_attr) - 2;
    tok.s = ts + 3 + is_attr;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, WILDCARD, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RP, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 49:
/* #line 744 "lexer.rl" */
	{te = p+1;{
    int is_attr = (*(ts+2) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_WILDCARD : QT_WILDCARD;
    tok.pos = ts-q->raw + 2;
    tok.len = te - (ts + 3 + is_attr);
    tok.s = ts + 2 + is_attr;
    tok.numval = 0;
    RSQuery_Parse_v3(pParser, WILDCARD, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 50:
/* #line 99 "lexer.rl" */
	{te = p;p--;{ 
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, SIZE, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 51:
/* #line 111 "lexer.rl" */
	{te = p;p--;{ 
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, NUMBER, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 52:
/* #line 133 "lexer.rl" */
	{te = p;p--;{
    tok.pos = ts-q->raw;
    tok.len = te - (ts + 1);
    tok.s = ts+1;
    RSQuery_Parse_v3(pParser, ATTRIBUTE, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 53:
/* #line 184 "lexer.rl" */
	{te = p;p--;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, QUOTE, tok, q);  
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 54:
/* #line 208 "lexer.rl" */
	{te = p;p--;{
    tok.pos = ts - q->raw;
    RSQuery_Parse_v3(pParser, EQUAL, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 55:
/* #line 216 "lexer.rl" */
	{te = p;p--;{
    tok.pos = ts - q->raw;
    RSQuery_Parse_v3(pParser, GT, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 56:
/* #line 232 "lexer.rl" */
	{te = p;p--;{
    tok.pos = ts - q->raw;
    RSQuery_Parse_v3(pParser, LT, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 57:
/* #line 264 "lexer.rl" */
	{te = p;p--;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, LP, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 58:
/* #line 280 "lexer.rl" */
	{te = p;p--;{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 59:
/* #line 336 "lexer.rl" */
	{te = p;p--;{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, STAR, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 60:
/* #line 370 "lexer.rl" */
	{te = p;p--;{
    tok.pos = ts - q->raw;
    RSQuery_Parse_v3(pParser, PUNCTUATION, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 61:
/* #line 390 "lexer.rl" */
	{te = p;p--;{
    tok.len = te-ts;
    tok.s = ts;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, TERM, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 62:
/* #line 676 "lexer.rl" */
	{te = p;p--;{
    int is_attr = (*(ts + 1) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 1 + is_attr);
    tok.s = ts + 1 + is_attr;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, SUFFIX, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 63:
/* #line 111 "lexer.rl" */
	{{p = ((te))-1;}{ 
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, NUMBER, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 64:
/* #line 264 "lexer.rl" */
	{{p = ((te))-1;}{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, LP, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 65:
/* #line 280 "lexer.rl" */
	{{p = ((te))-1;}{ 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 66:
/* #line 336 "lexer.rl" */
	{{p = ((te))-1;}{
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, STAR, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 67:
/* #line 370 "lexer.rl" */
	{{p = ((te))-1;}{
    tok.pos = ts - q->raw;
    RSQuery_Parse_v3(pParser, PUNCTUATION, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 68:
/* #line 390 "lexer.rl" */
	{{p = ((te))-1;}{
    tok.len = te-ts;
    tok.s = ts;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, TERM, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 69:
/* #line 676 "lexer.rl" */
	{{p = ((te))-1;}{
    int is_attr = (*(ts + 1) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 1 + is_attr);
    tok.s = ts + 1 + is_attr;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, SUFFIX, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }}
	break;
	case 70:
/* #line 1 "NONE" */
	{	switch( act ) {
	case 1:
	{{p = ((te))-1;} 
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, SIZE, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 2:
	{{p = ((te))-1;} 
    tok.s = ts;
    tok.len = te-ts;
    char *ne = (char*)te;
    tok.numval = strtod(tok.s, &ne);
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, NUMBER, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 3:
	{{p = ((te))-1;}
    tok.pos = ts-q->raw;
    tok.len = te - (ts + 1);
    tok.s = ts+1;
    RSQuery_Parse_v3(pParser, MODIFIER, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 4:
	{{p = ((te))-1;}
    tok.pos = ts-q->raw;
    tok.len = te - (ts + 1);
    tok.s = ts+1;
    RSQuery_Parse_v3(pParser, ATTRIBUTE, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 6:
	{{p = ((te))-1;}
    tok.pos = ts-q->raw;
    tok.len = te - ts;
    tok.s = ts;
    RSQuery_Parse_v3(pParser, AS_T, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 7:
	{{p = ((te))-1;} 
    tok.pos = ts-q->raw;
    tok.s = ts;
    tok.len = te-ts;
    tok.numval = *ts == '-' ? -INFINITY : INFINITY;
    RSQuery_Parse_v3(pParser, NUMBER, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 21:
	{{p = ((te))-1;} 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 25:
	{{p = ((te))-1;} 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, MINUS, tok, q);  
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 26:
	{{p = ((te))-1;} 
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, PLUS, tok, q);  
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 28:
	{{p = ((te))-1;}
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, STAR, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 33:
	{{p = ((te))-1;}
    tok.pos = ts - q->raw;
    RSQuery_Parse_v3(pParser, PUNCTUATION, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 35:
	{{p = ((te))-1;}
    tok.pos = ts-q->raw;
    tok.len = te - ts;
    tok.s = ts;
    RSQuery_Parse_v3(pParser, ISMISSING, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 36:
	{{p = ((te))-1;}
    tok.len = te-ts;
    tok.s = ts;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, TERM, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 39:
	{{p = ((te))-1;}
    tok.numval = 0;
    tok.len = 1;
    tok.s = ts;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = te - (ts + 2);
    tok.s = ts + 1;

    // remove leading spaces
    while(tok.len && isspace(tok.s[0])) {
      tok.s++;
      tok.len--;
    }
    // remove trailing spaces
    while(tok.len > 1 && isspace(tok.s[tok.len - 1])) {
      tok.len--;
    }
    tok.pos = tok.s - q->raw;
    tok.type = QT_TERM;
    RSQuery_Parse_v3(pParser, UNESCAPED_TAG, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 42:
	{{p = ((te))-1;}
    tok.numval = 0;
    tok.len = 1;
    tok.s = ts;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, LB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    int is_attr = (*(ts + 1) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 1 + is_attr) - 2;
    tok.s = ts + 1 + is_attr;
    tok.pos = tok.s - q->raw;

    // remove leading spaces
    while(tok.len && isspace(tok.s[0])) {
      tok.s++;
      tok.len--;
    }

    // Invalid case: wildcard and prefix
    if(tok.len > 1 && tok.s[0] == 'w' && tok.s[1] == '\'') {
      {p++; goto _out; }
    }

    // we don't remove the trailing spaces, because the prefix ends when
    // '*' is found, then the spaces are part of the tag.

    RSQuery_Parse_v3(pParser, PREFIX_TAG, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }

    tok.len = 1;
    tok.s = te - 1;
    tok.pos = tok.s - q->raw;
    RSQuery_Parse_v3(pParser, RB, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	case 45:
	{{p = ((te))-1;}
    int is_attr = (*(ts + 1) == '$') ? 1 : 0;
    tok.type = is_attr ? QT_PARAM_TERM : QT_TERM;
    tok.len = te - (ts + 1 + is_attr);
    tok.s = ts + 1 + is_attr;
    tok.numval = 0;
    tok.pos = ts-q->raw;
    RSQuery_Parse_v3(pParser, SUFFIX, tok, q);
    if (!QPCTX_ISOK(q)) {
      {p++; goto _out; }
    }
  }
	break;
	}
	}
	break;
/* #line 1575 "lexer.c" */
		}
	}

_again:
	_acts = _query_actions + _query_to_state_actions[cs];
	_nacts = (unsigned int) *_acts++;
	while ( _nacts-- > 0 ) {
		switch ( *_acts++ ) {
	case 0:
/* #line 1 "NONE" */
	{ts = 0;}
	break;
/* #line 1588 "lexer.c" */
		}
	}

	if ( ++p != pe )
		goto _resume;
	_test_eof: {}
	if ( p == eof )
	{
	if ( _query_eof_trans[cs] > 0 ) {
		_trans = _query_eof_trans[cs] - 1;
		goto _eof_trans;
	}
	}

	_out: {}
	}

/* #line 777 "lexer.rl" */

  if (QPCTX_ISOK(q)) {
    RSQuery_Parse_v3(pParser, 0, tok, q);
  }
  RSQuery_ParseFree_v3(pParser, rm_free);
  if (!QPCTX_ISOK(q) && q->root) {
    QueryNode_Free(q->root);
    q->root = NULL;
  }
  return q->root;
}
