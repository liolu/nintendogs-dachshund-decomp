#include "m2c.h"

extern void *data_ov004_0216e3c0;

s32 func_ov004_0215a270(void) {
    if ((s32) M2C_FIELD(M2C_FIELD(data_ov004_0216e3c0, void **, 0x36C4), s8 *, 0x2318) < 0) {
        return 1;
    }
    return 0;
}
