#include "m2c.h"

extern void *data_02157b60;

s32 func_021211a8(void) {
    if (data_02157b60 == NULL) {
        return 0;
    }
    if ((s32) M2C_FIELD(data_02157b60, s16 *, 0x12C) > 0) {
        return 1;
    }
    return 0;
}
