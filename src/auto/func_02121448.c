#include "m2c.h"

extern void *data_02157b60;

void func_02121448(s32 arg0, s32 arg1) {
    M2C_FIELD(data_02157b60, s32 *, 0x118) = arg0;
    M2C_FIELD(data_02157b60, s32 *, 0x11C) = arg1;
}
