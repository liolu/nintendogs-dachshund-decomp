#include "m2c.h"
s32 func_02086374(void *arg0, s32 arg1, s32 arg2) {
    s32 ty = arg2 >> 3;
    s32 tx = arg1 >> 3;
    s32 w = (M2C_FIELD(arg0, u16 *, 4) << 4) / 8;
    s32 off = w * ty + (tx << 4);
    s32 addr = M2C_FIELD(arg0, s32 *, 0);

    addr += off << 1;
    return addr + ((arg2 & 7) << 2);
}
