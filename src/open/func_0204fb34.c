#include "m2c.h"
s32 func_0204fb34(s32 arg0) {
    s32 sp0[7];
    s32 var_r0;
    s32 temp_r12;
    s32 temp_r2;
    s16 flag;
    s32 p;

    p = func_02036258(arg0);
    if (p == 0) {
        return 0;
    }
    if (func_0202dfe4(arg0) != 0) {
        func_02027658(arg0, sp0);
        temp_r12 = sp0[0] - M2C_FIELD(p, s32 *, 0x2A0);
        temp_r2 = sp0[2] - M2C_FIELD(p, s32 *, 0x2A8);
        var_r0 = (s32) (((s64) temp_r12 * M2C_FIELD(p, s32 *, 0x18C) + 0x800) >> 12) +
                 (s32) (((s64) temp_r2 * M2C_FIELD(p, s32 *, 0x194) + 0x800) >> 12);
        flag = (var_r0 <= 0);
        if (flag == 0) {
            func_0203e5e8(arg0, 0x2E5);
            return 1;
        }
        func_0203e5e8(arg0, 0x2E4);
        return 1;
    }
    switch (func_02027884(arg0, p)) {
        case 1:
        case 2:
            func_02027658(arg0, sp0 + 3);
            temp_r12 = sp0[3] - M2C_FIELD(p, s32 *, 0x2A0);
            temp_r2 = sp0[5] - M2C_FIELD(p, s32 *, 0x2A8);
            var_r0 = (s32) (((s64) temp_r12 * M2C_FIELD(p, s32 *, 0x18C) + 0x800) >> 12) +
                     (s32) (((s64) temp_r2 * M2C_FIELD(p, s32 *, 0x194) + 0x800) >> 12);
            flag = (var_r0 <= 0);
            if (flag == 0) {
                func_0203e5e8(arg0, 0x2E5);
                return 1;
            }
            func_0203e5e8(arg0, 0x2E4);
            return 1;
        case 0:
            return func_0204fd10(arg0, p);
        default:
            return 0;
    }
}
