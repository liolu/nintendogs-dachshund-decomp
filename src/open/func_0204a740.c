#include "m2c.h"

void func_0204a740(s32 arg0) {
    s32 temp_r4;
    s32 sp0[3];
    s32 var;

    temp_r4 = func_02036258(arg0);
    if (temp_r4 != 0) {
        func_02027658(temp_r4, sp0);
        func_0206823c(arg0 + 0x2A0, sp0, arg0 + 0x26C);
        func_02027644((void *) temp_r4, arg0 + 0x3B4);
        func_0203910c(arg0);
        func_02037130(arg0, 0x302);
    }
    func_020358c8(arg0);
    if (func_02028714(arg0, 0, 1) != 0) {
        return;
    }
    if (func_0203560c(arg0, 0) != 0) {
        return;
    }
    if (func_020354a8(arg0, 0) != 0) {
        return;
    }
    if (temp_r4 != 0) {
        if ((M2C_FIELD(temp_r4, s16 *, 0xEA) >= 0x289) && (M2C_FIELD(temp_r4, s16 *, 0xEA) <= 0x28A)) {
            var = 1;
        } else {
            var = 0;
        }
        if (var != 0) {
            return;
        }
    }
    func_02035fd8(arg0);
    func_0202f9a0(arg0);
}
