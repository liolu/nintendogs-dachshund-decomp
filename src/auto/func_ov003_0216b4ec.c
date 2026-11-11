#include "m2c.h"

s32 func_ov003_0216b4ec(void *arg0) {
    if (M2C_FIELD(arg0, u8 *, 0xA4) != 0) {
        return 1;
    }
    return 0;
}
