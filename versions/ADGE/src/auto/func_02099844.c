#include "engine.h"
#include "m2c.h"

extern s32 data_02154f00;

s32 func_02099844(s32 arg0) {
    s32 temp_r2;

    temp_r2       = arg0 * 0x1F40;
    data_02154f00 = temp_r2;
    return temp_r2 + 0xC;
}
