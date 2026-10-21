#include "m2c.h"
s32 func_02028114(M2C_UNK);
s32 func_02024e30(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02024d30(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020485c4(M2C_UNK, M2C_UNK);
s32 func_0202507c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0203535c(M2C_UNK);
void func_02035fd8(M2C_UNK);
void func_0202f9a0(M2C_UNK);
void func_02048360(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 *data_0214da84;
void func_02047c0c(M2C_UNK arg0) {
    s32 temp_r0;
    s32 v;
    s32 temp_r1;
    s32 w;

    temp_r0 = func_02028114(arg0);
    v = (s32) (((s64) temp_r0 * 0x5D + 0x800) >> 12);
    if (func_02024e30(arg0, 0x16, v) == 0) {
        temp_r1 = func_02028114(arg0);
        w = (s32) (((s64) temp_r1 * 0xBA + 0x800) >> 12);
        func_02024d30(arg0, 0x17, 0x2C, w);
    }
    func_020485c4(arg0, 7);
}
