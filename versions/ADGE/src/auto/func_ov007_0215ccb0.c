#include "m2c.h"

extern void *data_ov007_0215e7fc;

s32 func_ov007_0215ccb0(void) {
    if (data_ov007_0215e7fc == NULL) {
        return 0;
    }
    if ((s32) M2C_FIELD(data_ov007_0215e7fc, s16 *, 0x12C) > 0) {
        return 1;
    }
    return 0;
}
