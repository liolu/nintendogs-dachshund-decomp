#include "m2c.h"

s32 func_02035094(void *arg0) {
    if (M2C_FIELD(arg0, s8 *, 0xA4) == 5) {
        return 1;
    }
    return 0;
}
