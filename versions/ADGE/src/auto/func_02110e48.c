#include "engine.h"
#include "m2c.h"

s32 func_02110e48(s32 arg0) {
    s32 var_r1;

    var_r1 = 0xFFFF;
    switch (arg0) {
        default:
            break;
        case 0:
            var_r1 = 8;
            break;
        case 1:
            var_r1 = 8;
            break;
        case 2:
            var_r1 = 9;
            break;
        case 3:
            var_r1 = 0xA;
            break;
        case 4:
            var_r1 = 0xB;
            break;
        case 5:
            var_r1 = 0xC;
            break;
    }
    return var_r1;
}
