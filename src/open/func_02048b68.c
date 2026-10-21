#include "m2c.h"
s32 func_02028114(M2C_UNK);
s32 func_0202507c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_02025254(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0203535c(M2C_UNK);
void func_02035fd8(M2C_UNK);
void func_0202f9a0(M2C_UNK);
void func_0202532c(M2C_UNK, M2C_UNK);
void func_02024e30(M2C_UNK, M2C_UNK, M2C_UNK);
void func_02024fe0(M2C_UNK, M2C_UNK);
void func_02048360(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 *data_0214da84;
void func_02048b68(M2C_UNK arg0) {
    s32 temp_r0;
    s32 v;
    s32 temp_r1;
    s32 w;

    temp_r0 = func_02028114(arg0);
    v = (s32) (((s64) temp_r0 * 0x28 + 0x800) >> 12);
    if (func_0202507c(arg0, 0xA, 0x14, v) == 0) {
        temp_r1 = func_02028114(arg0);
        w = (s32) (((s64) temp_r1 * 0x66 + 0x800) >> 12);
        func_02025254(arg0, 0x15, w);
    }
    if (func_0203535c(arg0) != 0) {
        func_02035fd8(arg0);
        func_0202f9a0(arg0);
    }
}
