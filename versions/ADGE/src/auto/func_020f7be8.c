/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02081174(M2C_UNK, M2C_UNK);
void func_020a7460(M2C_UNK);

extern s32 *data_0215a02c;

void func_020f7be8(s32 arg0) {
    s32 temp_r1;
    s32 var_r0;
    s32 var_r2;
    void *temp_r4;

    if (M2C_FIELD(arg0, s16 *, 0x88) == 0) {
        func_020a7460(arg0);
        return;
    }
    temp_r4 = M2C_FIELD(arg0, void **, 0x214);
    temp_r1 = M2C_FIELD(temp_r4, s32 *, 0x1C);
    if (temp_r1 == 0) {
        return;
    }
    if (data_0215a02c != NULL) {
        var_r2 = *data_0215a02c;
    } else {
        var_r2 = 0;
    }
    if (var_r2 == 0) {
        return;
    }
    if (data_0215a02c != NULL) {
        var_r0 = *data_0215a02c;
    } else {
        var_r0 = 0;
    }
    func_02081174(var_r0, temp_r1);
    M2C_FIELD(temp_r4, s32 *, 0x1C) = 0;
}
