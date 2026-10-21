#include "m2c.h"
extern s32 data_0213ea64;
void func_02068270(s32 arg0, s32 arg1, s32 arg2);
void func_020ac82c(s32 arg0, s32 arg1) {
    s32 temp_r3;
    s32 temp_r2;
    s32 ptr;

    ptr = M2C_FIELD(arg0, s32 *, 0x214);
    func_02068270(arg0 + 0xBC, arg1, arg0 + 0xBC);
    temp_r3 = M2C_FIELD(arg0, s32 *, 0xB0);
    M2C_FIELD(arg0, s32 *, 0xB0) = temp_r3 - (s32) (((s64) temp_r3 * data_0213ea64 + 0x800) >> 12);
    temp_r2 = M2C_FIELD(arg0, s32 *, 0xB8);
    M2C_FIELD(arg0, s32 *, 0xB8) = temp_r2 - (s32) (((s64) temp_r2 * data_0213ea64 + 0x800) >> 12);
    M2C_FIELD(arg0, s32 *, 0xB4) = M2C_FIELD(arg0, s32 *, 0xB4) + M2C_FIELD(ptr, s32 *, 0xC) / 2;
}
