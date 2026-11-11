#include "m2c.h"

s32 func_020b96d8(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x34) == 0x11) && ((s32) M2C_FIELD(arg0, s32 *, 4) < 0xA000)) {
        return 1;
    }
    return 0;
}
