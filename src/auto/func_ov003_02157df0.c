#include "m2c.h"

extern void *data_ov003_0216be20;

s32 func_ov003_02157df0(void) {
    if ((s32) M2C_FIELD(M2C_FIELD(data_ov003_0216be20, void **, 0x36C4), s8 *, 0x2318) < 0) {
        return 1;
    }
    return 0;
}
