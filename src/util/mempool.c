
#include "mempool.h"
#include "rmalloc.h"
#include "config.h"

#include <sys/param.h>
#include <stdio.h>
#include <pthread.h>

///////////////////////////////////////////////////////////////////////////////////////////////

int mempool_t::mempoolDisable_g = -1;

struct {
  mempool_t **pools;
  size_t numPools;
} globalPools_g = {nullptr};

//---------------------------------------------------------------------------------------------

mempool_t::mempool_t(size_t initialCap, size_t maxCap, bool isGlobal) {
  if (mempoolDisable_g == -1) {
    if (getenv("REDISEARCH_NO_MEMPOOL")) {
      fprintf(stderr, "[redisearch]: REDISEARCH_NO_MEMPOOL in environment. Disabling\n");
      mempoolDisable_g = 1;
    } else {
      mempoolDisable_g = 0;
    }
  }
  if (mempoolDisable_g || RSGlobalConfig.noMemPool) {
    cap = 0;
    max = 0;
    entries = nullptr;
  } else {
    entries = static_cast<void **>(rm_calloc(initialCap, sizeof *entries));
    cap = initialCap;
    max = maxCap;
  }
  top = 0;

  if (isGlobal) {
    globalPools_g.numPools++;
    globalPools_g.pools = static_cast<mempool_t **>(
      rm_realloc(globalPools_g.pools, globalPools_g.numPools * sizeof *globalPools_g.pools)
    );
    globalPools_g.pools[globalPools_g.numPools - 1] = this;
  }
}

//---------------------------------------------------------------------------------------------

void *mempool_t::get() {
  if (top > 0) {
    return entries[--top];
  }
  return alloc();
}

//---------------------------------------------------------------------------------------------

void mempool_t::release(void *ptr) {
  if (entries == nullptr || (max > 0 && max <= top)) {
    _free(ptr);
    return;
  }

  if (top == cap) {
    // grow the pool
    cap += cap ? MIN(cap, 1024) : 1;
    entries = static_cast<void **>(rm_realloc(entries, cap * sizeof *entries));
  }
  entries[top++] = ptr;
}

//---------------------------------------------------------------------------------------------

void mempool_t::destroy() {
  for (size_t i = 0; i < top; ++i) {
    _free(entries[i]);
  }
  rm_free(entries);
}

//---------------------------------------------------------------------------------------------

void mempool_t::free_global() {
  for (size_t ii = 0; ii < globalPools_g.numPools; ++ii) {
    globalPools_g.pools[ii]->destroy();
  }
  rm_free(globalPools_g.pools);
  globalPools_g.numPools = 0;
}

///////////////////////////////////////////////////////////////////////////////////////////////
