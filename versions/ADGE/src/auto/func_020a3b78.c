/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_020a3b78(s32 arg0, s32 arg1) {
    s32 var_r3;

    var_r3 = 0;
    switch (arg1) {
        default:
            break;
        case 3:
            M2C_FIELD(arg0, s32 *, 0x10) = 0;
            var_r3                       = 1;
            break;
        case 4:
            var_r3                       = 1;
            M2C_FIELD(arg0, s32 *, 0x10) = 1;
            break;
        case 5:
            M2C_FIELD(arg0, s32 *, 0x10) = 2;
            var_r3                       = 1;
            break;
        case 6:
            M2C_FIELD(arg0, s32 *, 0x10) = 3;
            var_r3                       = 1;
            break;
        case 7:
            M2C_FIELD(arg0, s32 *, 0x10) = 4;
            var_r3                       = 1;
            break;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0x10) >= (s32) M2C_FIELD(arg0, s32 *, 8)) {
        var_r3                       = 0;
        M2C_FIELD(arg0, s32 *, 0x10) = -1;
    }
    return var_r3;
}
