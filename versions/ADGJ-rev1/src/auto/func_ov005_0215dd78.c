#include "m2c.h"

s32 func_ov005_0215dd78(u32 arg0, s32 arg1) {
    s32 r2;

    r2 = 0;
    switch (arg0) {
        case 1:
            r2 = 0x90000;
            break;
        case 2:
            r2 = 0xE1000;
            break;
        case 3:
            r2 = 0x64000;
            break;
        case 4:
            r2 = 0x24000;
            break;
        case 5:
            r2 = 0x24000;
            break;
    }
    if (arg1 != 0) {
        if (r2 < 0x40000) {
            return 0x40000;
        }
    }
    return r2;
}
