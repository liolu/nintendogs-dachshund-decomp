#include "m2c.h"

s32 func_02028114(s32);
s32 func_0202517c(s32, s32, s32);
s32 func_02035424(s32, s32);
void func_02022b6c(s32);
s32 func_0203535c(s32);
void func_0202fa5c(s32);

void func_0200e008(s32 arg0) {
    s32 temp_r0;
    s32 var_r1;

    temp_r0 = func_02028114(arg0);
    var_r1 = (s32) (((s64) temp_r0 * -0x28F + 0x800) >> 12);
    if (func_0202517c(arg0, 5, var_r1) != 0) {
        if (func_02035424(arg0, 1) != 0) {
            temp_r0 = func_02028114(arg0);
            var_r1 = (s32) (((s64) temp_r0 * 0x5DF + 0x800) >> 12);
            M2C_FIELD(arg0, s32 *, 0x260) = (s32) (((s64) M2C_FIELD(arg0, s32 *, 0x198) * var_r1 + 0x800) >> 12);
            M2C_FIELD(arg0, s32 *, 0x264) = (s32) (((s64) M2C_FIELD(arg0, s32 *, 0x19C) * var_r1 + 0x800) >> 12);
            M2C_FIELD(arg0, s32 *, 0x268) = (s32) (((s64) M2C_FIELD(arg0, s32 *, 0x1A0) * var_r1 + 0x800) >> 12);
        } else {
            temp_r0 = func_02028114(arg0);
            var_r1 = (s32) (((s64) temp_r0 * -0x177 + 0x800) >> 12);
            M2C_FIELD(arg0, s32 *, 0x260) = (s32) (((s64) M2C_FIELD(arg0, s32 *, 0x198) * var_r1 + 0x800) >> 12);
            M2C_FIELD(arg0, s32 *, 0x264) = (s32) (((s64) M2C_FIELD(arg0, s32 *, 0x19C) * var_r1 + 0x800) >> 12);
            M2C_FIELD(arg0, s32 *, 0x268) = (s32) (((s64) M2C_FIELD(arg0, s32 *, 0x1A0) * var_r1 + 0x800) >> 12);
        }
    }
    func_02022b6c(arg0);
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0202fa5c(arg0);
}
