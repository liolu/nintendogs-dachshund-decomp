#include "m2c.h"
s32 func_02034cf8(M2C_UNK arg0) {
    s16 temp;
    s16 var_r3;
    s16 var_r2;
    s32 var_r1;
    s32 var_r0;

    temp = M2C_FIELD(arg0, s16 *, 0xEA);
    if (temp != 0x3D9) {
        goto ret0;
    }
    var_r3 = M2C_FIELD(arg0, s16 *, 0x152);
    var_r2 = M2C_FIELD(arg0, s16 *, 0x162);
    var_r1 = 0;
    if (var_r2 == var_r3) {
        if (M2C_FIELD(arg0, s16 *, 0x14E) == 0x12) {
            var_r1 = 1;
        }
    }
    if (var_r1 != 0) {
        goto ret1;
    }
    var_r1 = 0;
    if (var_r2 == var_r3) {
        if (M2C_FIELD(arg0, s16 *, 0x14E) == 0x21) {
            var_r1 = 1;
        }
    }
    if (var_r1 != 0) {
        goto ret1;
    }
    var_r0 = 0;
    if (var_r2 == var_r3) {
        if (M2C_FIELD(arg0, s16 *, 0x14E) == 0x2E) {
            var_r0 = 1;
        }
    }
    if (var_r0 == 0) {
        goto ret0;
    }
ret1:
    return 1;
ret0:
    return 0;
}
