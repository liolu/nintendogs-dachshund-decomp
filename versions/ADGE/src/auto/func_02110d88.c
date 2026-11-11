#include "engine.h"
#include "m2c.h"

s32 func_02110d88(s32 arg0) {
    s32 var_r1;

    var_r1 = 0xFFFF;
    switch (arg0) {
        default:
            break;
        case 0:
            var_r1 = 0x12;
            break;
        case 1:
            var_r1 = 0x12;
            break;
        case 2:
            var_r1 = 0x13;
            break;
        case 3:
            var_r1 = 0x14;
            break;
        case 4:
            var_r1 = 0x15;
            break;
        case 5:
            var_r1 = 0x16;
            break;
    }
    return var_r1;
}
