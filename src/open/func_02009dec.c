#define M2C_SELF_func_02009dec
#include "m2c.h"

s32 func_02009dec(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 x;
    s32 z;
    s64 p;
    s64 q;

    x = (s32) (((s64) arg0[0] * arg1[0] + 0x800) >> 12);
    z = (s32) (((s64) arg0[2] * arg1[2] + 0x800) >> 12);
    if (x + z > 0) {
        return 0;
    }
    p = (s64) arg0[0] * (s64) arg2[0];
    q = (s64) arg0[2] * (s64) arg2[2];
    return ((s32) ((p + 0x800) >> 12) + (s32) ((q + 0x800) >> 12) > 0) ? 1 : 2;
}
