/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020f1098(M2C_UNK);

extern void *data_02159e70;

void func_020e251c(void) {
    s32 temp_r0;
    s32 temp_r0_2;
    void *temp_r4;

    temp_r4 = data_02159e70 + 0x5028;
    if (M2C_FIELD(data_02159e70, s32 *, 0x5028) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(temp_r4, s32 *, 0x1EC);
    if ((temp_r0 == 0) || (temp_r0 == 1) || (temp_r0 == 4)) {
        func_020f1098((s32) (temp_r4 + 0x1D8));
    }
    temp_r0_2 = M2C_FIELD(temp_r4, s32 *, 0x20C);
    if ((temp_r0_2 != 0) && (temp_r0_2 != 1) && (temp_r0_2 != 4)) {
        return;
    }
    func_020f1098((s32) (temp_r4 + 0x1F8));
}
