#include "engine.h"
#include "m2c.h"

s32 func_02114aec(s32 arg0) {
    s32 var_r3;

    var_r3 = 0;
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC0) >= 0x2A30) {
        M2C_FIELD(arg0, s16 *, 0x2E)  = 2;
        M2C_FIELD(arg0, s16 *, 0x30)  = 0;
        M2C_FIELD(arg0, s16 *, 0x100) = 7;
        var_r3                        = 1;
    }
    return var_r3;
}
