#include "m2c.h"
s32 func_02093e00(s32, s32, s32, s16);
void func_02093f10(s32, s32, s32 *, u32 *);
s32 func_020940a0(s32 arg0, s32 *arg1, s32 arg2, s16 arg3) {
    s32 a;
    u32 b;
    u32 i;
    s32 t;

    if ((u32) *arg1 < 0x3E8) {
        return -2;
    }
    if (arg3 != 0x7FFF) {
        t = func_02093e00(arg0, *arg1, 0, arg3);
        if (t >= 0x6000) {
            return -3;
        }
        if (t < 0x1000) {
            return -4;
        }
    }
    func_02093f10(arg0, *arg1, &a, &b);
    if (b <= 0x3E8) {
        return -2;
    }
    for (i = 0; i < b; i++) {
        ((s16 *) arg0)[i] = ((s16 *) arg0)[a + i];
    }
    *arg1 = b;
    return 0;
}
