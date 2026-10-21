#include "m2c.h"
s32 func_0211a19c(void *arg0) {
    s32 result = 0;

    switch (M2C_FIELD(M2C_FIELD(arg0, void **, 0x1c), s16 *, 4)) {
        case 0:
            return 0;
        case 1:
            result = 3;
            break;
        case 2:
            result = 4;
            break;
        case 3:
            result = 2;
            break;
        case 4:
            result = 6;
            break;
        case 5:
            result = 5;
            break;
        case 6:
            return 0;
        case 7:
            result = 1;
            break;
    }
    return result;
}
