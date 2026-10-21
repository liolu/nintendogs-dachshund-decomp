#include "m2c.h"
s32 func_02034ca4(s32 arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0xEA)) {
        case 0x3D6:
            return 0;
        case 0x3D7:
            return 1;
        case 0x3D8:
            return 2;
        case 0x3D9:
            return 3;
    }
    return -1;
}
