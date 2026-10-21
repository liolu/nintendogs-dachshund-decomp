#include "m2c.h"
s32 func_02085ecc(u8 *arg0, u16 *arg1, s32 arg2) {
    u16 var = arg1[0];
    s32 val = arg0[0x17];
    if (var == 0) {
        return val;
    }
    arg2 += val;
    do {
        if (var == 0xa) {
            val += arg2;
        }
        var = *++arg1;
    } while (var != 0);
    return val;
}
