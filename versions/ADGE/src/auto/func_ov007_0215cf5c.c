#include "m2c.h"

extern void *data_ov007_0215e7fc;

void func_ov007_0215cf5c(s32 arg0, s32 arg1) {
    M2C_FIELD(data_ov007_0215e7fc, s32 *, 0x118) = arg0;
    M2C_FIELD(data_ov007_0215e7fc, s32 *, 0x11C) = arg1;
}
