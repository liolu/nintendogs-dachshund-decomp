#include "m2c.h"

extern void *data_02156080;

void func_02107488(s32 arg0, s32 arg1) {
    M2C_FIELD(data_02156080, s32 *, 0x30) = arg0;
    M2C_FIELD(data_02156080, s32 *, 0x34) = arg1;
}
