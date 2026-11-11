/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_020a3c0c(s32 arg0, s32 arg1) {
    s32 var_r3;

    var_r3 = 0;
    switch (arg1) {                                 /* irregular */
        case 2:
            M2C_FIELD(arg0, s32 *, 0xC) = 2;
            var_r3                      = 1;
            break;
        case 0:
            M2C_FIELD(arg0, s32 *, 0xC) = 0;
            var_r3                      = 1;
            break;
        case 1:
            var_r3                      = 1;
            M2C_FIELD(arg0, s32 *, 0xC) = 1;
            break;
    }
    if ((s32) M2C_FIELD(arg0, s32 *, 0xC) >= (s32) M2C_FIELD(arg0, s32 *, 4)) {
        var_r3                      = 0;
        M2C_FIELD(arg0, s32 *, 0xC) = -1;
    }
    return var_r3;
}
