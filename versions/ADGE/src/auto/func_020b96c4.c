#include "m2c.h"

s32 func_020b96c4(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x34) == 0x12) {
        return 1;
    }
    return 0;
}
