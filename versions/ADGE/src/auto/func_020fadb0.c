/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020034f0(s32, M2C_UNK);                    /* extern */
void *func_02003850(s32, M2C_UNK, M2C_UNK);         /* extern */
s32 func_02081974(M2C_UNK *, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32); /* extern */
extern void *data_0215a02c;
extern u16 *data_0215a04c;
extern M2C_UNK func_020faf2c;

void func_020fadb0(s32 arg0) {
    s32 var_r4;
    u16 temp_r0_2;
    u16 temp_r1;
    void *temp_r0;

    temp_r1 = *data_0215a04c;
    if ((temp_r1 == 8) || (temp_r1 == 0x10)) {
        var_r4 = func_020034f0(arg0, 0x4B000);
    } else {
        var_r4 = func_020034f0(arg0, 0xB000);
    }
    temp_r0                            = func_02003850(var_r4, 0x10, 4);
    data_0215a02c                      = temp_r0;
    M2C_FIELD(temp_r0, s32 *, 4)       = arg0;
    M2C_FIELD(data_0215a02c, s32 *, 8) = var_r4;
    temp_r0_2                          = *data_0215a04c;
    if ((temp_r0_2 == 8) || (temp_r0_2 == 0x10)) {
        M2C_FIELD(data_0215a02c, s32 *, 0) = func_02081974(&func_020faf2c, 0x40, 0x320, 0xD, 0xE, 0x3D);
        return;
    }
    M2C_FIELD(data_0215a02c, s32 *, 0) = func_02081974(&func_020faf2c, 0x14, 0x3C, 0x1E, 0x1F, 0x3D);
}
