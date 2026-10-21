#include "m2c.h"
s32 func_02028114(M2C_UNK);
void func_0202507c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_0204722c(M2C_UNK, M2C_UNK);
s32 func_0203535c(M2C_UNK);
void func_0204f918(M2C_UNK);
s32 func_02028114(s32);
M2C_UNK func_0204722c(M2C_UNK, M2C_UNK);
M2C_UNK func_0203535c(M2C_UNK);
void func_02024f08(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0202fa5c(M2C_UNK);
extern u32 data_0214da84;
void func_02046d54(M2C_UNK arg0) {
    s32 v;

    v = (s32) (((s64) func_02028114(arg0) * 0x117 + 0x800) >> 12);
    func_0202507c(arg0, 0x10, 0x26, v);
    if (func_0204722c(arg0, 1) != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0204f918(arg0);
}
