#include "m2c.h"
extern s8 data_0213aa2d[];
s64 func_02080d64();
void func_02080df4();
s32 func_020ce5fc();
void func_020ce618();
void func_020ce1a0();
s32 func_02027884(M2C_UNK, M2C_UNK);                /* extern */
extern M2C_UNK data_021390a8;
extern u16 *data_0215a04c;
extern u16 data_ov003_02198808[];
s32 func_02027884(M2C_UNK, M2C_UNK);
s32 func_02022d68(s32 arg0) {
    register unsigned var_r2;
    unsigned var_r1;
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0xF0);
    if ((temp_r1 >= 0x5B) && (0x6F > temp_r1)) {
        var_r2 = 1;
    } else {
        var_r2 = 0;
    }
    if (var_r2) {
        var_r1 = 1;
    } else if ((temp_r1 >= 0xF) && (temp_r1 <= 0x4A)) {
        var_r1 = 1;
    } else {
        var_r1 = 0;
    }
    if (var_r1 != 0) {
        return (u16) (temp_r1 - 0xC);
    }
    return 0;
}
