#include "engine.h"
#include "m2c.h"

extern void *data_021545d8;

s32 func_02099890(void) {
    return M2C_FIELD(data_021545d8, s32 *, 0x14) + 4;
}
