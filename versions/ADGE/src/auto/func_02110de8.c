#include "engine.h"
#include "m2c.h"

s32 func_02110de8(s32 arg0) {
    s32 var_r1;

    var_r1 = 0xFFFF;
    switch (arg0) {
        default:
            break;
        case 0:
            var_r1 = 0xD;
            break;
        case 1:
            var_r1 = 0xD;
            break;
        case 2:
            var_r1 = 0xE;
            break;
        case 3:
            var_r1 = 0xF;
            break;
        case 4:
            var_r1 = 0x10;
            break;
        case 5:
            var_r1 = 0x11;
            break;
    }
    return var_r1;
}
