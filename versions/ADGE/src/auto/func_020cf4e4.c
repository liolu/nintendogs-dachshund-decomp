#include "engine.h"
#include "m2c.h"

extern void *data_02159e38;

s32 func_020cf4e4(s32 arg0) {
    return M2C_FIELD(data_02159e38, s32 *, 0x141C) + 0x248 + (arg0 * 4);
}
