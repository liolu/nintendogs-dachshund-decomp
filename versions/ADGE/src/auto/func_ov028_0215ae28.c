#include "m2c.h"

extern void *data_ov028_0215bfb4;

void func_ov028_0215ae28(s32 arg0, s32 arg1) {
    M2C_FIELD(data_ov028_0215bfb4, s32 *, 0x114) = arg0;
    M2C_FIELD(data_ov028_0215bfb4, s32 *, 0x118) = arg1;
}
