#include "engine.h"
#include "m2c.h"

extern s32 data_0213e8f8;
extern void *data_0215a048;

s32 func_020a7e24(void) {
    return data_0213e8f8 + M2C_FIELD(data_0215a048, s32 *, 0xC);
}
