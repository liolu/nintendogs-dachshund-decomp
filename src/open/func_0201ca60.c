#include "m2c.h"
s32 func_02028114(M2C_UNK);
s32 func_02024e30(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_02024d30(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0201d1e0(M2C_UNK);
void func_02035978(M2C_UNK, M2C_UNK);
s32 func_0203535c(M2C_UNK);
void func_0202f9a0(M2C_UNK);
void func_0201ca60(M2C_UNK arg0) {
    s32 temp_r0;
    s32 v;
    s32 temp_r1;
    s32 w;

    temp_r0 = func_02028114(arg0);
    v = -(s32) (((s64) temp_r0 * 0xA3 + 0x800) >> 12);
    if (func_02024d30(arg0, 0xB, 0x24, v) == 0) {
        temp_r1 = func_02028114(arg0);
        w = -(s32) (((s64) temp_r1 * 0x5E + 0x800) >> 12);
        func_02024d30(arg0, 0x2E, 0x50, w);
    }
    func_0201d1e0(arg0);
    func_02035978(arg0, 1);
    if (func_0203535c(arg0) != 0) {
        func_0202f9a0(arg0);
    }
}
