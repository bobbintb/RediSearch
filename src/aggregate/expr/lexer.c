
#line 1 "lexer.rl"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <assert.h>
#include <math.h>

#include "parser.h"
#include "expression.h"

#include "token.h"
#include "rmalloc.h"

/* forward declarations of stuff generated by lemon */
void RSExprParser_Parse(void *yyp, int yymajor, RSExprToken yyminor, RSExprParseCtx *ctx);
void *RSExprParser_ParseAlloc(void *(*mallocProc)(size_t));
void RSExprParser_ParseFree(void *p, void (*freeProc)(void *));

#line 247 "lexer.rl"

#line 26 "lexer.c"
static const char _expr_actions[] = {0,  1, 0,  1, 1,  1, 2,  1, 9,  1, 10, 1, 11, 1, 12, 1, 13, 1,
                                     14, 1, 15, 1, 16, 1, 17, 1, 18, 1, 19, 1, 20, 1, 21, 1, 22, 1,
                                     23, 1, 24, 1, 25, 1, 26, 1, 27, 1, 28, 1, 29, 1, 30, 1, 31, 1,
                                     32, 1, 33, 1, 34, 1, 35, 1, 36, 1, 37, 2, 2,  3, 2,  2, 4,  2,
                                     2,  5, 2,  2, 6,  2, 2,  7, 2,  2, 8};

static const unsigned char _expr_key_offsets[] = {0,  0,  3,  5,  8,  10,  14,  18,  19, 20,
                                                  22, 32, 73, 74, 77, 78,  82,  85,  86, 89,
                                                  92, 94, 95, 96, 97, 107, 114, 122, 129};

static const char _expr_trans_keys[] = {
    10,  34,  92, 34, 92, 10,  39, 92,  39, 92,  10,  39,  92,  110, 10,  39,  92, 102, 110,
    102, 48,  57, 9,  13, 32,  47, 58,  64, 91,  96,  123, 126, 32,  33,  34,  37, 38,  39,
    40,  41,  42, 43, 44, 45,  47, 60,  61, 62,  64,  94,  105, 124, 127, 0,   8,  9,   13,
    14,  31,  35, 46, 48, 57,  58, 63,  65, 90,  91,  96,  97,  122, 123, 126, 61, 10,  34,
    92,  38,  10, 39, 92, 105, 10, 39,  92, 105, 105, 48,  57,  46,  48,  57,  48, 57,  61,
    61,  61,  92, 96, 0,  47,  58, 64,  91, 94,  123, 127, 95,  48,  57,  65,  90, 97,  122,
    95,  110, 48, 57, 65, 90,  97, 122, 95, 48,  57,  65,  90,  97,  122, 124, 0};

static const char _expr_single_lengths[] = {0, 3, 2, 3, 2, 4, 4, 1, 1, 0, 0, 21, 1, 3, 1,
                                            4, 3, 1, 1, 1, 0, 1, 1, 1, 2, 1, 2,  1, 1};

static const char _expr_range_lengths[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 5, 10, 0, 0, 0,
                                           0, 0, 0, 1, 1, 1, 0, 0, 0, 4, 3, 3,  3, 0};

static const unsigned char _expr_index_offsets[] = {0,  0,  4,  7,  11,  14,  19,  24,  26, 28,
                                                    30, 36, 68, 70, 74,  76,  81,  85,  87, 90,
                                                    93, 95, 97, 99, 101, 108, 113, 119, 124};

static const char _expr_indicies[] = {
    0,  2,  3,  1,  4,  3,  1,  0,  2,  6,  5,  7,  6,  5,  8,  2,  6,  9,  5,  8,  2,  6,
    10, 5,  11, 0,  12, 0,  14, 13, 15, 15, 15, 15, 15, 0,  18, 19, 20, 22, 23, 24, 25, 26,
    27, 28, 29, 30, 31, 33, 34, 35, 36, 38, 39, 40, 16, 16, 18, 16, 21, 32, 21, 37, 21, 37,
    21, 17, 42, 41, 0,  2,  3,  1,  44, 43, 43, 2,  6,  45, 5,  0,  2,  6,  5,  47, 46, 47,
    32, 48, 50, 32, 49, 14, 49, 52, 51, 53, 43, 55, 54, 56, 0,  0,  0,  0,  0,  15, 37, 37,
    37, 37, 57, 37, 58, 37, 37, 37, 57, 37, 37, 37, 37, 57, 59, 43, 0};

static const char _expr_trans_targs[] = {
    11, 1,  11, 2,  13, 3,  4,  16, 11, 6,  16, 8,  11, 11, 20, 24, 11, 0,  11, 12,
    13, 11, 11, 14, 15, 11, 11, 11, 17, 11, 18, 11, 19, 21, 22, 23, 24, 25, 11, 26,
    28, 11, 11, 11, 11, 5,  11, 7,  11, 11, 9,  11, 11, 11, 11, 11, 10, 11, 27, 11};

static const char _expr_trans_actions[] = {
    63, 0,  35, 0,  77, 0, 0,  77, 61, 0,  68, 0,  7,  59, 0,  65, 41, 0,  37, 0,
    80, 39, 25, 0,  80, 9, 11, 31, 74, 33, 71, 29, 5,  0,  0,  0,  80, 0,  27, 0,
    0,  53, 19, 57, 21, 0, 55, 0,  47, 43, 0,  49, 13, 17, 51, 15, 0,  45, 0,  23};

static const char _expr_to_state_actions[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 1, 0, 0, 0,
                                              0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

static const char _expr_from_state_actions[] = {0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 3, 0, 0, 0,
                                                0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0, 0};

static const unsigned char _expr_eof_trans[] = {0,  1,  1,  1,  1,  9,  9,  1,  1,  14,
                                                1,  0,  42, 1,  44, 44, 1,  47, 49, 50,
                                                50, 52, 44, 55, 1,  58, 58, 58, 44};

static const int expr_start = 11;
static const int expr_first_final = 11;
static const int expr_error = 0;

static const int expr_en_main = 11;

#line 250 "lexer.rl"

RSExpr *RSExpr_Parse(const char *expr, size_t len, char **err) {
  RSExprParseCtx ctx = {
      .raw = expr,
      .len = len,
      .errorMsg = NULL,
      .root = NULL,
      .ok = 1,
  };
  void *pParser = RSExprParser_ParseAlloc(rm_malloc);

  int cs, act;
  const char *ts = ctx.raw;
  const char *te = ctx.raw + ctx.len;

#line 177 "lexer.c"
  {
    cs = expr_start;
    ts = 0;
    te = 0;
    act = 0;
  }

#line 268 "lexer.rl"
  RSExprToken tok = {.len = 0, .pos = 0, .s = 0, .numval = 0};

  // parseCtx ctx = {.root = NULL, .ok = 1, .errorMsg = NULL, .q = q};
  const char *p = ctx.raw;
  const char *pe = ctx.raw + ctx.len;
  const char *eof = pe;

#line 194 "lexer.c"
  {
    int _klen;
    unsigned int _trans;
    const char *_acts;
    unsigned int _nacts;
    const char *_keys;

    if (p == pe) goto _test_eof;
    if (cs == 0) goto _out;
  _resume:
    _acts = _expr_actions + _expr_from_state_actions[cs];
    _nacts = (unsigned int)*_acts++;
    while (_nacts-- > 0) {
      switch (*_acts++) {
        case 1:
#line 1 "NONE"
        {
          ts = p;
        } break;
#line 215 "lexer.c"
      }
    }

    _keys = _expr_trans_keys + _expr_key_offsets[cs];
    _trans = _expr_index_offsets[cs];

    _klen = _expr_single_lengths[cs];
    if (_klen > 0) {
      const char *_lower = _keys;
      const char *_mid;
      const char *_upper = _keys + _klen - 1;
      while (1) {
        if (_upper < _lower) break;

        _mid = _lower + ((_upper - _lower) >> 1);
        if ((*p) < *_mid)
          _upper = _mid - 1;
        else if ((*p) > *_mid)
          _lower = _mid + 1;
        else {
          _trans += (unsigned int)(_mid - _keys);
          goto _match;
        }
      }
      _keys += _klen;
      _trans += _klen;
    }

    _klen = _expr_range_lengths[cs];
    if (_klen > 0) {
      const char *_lower = _keys;
      const char *_mid;
      const char *_upper = _keys + (_klen << 1) - 2;
      while (1) {
        if (_upper < _lower) break;

        _mid = _lower + (((_upper - _lower) >> 1) & ~1);
        if ((*p) < _mid[0])
          _upper = _mid - 2;
        else if ((*p) > _mid[1])
          _lower = _mid + 2;
        else {
          _trans += (unsigned int)((_mid - _keys) >> 1);
          goto _match;
        }
      }
      _trans += _klen;
    }

  _match:
    _trans = _expr_indicies[_trans];
  _eof_trans:
    cs = _expr_trans_targs[_trans];

    if (_expr_trans_actions[_trans] == 0) goto _again;

    _acts = _expr_actions + _expr_trans_actions[_trans];
    _nacts = (unsigned int)*_acts++;
    while (_nacts-- > 0) {
      switch (*_acts++) {
        case 2:
#line 1 "NONE"
        {
          te = p + 1;
        } break;
        case 3:
#line 67 "lexer.rl"
        {
          act = 2;
        } break;
        case 4:
#line 87 "lexer.rl"
        {
          act = 4;
        } break;
        case 5:
#line 115 "lexer.rl"
        {
          act = 7;
        } break;
        case 6:
#line 186 "lexer.rl"
        {
          act = 17;
        } break;
        case 7:
#line 231 "lexer.rl"
        {
          act = 23;
        } break;
        case 8:
#line 244 "lexer.rl"
        {
          act = 25;
        } break;
        case 9:
#line 87 "lexer.rl"
        {
          te = p + 1;
          {
            tok.pos = ts - ctx.raw;
            tok.s = ts;
            tok.len = te - ts;

            tok.numval = *ts == '-' ? -INFINITY : INFINITY;
            RSExprParser_Parse(pParser, NUMBER, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 10:
#line 99 "lexer.rl"
        {
          te = p + 1;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, LP, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 11:
#line 107 "lexer.rl"
        {
          te = p + 1;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, RP, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 12:
#line 129 "lexer.rl"
        {
          te = p + 1;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, LE, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 13:
#line 143 "lexer.rl"
        {
          te = p + 1;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, GE, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 14:
#line 150 "lexer.rl"
        {
          te = p + 1;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, EQ, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 15:
#line 164 "lexer.rl"
        {
          te = p + 1;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, NE, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 16:
#line 171 "lexer.rl"
        {
          te = p + 1;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, AND, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 17:
#line 178 "lexer.rl"
        {
          te = p + 1;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, OR, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 18:
#line 193 "lexer.rl"
        {
          te = p + 1;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, MOD, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 19:
#line 200 "lexer.rl"
        {
          te = p + 1;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, POW, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 20:
#line 207 "lexer.rl"
        {
          te = p + 1;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, DIVIDE, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 21:
#line 215 "lexer.rl"
        {
          te = p + 1;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, TIMES, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 22:
#line 222 "lexer.rl"
        {
          te = p + 1;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, COMMA, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 23:
#line 231 "lexer.rl"
        {
          te = p + 1;
          {

            tok.len = te - ts;
            tok.s = ts;
            tok.numval = 0;
            tok.pos = ts - ctx.raw;

            RSExprParser_Parse(pParser, STRING, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 24:
#line 243 "lexer.rl"
        {
          te = p + 1;
        } break;
        case 25:
#line 244 "lexer.rl"
        {
          te = p + 1;
        } break;
        case 26:
#line 245 "lexer.rl"
        {
          te = p + 1;
        } break;
        case 27:
#line 54 "lexer.rl"
        {
          te = p;
          p--;
          {
            tok.s = ts;
            tok.len = te - ts;
            char *ne = (char *)te;
            tok.numval = strtod(tok.s, &ne);
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, NUMBER, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 28:
#line 77 "lexer.rl"
        {
          te = p;
          p--;
          {
            tok.pos = ts - ctx.raw;
            tok.len = te - ts;
            tok.s = ts;
            RSExprParser_Parse(pParser, SYMBOL, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 29:
#line 115 "lexer.rl"
        {
          te = p;
          p--;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, MINUS, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 30:
#line 122 "lexer.rl"
        {
          te = p;
          p--;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, LT, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 31:
#line 136 "lexer.rl"
        {
          te = p;
          p--;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, GT, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 32:
#line 157 "lexer.rl"
        {
          te = p;
          p--;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, NOT, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 33:
#line 186 "lexer.rl"
        {
          te = p;
          p--;
          {
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, PLUS, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 34:
#line 244 "lexer.rl"
        {
          te = p;
          p--;
        } break;
        case 35:
#line 54 "lexer.rl"
        {
          { p = ((te)) - 1; }
          {
            tok.s = ts;
            tok.len = te - ts;
            char *ne = (char *)te;
            tok.numval = strtod(tok.s, &ne);
            tok.pos = ts - ctx.raw;
            RSExprParser_Parse(pParser, NUMBER, tok, &ctx);
            if (!ctx.ok) {
              {
                p++;
                goto _out;
              }
            }
          }
        } break;
        case 36:
#line 244 "lexer.rl"
        {
          { p = ((te)) - 1; }
        } break;
        case 37:
#line 1 "NONE"
        {
          switch (act) {
            case 2: {
              { p = ((te)) - 1; }
              tok.pos = ts - ctx.raw;
              tok.len = te - (ts + 1);
              tok.s = ts + 1;
              RSExprParser_Parse(pParser, PROPERTY, tok, &ctx);
              if (!ctx.ok) {
                {
                  p++;
                  goto _out;
                }
              }
            } break;
            case 4: {
              { p = ((te)) - 1; }
              tok.pos = ts - ctx.raw;
              tok.s = ts;
              tok.len = te - ts;

              tok.numval = *ts == '-' ? -INFINITY : INFINITY;
              RSExprParser_Parse(pParser, NUMBER, tok, &ctx);
              if (!ctx.ok) {
                {
                  p++;
                  goto _out;
                }
              }
            } break;
            case 7: {
              { p = ((te)) - 1; }
              tok.pos = ts - ctx.raw;
              RSExprParser_Parse(pParser, MINUS, tok, &ctx);
              if (!ctx.ok) {
                {
                  p++;
                  goto _out;
                }
              }
            } break;
            case 17: {
              { p = ((te)) - 1; }
              tok.pos = ts - ctx.raw;
              RSExprParser_Parse(pParser, PLUS, tok, &ctx);
              if (!ctx.ok) {
                {
                  p++;
                  goto _out;
                }
              }
            } break;
            case 23: {
              { p = ((te)) - 1; }

              tok.len = te - ts;
              tok.s = ts;
              tok.numval = 0;
              tok.pos = ts - ctx.raw;

              RSExprParser_Parse(pParser, STRING, tok, &ctx);
              if (!ctx.ok) {
                {
                  p++;
                  goto _out;
                }
              }
            } break;
            default: {
              { p = ((te)) - 1; }
            } break;
          }
        } break;
#line 645 "lexer.c"
      }
    }

  _again:
    _acts = _expr_actions + _expr_to_state_actions[cs];
    _nacts = (unsigned int)*_acts++;
    while (_nacts-- > 0) {
      switch (*_acts++) {
        case 0:
#line 1 "NONE"
        {
          ts = 0;
        } break;
#line 658 "lexer.c"
      }
    }

    if (cs == 0) goto _out;
    if (++p != pe) goto _resume;
  _test_eof : {}
    if (p == eof) {
      if (_expr_eof_trans[cs] > 0) {
        _trans = _expr_eof_trans[cs] - 1;
        goto _eof_trans;
      }
    }

  _out : {}
  }

#line 276 "lexer.rl"

  if (ctx.ok) {
    RSExprParser_Parse(pParser, 0, tok, &ctx);
  } else if (ctx.root) {
    RSExpr_Free(ctx.root);
    ctx.root = NULL;
  }
  RSExprParser_ParseFree(pParser, rm_free);
  if (err) {
    *err = ctx.errorMsg;
  }

  return ctx.root;
}
