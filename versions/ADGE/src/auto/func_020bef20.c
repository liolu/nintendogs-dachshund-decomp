#include "engine.h"
#include "m2c.h"

extern void *data_02155660;

s32 func_020bef20(void) {
    return M2C_FIELD(data_02155660, s32 *, 0x20);
}
