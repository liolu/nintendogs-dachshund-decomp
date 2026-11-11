#include "m2c.h"

u32 func_ov005_021629c0(u32 arg0, s32 arg1) {
    switch (arg0) {
        case 0:
            return 0;
        case 1:
            return 1;
        case 2:
            return 2;
        case 3:
            return (arg1 != 0) ? 3 : 4;
        case 4:
            return (arg1 != 0) ? 5 : 6;
        case 5:
            return 7;
        default:
            return arg0;
    }
}
