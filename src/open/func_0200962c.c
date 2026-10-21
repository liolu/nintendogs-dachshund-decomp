#include "m2c.h"
#include "engine.h"
#pragma opt_strength_reduction off
extern void *data_0214cf54;
extern u8 data_0214cfe0[];
void func_0206cbc4(M2C_UNK, void *, M2C_UNK);
s32 func_020092e4(M2C_UNK, M2C_UNK);
void func_020b777c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK func_020cba74(M2C_UNK);
void func_0207ca98(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_02145614[];
#pragma opt_strength_reduction off
s32 func_0200962c(M2C_UNK arg0, s16 arg1, s8 arg2) {
    s16 i;

    for (i = 0; i < 7; i++) {
        if ((M2C_FIELD(arg0 + i * 4, s32 *, 0x8FC) != 0)
         && (M2C_FIELD(arg0 + i * 2, s16 *, 0x81C) == arg1)
         && (M2C_FIELD(arg0 + i, s8 *, 0x838) == arg2)) {
            return i;
        }
    }
    return -1;
}
