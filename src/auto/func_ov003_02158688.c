#include "m2c.h"

extern void *data_ov003_0216be20;

s32 func_ov003_02158688(void) {
    if (M2C_FIELD(data_ov003_0216be20, u8 *, 0x33CD) != 0) {
        return M2C_FIELD(data_ov003_0216be20, s32 *, 0x36C8);
    }
    return -1;
}
