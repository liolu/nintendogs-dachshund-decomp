#include "m2c.h"

extern void *data_0214b484;

s16 func_02022000(s32 arg0) {
    if (arg0 == M2C_FIELD(data_0214b484, s8 *, 0xF)) {
        return M2C_FIELD(data_0214b484, s16 *, 0x20);
    }
    return -1;
}
