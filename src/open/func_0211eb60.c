#include "m2c.h"
s16 func_01ffdb08(s16);
s32 func_02027f68(s32, s32);
s32 func_0205df50(s32, s32);
s16 func_0211edd0(u8 *);
s32 func_0211ed04(s32, s16, s16, s16, s16);
void func_02119aa8(s32, s32);
extern void *data_0215a04c;
void func_0211eb60(u8 *arg0) {
    s16 i;
    s32 scale;
    s16 v;
    s16 div;
    s16 sum1;
    s16 sum2;
    s16 sum3;

    scale = (10000 - func_02027f68(func_01ffdb08(M2C_FIELD(data_0215a04c, s16 *, 0xE)), 7)) * 10;
    for (i = 0; i < 3; i++) {
        div = 500;
        if (i >= 2) {
            div = 250;
        }
        v = func_0205df50(scale, div);
        if (v < 0) {
            v = 0;
        }
        ((s16 *) (arg0 + 0x60))[i] = -v;
    }
    sum1 = 0;
    for (i = 0; i < 5; i++) {
        sum1 += ((s16 *) (arg0 + 0x42))[i];
    }
    sum1 += ((s16 *) (arg0 + 0x60))[0];
    if (sum1 < 0) {
        sum1 = 0;
    }
    sum2 = 0;
    for (i = 0; i < 5; i++) {
        sum2 += ((s16 *) (arg0 + 0x4C))[i];
    }
    sum2 += ((s16 *) (arg0 + 0x62))[0];
    if (sum2 < 0) {
        sum2 = 0;
    }
    sum3 = 0;
    for (i = 0; i < 5; i++) {
        sum3 += ((s16 *) (arg0 + 0x56))[i];
    }
    sum3 += ((s16 *) (arg0 + 0x64))[0];
    if (sum3 < 0) {
        sum3 = 0;
    }
    func_0211ed04(M2C_FIELD(arg0, s32 *, 0x1C), func_0211edd0(arg0), sum1, sum2, sum3);
    func_02119aa8((s32) arg0, M2C_FIELD(arg0, s32 *, 0x1C));
    M2C_FIELD(arg0, u16 *, 0x4) = 0x807;
    M2C_FIELD(arg0, u16 *, 0x6) = 0;
}
