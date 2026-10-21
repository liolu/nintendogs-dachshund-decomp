#include "m2c.h"
#include "engine.h"
extern s32 func_02073a6c(s32, u32);
extern void func_02073888(s32);
extern void *data_0214d628;
void func_020b777c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK func_020cba74(M2C_UNK);
void func_0207ca98(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_02145614[];
#pragma opt_strength_reduction off
extern void *data_0214cf54;
extern u8 data_0214cfe0[];
void func_0206cbc4(M2C_UNK, void *, M2C_UNK);
s32 func_020092e4(M2C_UNK, M2C_UNK);
#pragma opt_strength_reduction off
s32 func_02006db4(s32 arg0) {
    s64 p;

    if (arg0 <= 0) {
        return 0;
    }
    if (arg0 >= 0x1000) {
        return 0x1000;
    }
    p = ((s64) arg0 * arg0 + 0x800) >> 12;
    p = (s64) arg0 * (s32) p + 0x800;
    return (s32) (p >> 12);
}
