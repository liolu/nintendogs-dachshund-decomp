#include "m2c.h"
s32 func_02027884(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_021390a8;
extern u16 *data_0215a04c;
extern u16 data_ov003_02198808[];
extern s8 data_0213aa2d[];
s64 func_02080d64();
void func_02080df4();
s32 func_020ce5fc();
void func_020ce618();
void func_020ce1a0();
s32 func_02027700(M2C_UNK arg0, M2C_UNK arg1) {
    s32 a;
    s32 b;
    s32 *p;

    a = func_02027884(arg0, arg1);
    b = func_02027884(arg1, arg0);
    p = (s32 *) ((s8 *) &data_021390a8 + (2 - a) * 0x3C);
    return (s8) p[2 - b];
}
