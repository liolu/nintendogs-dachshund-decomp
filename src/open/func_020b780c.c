#include "m2c.h"
extern s16 data_02124e68[];
void func_020b780c(s32 *arg0, s32 *arg1, s32 arg2, s32 arg3, u16 arg4) {
    s32 i2;
    s32 i3;
    s32 j2;
    s32 j3;
    s32 y;

    i2 = (arg3 >> 4) * 2;
    i3 = i2 + 1;
    j2 = (arg4 >> 4) * 2;
    j3 = j2 + 1;
    y = (s32) (((s64) arg2 * data_02124e68[i3] + 0x800) >> 12);
    arg0[0] = arg1[0] + (s32) (((s64) y * data_02124e68[j2] + 0x800) >> 12);
    arg0[1] = arg1[1] + (s32) (((s64) arg2 * data_02124e68[i2] + 0x800) >> 12);
    arg0[2] = arg1[2] + (s32) (((s64) y * data_02124e68[j3] + 0x800) >> 12);
}
