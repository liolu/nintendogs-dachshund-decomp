#include "m2c.h"
s32 func_02009f28(s32 *arg0, s32 *arg1) {
    s64 x;
    s64 z;

    x = (s64) arg0[0] * arg1[0];
    z = (s64) arg0[2] * arg1[2];
    return ((s32) ((x + 0x800) >> 12) + (s32) ((z + 0x800) >> 12)) > 0;
}
