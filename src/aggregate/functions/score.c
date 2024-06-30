/*
 * Copyright Redis Ltd. 2016 - present
 * Licensed under your choice of the Redis Source Available License 2.0 (RSALv2) or
 * the Server Side Public License v1 (SSPLv1).
 */


#include "aggregate/expr/expression.h"
#include "function.h"

// Expose the score of the current document
static int score(ExprEval *ctx, RSValue *result, RSValue **argv, size_t argc, QueryError *err) {
  VALIDATE_ARGS("score", 0, 0, err);
  if (!(ctx->res && ctx->res->flags & Result_ScoreIsSet)) {
    QueryError_SetError(err, QUERY_ENOPROPVAL, "Score is not available");
    return EXPR_EVAL_ERR;
  }

  result->t = RSValue_Number;
  result->numval = ctx->res->score;
  return EXPR_EVAL_OK;
}

void RegisterScoreFunctions() {
  RSFunctionRegistry_RegisterFunction("score", score, RSValue_Number);
}