#include "m2c.h"

extern void *data_ov004_0216e3c0;

s32 func_ov004_0215ab08(void) {
    if (M2C_FIELD(data_ov004_0216e3c0, u8 *, 0x33CD) != 0) {
        return M2C_FIELD(data_ov004_0216e3c0, s32 *, 0x36C8);
    }
    return -1;
}
