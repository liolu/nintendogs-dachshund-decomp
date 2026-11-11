#include "m2c.h"

s32 func_ov004_0216da70(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xA4) != 0) {
        return 1;
    }
    return 0;
}
