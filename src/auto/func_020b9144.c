#include "m2c.h"

extern s32 data_02153740;

s32 func_020b9144(s32 arg0, s32 arg1) {
    return M2C_FIELD((M2C_FIELD(((arg0 * 0x294) + data_02153740), s32 *, 0xA64) + (arg1 * 8)), s32 *, 0xC);
}
