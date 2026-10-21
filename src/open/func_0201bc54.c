#include "m2c.h"

s32 func_02028114(s32 arg0);
s32 func_0202507c(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
s32 func_02024d30(s32 arg0, s32 arg1, s32 arg2, s32 arg3);

void func_0201bc54(M2C_UNK arg0, s32 arg1) {
    s32 temp;
    s32 v;

    temp = func_02028114(arg0);
    v = (s32) (((s64) temp * 0x95 + 0x800) >> 12);
    if (func_0202507c(arg0, 0xB, 0x1A, v) == 0) {
        temp = func_02028114(arg0);
        v = (s32) (((s64) temp * 0x64 + 0x800) >> 12);
        func_0202507c(arg0, 0x2A, 0x3C, v);
    }
    temp = func_02028114(arg0);
    v = (s32) (((s64) temp * 0x5D + 0x800) >> 12);
    if (func_02024d30(arg0, 6, 0x1C, arg1 * v) != 0) {
        return;
    }
    temp = func_02028114(arg0);
    v = (s32) (((s64) temp * -421 + 0x800) >> 12);
    func_02024d30(arg0, 0x2B, 0x42, arg1 * v);
}
