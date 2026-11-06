#include "m2c.h"

s16 func_02027e14(void *arg0, s32 arg1) {
    return M2C_FIELD((M2C_FIELD(arg0, s32 *, 0x9E4) + ((s32) ((arg1 + 0xE) << 0x10) >> 0xF)), s16 *, 0x18);
}
