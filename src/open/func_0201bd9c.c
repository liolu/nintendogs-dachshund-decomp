#include "m2c.h"
s32 func_02028114(M2C_UNK);
s32 func_02024d30(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0201bd9c(M2C_UNK arg0, s32 arg1) {
    s32 temp;
    s32 v;

    temp = func_02028114(arg0);
    v = (s32) (((s64) temp * 0xA3 + 0x800) >> 12);
    if (func_02024d30(arg0, 0xB, 0x24, arg1 * v) != 0) {
        return;
    }
    temp = func_02028114(arg0);
    v = (s32) (((s64) temp * 0x5E + 0x800) >> 12);
    func_02024d30(arg0, 0x2E, 0x50, arg1 * v);
}
