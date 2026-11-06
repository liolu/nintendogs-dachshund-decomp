#include "m2c.h"

extern void *data_02155060;

s32 func_020fa01c(void) {
    return M2C_FIELD(data_02155060, s32 *, 0x14) + 4;
}
