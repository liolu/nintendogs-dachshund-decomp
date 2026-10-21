#include "m2c.h"
#include "engine.h"
extern u8 data_0212c174[];
M2C_UNK func_02116cb4(M2C_UNK);
M2C_UNK func_02116da0(M2C_UNK);
void func_02116f14(M2C_UNK);
extern void *data_02159e70;
extern s32 data_021545bc[7];
s32 func_020a71f0(s32 arg0, s32 arg1) {
    s32 v;
    s32 i;
    s32 result;

    result = 0;
    v = func_02028120(arg0);
    for (i = 0; i < 4; i++) {
        if (v > ((s16 (*)[4]) data_0212c174)[M2C_FIELD(arg1, s16 *, 0x94)][i]) {
            result += 1 << i;
        }
    }
    return result;
}
