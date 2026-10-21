#include "m2c.h"
u32 func_02080c28(void);
void func_02080c3c(u32);
void func_01ffdb38(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_0206c6d8(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    volatile u32 *p;
    u32 state;

    if (arg3 == 0) {
        return;
    }
    p = (volatile u32 *) (0x40000B0 + (arg0 * 3 + 2) * 4);
    while (*p & 0x80000000) {
    }
    state = func_02080c28();
    *(u32 *) (0x40000E0 + arg0 * 4) = arg2;
    func_01ffdb38(arg0, 0x40000E0 + arg0 * 4, arg1, (arg3 >> 1) | 0x81000000);
    func_02080c3c(state);
    while (*p & 0x80000000) {
    }
}
