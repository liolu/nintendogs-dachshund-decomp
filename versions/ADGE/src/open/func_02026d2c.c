#include "m2c.h"
extern u16 *data_0215a04c;
extern u16 data_ov003_02198808[];
s32 func_02027884(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_021390a8;
extern s8 data_0213aa2d[];
s64 func_02080d64();
void func_02080df4();
s32 func_020ce5fc();
void func_020ce618();
void func_020ce1a0();
s32 func_02026d2c(s32 arg0) {
    u16 v = *data_0215a04c;

    if (v == 1) {
        return 0;
    }
    if (v == 4) {
        return 0;
    }
    if (v == 2) {
        return 0;
    }
    if (v == 0x8004) {
        return 0;
    }
    if (v == 0x11) {
        return 0;
    }
    return *(s32 *) (arg0 + 0x488) > data_ov003_02198808[*(s8 *) (arg0 + 0x8D)];
}
