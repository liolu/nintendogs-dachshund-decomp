#include "m2c.h"

extern s32 data_02153740;

s32 func_020b91a0(s32 arg0) {
    return M2C_FIELD(((arg0 * 0x294) + data_02153740), s32 *, 0xA64);
}
