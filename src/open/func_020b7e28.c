#include "m2c.h"
s32 func_020b7e28(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4) {
    s32 x2 = (s32) (((s64) arg4 * arg4 + 0x800) >> 12);
    s32 x3 = (s32) (((s64) x2 * arg4 + 0x800) >> 12);
    s32 w0 = (-3 * (arg4 - x2) + 0x1000 - x3) / 6;
    s32 w1 = x3 / 2 - x2 + 0xAAA;
    s32 w2 = -x3 / 2 + x2 / 2 + arg4 / 2 + 0x2AA;
    s32 w3 = x3 / 6;
    return (s32) (((s64) w0 * arg0 + 0x800) >> 12)
         + (s32) (((s64) w1 * arg1 + 0x800) >> 12)
         + (s32) (((s64) w2 * arg2 + 0x800) >> 12)
         + (s32) (((s64) w3 * arg3 + 0x800) >> 12);
}
