#include "m2c.h"
s32 func_020bad18(s32 *arg0) {
    s8 *base = (s8 *) arg0[0] + 0x20;

    arg0[1] = arg0[1] - 1;
    if (arg0[1] < 0) {
        if (arg0[2] == 0) {
            arg0[2] = 0;
            arg0[1] = 0;
            return 0;
        }
        arg0[2] = arg0[2] - 1;
        arg0[1] = *(s32 *) (base + arg0[2] * 0x2C + 0x28) - 1;
    }
    return 1;
}
