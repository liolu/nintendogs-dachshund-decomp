#include "engine.h"
#include "m2c.h"

s32 func_02037fb8(s32 arg0) {
    s32 temp_r1;
    s32 var_r0;

    temp_r1 = M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), s32 *, 0xC);
    if (temp_r1 < 0xCCD) {
        var_r0 = 0;
    } else if (temp_r1 <= 0x119A) {
        var_r0 = 1;
    } else {
        var_r0 = 2;
    }
    switch (var_r0) {                               /* irregular */
        case 0:
            return 0x16;
        default:
        case 1:
            return 0x15;
        case 2:
            return 0x14;
    }
}
