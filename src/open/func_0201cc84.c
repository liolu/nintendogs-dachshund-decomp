#include "m2c.h"
s32 func_02028114(s32);
void func_02024d30(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0201d1e0(M2C_UNK);
void func_02035978(M2C_UNK, M2C_UNK);
M2C_UNK func_0203535c(M2C_UNK);
void func_0202f9a0(M2C_UNK);
s32 func_0204722c(M2C_UNK, M2C_UNK);
void func_0204f918(s32);
extern u32 data_0214da84;
void func_0201cc84(M2C_UNK arg0) {
    s32 temp_r0;
    s32 v;

    temp_r0 = func_02028114(arg0);
    v = (s32) (((s64) temp_r0 * 0x102 + 0x800) >> 12);
    func_02024d30(arg0, 0x1E, 0x31, -v);
    func_0201d1e0(arg0);
    func_02035978(arg0, 1);
    if (func_0203535c(arg0) != 0) {
        func_0202f9a0(arg0);
    }
}
