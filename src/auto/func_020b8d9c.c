#include "m2c.h"

extern s32 data_02153740;

s16 func_020b8d9c(s32 arg0, s32 arg1) {
    return M2C_FIELD((data_02153740 + (arg0 << 0xB) + (arg1 * 0x10)), s16 *, 0x14B8);
}
