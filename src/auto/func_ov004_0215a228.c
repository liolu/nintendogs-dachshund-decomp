#include "m2c.h"

s32 func_ov004_0215a228(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0xE8) == 0x43F) {
        return 1;
    }
    return 0;
}
