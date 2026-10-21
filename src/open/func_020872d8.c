#include "m2c.h"
s32 func_02080c28();
void func_02080c3c(s32);
s32 func_02087ad8(s32);
void func_02087a3c(s32);
M2C_UNK func_02080c28(void);
void func_02080c3c(M2C_UNK);
s32 func_020872d8(s32 arg0) {
    s32 var_r0;
    s32 var_r7;
    s32 var_r6;
    s32 temp_r5;

    var_r6 = 0;
    temp_r5 = func_02080c28();
    if (M2C_FIELD(arg0, s32 *, 0x10) & 8) {
        var_r0 = 1;
    } else {
        var_r0 = var_r6;
    }
    if (var_r0 == 0) {
        var_r7 = 1;
    } else {
        var_r7 = 0;
    }
    if (var_r7 == 0) {
        M2C_FIELD(arg0, s32 *, 0x10) = M2C_FIELD(arg0, s32 *, 0x10) & ~8;
        var_r6 = func_02087ad8(arg0);
    }
    func_02080c3c(temp_r5);
    if (var_r6 != 0) {
        func_02087a3c(var_r6);
    }
    return var_r7;
}
