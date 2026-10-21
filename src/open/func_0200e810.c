#include "m2c.h"
s32 func_02028114(s32);
void func_02024fe0(M2C_UNK, M2C_UNK);
M2C_UNK func_0203535c(M2C_UNK);
void func_0202fa5c(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0200e810(M2C_UNK arg0) {
    s32 v;

    v = (s32) (((s64) func_02028114(arg0) * 0x66 + 0x800) >> 12);
    func_02024fe0(arg0, -v);
    M2C_FIELD(arg0, s16 *, 0x152) = M2C_FIELD(arg0, s16 *, 0x148);
    if (func_0203535c(arg0) != 0) {
        M2C_FIELD(arg0, s16 *, 0x152) = 0;
        func_0202fa5c(arg0, arg0 + 0x100, 0);
    }
}
