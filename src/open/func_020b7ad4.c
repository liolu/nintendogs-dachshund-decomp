#include "m2c.h"

s32 func_020b7ad4(s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5) {
    s32 q = (s32) (((s64) arg5 * arg5 + 0x800) >> 12);
    s32 w = (s32) (((s64) q * arg5 + 0x800) >> 12);
    s32 a = w * 3 + q * -5 + 0x2000;
    s32 b = w * -3 + q * 4 + arg5;
    s32 c = q * 2 - w - arg5;
    s32 d = w - q;

    return (s32) (((s64) (c / 2) * arg1 + 0x800) >> 12)
         + (s32) (((s64) (a / 2) * arg2 + 0x800) >> 12)
         + (s32) (((s64) (b / 2) * arg3 + 0x800) >> 12)
         + (s32) (((s64) (d / 2) * arg4 + 0x800) >> 12);
}
