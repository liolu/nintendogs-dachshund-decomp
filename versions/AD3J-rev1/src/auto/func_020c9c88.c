#include "engine.h"
#include "m2c.h"

extern void *data_02154c48;

s32 func_020c9c88(s32 arg0) {
    return M2C_FIELD(data_02154c48, s32 *, 0x141C) + 0x248 + (arg0 * 4);
}
