#include "m2c.h"

s32 func_020c6344(void *arg0, s32 arg1) {
    return M2C_FIELD(arg0, s32 *, 0x18) + (arg1 * 8);
}
