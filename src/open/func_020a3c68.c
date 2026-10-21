#include "m2c.h"
#include "engine.h"
extern void *data_02159e70;
extern u8 data_0212c174[];
extern s32 data_021545bc[7];
M2C_UNK func_02116cb4(M2C_UNK);
M2C_UNK func_02116da0(M2C_UNK);
void func_02116f14(M2C_UNK);
s32 func_020a3c68(s32 arg0, s32 arg1) {
    s8 *p = (s8 *) data_02159e70 + 0xC4;
    s32 res = 0;

    if (arg0 == 0x30002) {
        if (arg1 == 0) {
            res = (s32) (p + 0xEC) + M2C_FIELD(p, s32 *, 0xC) * 16;
        } else {
            res = (s32) (p + 0x11C) + M2C_FIELD(p, s32 *, 0x10) * 16;
        }
    }
    return res;
}
