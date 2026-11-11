#include "m2c.h"

extern s32 data_02155988;

s32 func_020f9fd0(s32 arg0) {
    s32 temp_r2;

    temp_r2       = arg0 * 0x1F40;
    data_02155988 = temp_r2;
    return temp_r2 + 0xC;
}
