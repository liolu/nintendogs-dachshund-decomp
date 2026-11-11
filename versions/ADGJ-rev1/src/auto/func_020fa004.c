#include "m2c.h"

extern void *data_02155060;

s32 func_020fa004(void) {
    return M2C_FIELD(data_02155060, s32 *, 0x14) + 0x64;
}
