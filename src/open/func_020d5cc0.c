#include "m2c.h"
M2C_UNK func_020b1bec(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0206cbc4(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020d5cc0(u16 *arg0, u16 arg1, u32 arg2) {
    u32 delta = (arg2 << 28) >> 16;

    while (arg1 != 0) {
        *arg0 += delta;
        arg0++;
        arg1--;
    }
}
