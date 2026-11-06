/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02035ae4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);

extern void *data_0214b484;

void func_02035710(s32 arg0) {
    s32 sp0;
    s16 temp_r0;
    s16 temp_r4;
    s32 var_r0;

    if (M2C_FIELD(arg0, s8 *, 0x88) != M2C_FIELD(data_0214b484, u16 *, 0x38)) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, s16 *, 0xF0);
    if (((s32) temp_r0 >= 0xA) && ((s32) temp_r0 < 0x6F)) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 != 0) {
        return;
    }
    sp0                           = 0;
    temp_r4                       = M2C_FIELD(arg0, s16 *, 0x146);
    M2C_FIELD(arg0, s16 *, 0x146) = -1;
    if (M2C_FIELD(arg0, s8 *, 0xA4) != 5) {
        func_02035ae4(arg0, (s32) &sp0, 1, 0);
    }
    if (M2C_FIELD(arg0, s16 *, 0x146) == -1) {
        M2C_FIELD(arg0, s16 *, 0x146) = temp_r4;
    }
}
