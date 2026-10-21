#include "m2c.h"
#include "engine.h"
void func_020b777c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK func_020cba74(M2C_UNK);
void func_0207ca98(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_02145614[];
#pragma opt_strength_reduction off
extern void *data_0214cf54;
extern u8 data_0214cfe0[];
void func_0206cbc4(M2C_UNK, void *, M2C_UNK);
s32 func_020092e4(M2C_UNK, M2C_UNK);
extern s32 func_02073a6c(s32, u32);
extern void func_02073888(s32);
extern void *data_0214d628;
#pragma opt_strength_reduction off
#pragma opt_strength_reduction off
s32 func_02006e3c(s32 arg0) {
    s64 rounding;
    s64 product;

    if (arg0 <= 0) {
        return 0;
    }
    if (arg0 >= 0x1000) {
        return 0x1000;
    }
    rounding = 0x800;
    product = (s64) arg0 * arg0;
    return (u64) (product + rounding) >> 0xC;
}
