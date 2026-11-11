#include "m2c.h"

u16 func_020894dc(void *arg0, s32 arg1) {
    return M2C_FIELD(((arg1 * 6) + (s32) (arg0 + M2C_FIELD(arg0, s32 *, 8))), u16 *, 4);
}
