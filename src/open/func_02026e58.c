#include "m2c.h"
extern s32 data_0214da80;
s32 func_02114564(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02026e58(s32 arg0) {
    s32 v;
    s32 x;
    s32 y;

    v = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x9E8), s32 *, 8);
    x = (s32) (((s64) v * v + 0x800) >> 12);
    y = (s32) (((s64) x * 0x1004 + 0x800) >> 12);
    if (func_02114564(data_0214da80, arg0 + 0x378, y) != 0) {
        return 1;
    }
    v = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x9E8), s32 *, 8);
    x = (s32) (((s64) v * v + 0x800) >> 12);
    y = (s32) (((s64) x * 0x14D2 + 0x800) >> 12);
    if (func_02114564(data_0214da80, arg0 + 0x384, y) != 0) {
        return 2;
    }
    v = M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x9E8), s32 *, 8);
    x = (s32) (((s64) v * v + 0x800) >> 12);
    y = (s32) (((s64) x * 0x14D2 + 0x800) >> 12);
    if (func_02114564(data_0214da80, arg0 + 0x348, y) != 0) {
        return 3;
    }
    return 0;
}
