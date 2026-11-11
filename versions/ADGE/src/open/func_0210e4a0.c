#include "m2c.h"
extern void *data_0215a044;
M2C_UNK func_020449ac(s32);
s32 func_0210e4a0(void) {
    s32 result = -1;

    switch (M2C_FIELD(data_0215a044, s16 *, 0)) {
        case 0:
            break;
        case 1:
        case 2:
            result = 1;
            break;
        case 3:
        case 4:
            result = 0x19;
            break;
        case 5:
            result = 0x18;
            break;
    }
    return result;
}
