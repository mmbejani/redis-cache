#include <deque>
#include <string>

#include "redismodule.h"

using namespace std;

namespace buzz {
    struct Cache {
        size_t max_size;
        deque<char[]>* queue;
    };

    int createCache(RedisModuleCtx *ctx, RedisModuleString** argv, int argc){
        if (argc != 2)
            return RedisModule_WrongArity(ctx);

        RedisModuleKey *key = 
        void* q = RedisModule_Alloc(sizeof(Cache));

    }

    int addDataToCache(RedisModuleCtx *ctx, RedisModuleString **argv, int argc){
        
    }

    int removeDataFromCache(RedisModuleCtx *ctx, RedisModuleString **argv, int argc){

    }
}

int RedisModule_OnLoad(RedisModuleCtx *ctx, RedisModuleString **argv, int argc){
    if (RedisModule_Init(ctx, "Cache", 1, REDISMODULE_APIVER_1) == REDISMODULE_ERR) [[unlikely]]
        return REDISMODULE_ERR;

    if (RedisModule)
    
    return REDISMODULE_OK;
}