/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02027644(s32, s32);                    /* extern */
s32 func_02028714(s32, M2C_UNK, M2C_UNK);           /* extern */
M2C_UNK func_0202f9a0(s32);                         /* extern */
s32 func_020354a8(s32, M2C_UNK);                    /* extern */
s32 func_0203560c(s32, M2C_UNK);                    /* extern */
M2C_UNK func_020358c8(s32);                         /* extern */
M2C_UNK func_02035fd8(s32);                         /* extern */
s32 func_02036258();                                /* extern */
M2C_UNK func_02037130(s32, s32);                    /* extern */
M2C_UNK func_0203910c(s32);                         /* extern */
M2C_UNK func_020523b4(s32);                         /* extern */

void func_0204a934(s32 arg0) {
    s32 temp_r0;
    s32 var_r0;

    temp_r0 = func_02036258();
    if (temp_r0 != 0) {
        func_02027644(temp_r0, arg0 + 0x26C);
        func_0203910c(arg0);
        func_02037130(arg0, 0x302);
    }
    func_020358c8(arg0);
    if (func_02028714(arg0, 0, 1) != 0) {
        var_r0 = 1;
    } else if (func_0203560c(arg0, 0) != 0) {
        var_r0 = 1;
    } else if (func_020354a8(arg0, 0) != 0) {
        var_r0 = 1;
    } else if (temp_r0 != 0) {
        var_r0 = 0;
    } else {
        func_0202f9a0(arg0);
        func_02035fd8(arg0);
        var_r0 = 1;
    }
    if (var_r0 != 0) {
        return;
    }
    func_020523b4(arg0);
}
