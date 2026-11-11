#include "m2c.h"

s32 func_020bac9c(void *arg0) {
    if ((s32) M2C_FIELD(arg0, s32 *, 8) >= (s32) (*M2C_FIELD(arg0, s32 **, 0) - 1)) {
        return 1;
    }
    return 0;
}
