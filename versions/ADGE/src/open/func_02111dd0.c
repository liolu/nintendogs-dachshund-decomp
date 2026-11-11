#include "m2c.h"
extern s32 *data_0215a050;
#pragma opt_strength_reduction off
s32 *func_020038a8(s32 arg0, s32 arg1);
#pragma opt_strength_reduction off
#pragma opt_strength_reduction off
#pragma opt_strength_reduction off
#pragma opt_strength_reduction off
#pragma opt_strength_reduction off
void func_02111dd0(void) {
    s16 i;

    data_0215a050[0] = -1;
    for (i = 0; i < 2; i++) {
        M2C_FIELD((u8 *) data_0215a050 + i * 2, s16 *, 4) = -1;
        M2C_FIELD((u8 *) data_0215a050 + i * 4, u32 *, 8) = 1;
    }
}
