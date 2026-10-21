#include "m2c.h"
void func_0204ab90(s32 arg0) {
    s32 temp_r4;
    s16 v;
    s16 w;
    s32 var;

    temp_r4 = func_02036258(arg0);
    func_0202507c(arg0, 0x10, 0x26, (s32) (((s64) func_02028114(arg0) * 0x117 + 0x800) >> 12));
    if (temp_r4 != 0) {
        func_02039128(arg0);
        func_02027644(temp_r4, arg0 + 0x278);
        func_02037130(arg0, 0x300);
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
        v = M2C_FIELD(temp_r4, s16 *, 0xEA);
        var = ((v >= 0x282) && (v <= 0x284));
        if (var != 0) {
            var = 1;
            goto test;
        }
        var = ((v >= 0x259) && (v <= 0x25F));
        if (var != 0) {
            w = M2C_FIELD(temp_r4, s16 *, 0xEE);
            var = ((w >= 0x282) && (w <= 0x284));
            if (var != 0) {
                var = 1;
                goto test;
            }
        }
        var = 0;
    test:
        if (var != 0) {
            return;
        }
    }
    func_02035fd8(arg0);
    func_0202f9a0(arg0);
}
