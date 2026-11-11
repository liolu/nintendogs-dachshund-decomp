#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;

void func_0209e134(s32 arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x1CC0) == 1) && (M2C_FIELD(data_02159e70, s32 *, 0xBC) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x938) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x938) = 5;
    }
    M2C_FIELD(arg0, s32 *, 0x92C) = 0;
}
