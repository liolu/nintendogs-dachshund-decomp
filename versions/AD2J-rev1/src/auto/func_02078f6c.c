#include "m2c.h"

void *func_02078f6c(void *arg0, s32 arg1) {
    return arg0 + M2C_FIELD(arg0, u16 *, 0xA) + (arg1 * 0x10);
}
