/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02027c48(M2C_UNK);

void func_020f391c(s32 arg0) {
    s16 var_r0;
    u32 temp_r0;

    temp_r0 = (u32) func_02027c48(M2C_FIELD(arg0, s32 *, 4));
    if (temp_r0 < 0x12CU) {
        var_r0 = 0;
    } else if (temp_r0 < 0x3E8U) {
        var_r0 = 1;
    } else if (temp_r0 < 0x7D0U) {
        var_r0 = 2;
    } else if (temp_r0 < 0x1388U) {
        var_r0 = 3;
    } else if (temp_r0 < 0x2710U) {
        var_r0 = 4;
    } else {
        var_r0 = 5;
    }
    M2C_FIELD(arg0, s16 *, 2) = var_r0;
}
