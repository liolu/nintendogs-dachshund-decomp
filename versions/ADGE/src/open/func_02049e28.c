#include "m2c.h"
void func_02049e28(s32 arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s16 temp_r1;
    s32 var;

    temp_r4 = (s32) func_02036258(arg0);
    if (temp_r4 != 0) {
        func_02039128(arg0);
        func_02027644((void *) temp_r4, arg0 + 0x278);
        func_02037130(arg0, 0x302);
    }
    temp_r1 = *(s16 *) (arg0 + 0x152);
    if (temp_r1 == 0x167) {
        temp_r0 = func_02028114(arg0);
        func_0202507c(arg0, 9, 0x11, (s32) (((s64) temp_r0 * -630 + 0x800) >> 12));
        if (func_0203535c(arg0) != 0) {
            func_0203e5ac((void *) arg0, 0, 0x111);
            func_0203e5ac((void *) arg0, 3, func_02034e44(arg0));
            func_02026b9c(arg0);
        }
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
        if ((M2C_FIELD(temp_r4, s16 *, 0xEA) >= 0x28F) && (M2C_FIELD(temp_r4, s16 *, 0xEA) <= 0x290)) {
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
