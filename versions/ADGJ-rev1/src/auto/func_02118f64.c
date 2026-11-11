#include "m2c.h"

s32 func_02118f64(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x34) == 0xF) && ((s32) M2C_FIELD(arg0, s32 *, 4) < 0xA000)) {
        return 1;
    }
    return 0;
}
