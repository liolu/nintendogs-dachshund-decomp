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
void *func_020038a8(s32, u32);
void func_0206cbf8(u32, void *, u32);
void func_02003718(s32 *arg0);
s32 func_02006bd0(s32 arg0) {
    s32 r4;
    r4 = func_02073a6c(arg0, 0x4345424B) + 8;
    if ((*(u32 *) (r4 + 0x4) & 0xf000000) == 0) {
        func_02073888(r4);
    }
    return r4;
}
