/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b8dbc(M2C_UNK, u16, s32, s32);      /* extern */

void func_020a3788(M2C_UNK arg0, void *arg1, s32 arg2, s32 arg3) {
    s32 temp_r6;
    u16 var_r5;
    void *var_r8;

    var_r8 = arg1;
    var_r5 = M2C_FIELD(var_r8, u16 *, 4);
    if (var_r5 == 0xFFFF) {
        return;
    }
    temp_r6 = arg3 - arg2;
    do {
        func_020b8dbc(arg0, var_r5, (s32) (M2C_FIELD(var_r8, s32 *, 8) * temp_r6) / arg3,
                      (s32) (M2C_FIELD(var_r8, s32 *, 0xC) * temp_r6) / arg3);
        var_r8 += 0x10;
        var_r5 = M2C_FIELD(var_r8, u16 *, 4);
    } while (var_r5 != 0xFFFF);
}
