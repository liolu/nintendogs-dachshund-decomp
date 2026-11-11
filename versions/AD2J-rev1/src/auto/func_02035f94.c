#include "m2c.h"

s32 func_02035f94(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0x146) == 0xA) {
        return 1;
    }
    return 0;
}
