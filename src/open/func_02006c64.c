#include "m2c.h"
#include "engine.h"
extern void *data_0214d628;
extern s32 func_02073a6c(s32, u32);
extern void func_02073888(s32);
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
void func_02006c64(void *arg0, void *arg1) {
    u16 idx;
    s32 *p;

    if (M2C_FIELD(arg0, u16 *, 2) >= M2C_FIELD(arg0, u16 *, 0)) {
        return;
    }
    idx = M2C_FIELD(arg0, u16 *, 2);
    p = (s32 *) (M2C_FIELD(arg0, s32 *, 4) + (idx << 3));
    p[0] = M2C_FIELD(arg1, s32 *, 0);
    M2C_FIELD(p, u16 *, 4) = M2C_FIELD(arg1, u16 *, 4);
    M2C_FIELD(arg0, u16 *, 2) = M2C_FIELD(arg0, u16 *, 2) + 1;
}
