#include "m2c.h"
s32 func_02009bc0(s32 *arg0, s32 *arg1) {
    s32 dx = arg0[0] - arg1[0];
    s32 dz = arg0[2] - arg1[2];
    s32 x = (s32) (((s64) dx * dx + 0x800) >> 12);
    s32 z = (s32) (((s64) dz * dz + 0x800) >> 12);

    return x + z;
}
