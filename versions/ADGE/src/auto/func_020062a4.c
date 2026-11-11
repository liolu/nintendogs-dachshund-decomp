/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0205e15c(s32, s32);                        /* extern */
extern M2C_UNK data_0214d5e0;

void func_020062a4(s32 arg0, s32 arg1, s32 arg2, u32 arg3) {
    s32 temp_r4;
    u32 temp_r5;
    u32 var_r3;

    var_r3  = arg3;
    temp_r4 = M2C_FIELD(&data_0214d5e0, s32 *, 0x14);
    switch (arg1) {                                 /* irregular */
        case 2:
            var_r3 = M2C_FIELD(&data_0214d5e0, s32 *, 0xC) - (arg0 * temp_r4);
            break;
        case 0:
            var_r3 = (arg0 * temp_r4) + M2C_FIELD(&data_0214d5e0, u32 *, 0);
            break;
        case 1:
            var_r3 = (arg0 * temp_r4) + M2C_FIELD(&data_0214d5e0, u32 *, 8);
            break;
    }
    temp_r5 = M2C_FIELD(&data_0214d5e0, u32 *, 0);
    if (var_r3 < temp_r5) {
        var_r3 = temp_r5;
    }
    if ((u32) M2C_FIELD(&data_0214d5e0, u32 *, 4) < (u32) (var_r3 + temp_r4)) {
        var_r3 = (temp_r4 * func_0205e15c(M2C_FIELD(&data_0214d5e0, u32 *, 4) - temp_r5, temp_r4)) + temp_r5;
    }
    M2C_FIELD(&data_0214d5e0, u32 *, 8) = var_r3;
}
