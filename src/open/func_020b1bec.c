#include "m2c.h"
s32 func_02067c34(s32);
s32 func_02067ca0(s32, s32);
s32 func_020b1bec(s32 *arg0, s32 arg1, s32 arg2, s32 *arg3, s32 *arg4) {
    s32 sum;
    s32 t;
    s32 d;

    sum = (s32) (((s64) arg0[0] * arg0[0] + 0x800) >> 12)
        + (s32) (((s64) arg0[2] * arg0[2] + 0x800) >> 12);
    if (sum > (s32) (((s64) arg2 * arg2 + 0x800) >> 12)) {
        t = func_02067c34(sum);
        d = func_02067ca0(arg2 - t, t);
        if (arg0[0] >= 0) {
            if (arg4[0] <= 0) {
                arg3[0] += (s32) (((s64) arg0[0] * d + 0x800) >> 12);
            }
        } else {
            if (arg4[0] >= 0) {
                arg3[0] += (s32) (((s64) arg0[0] * d + 0x800) >> 12);
            }
        }
        if (arg0[2] >= 0) {
            if (arg4[2] <= 0) {
                arg3[2] += (s32) (((s64) arg0[2] * d + 0x800) >> 12);
            }
        } else {
            if (arg4[2] >= 0) {
                arg3[2] += (s32) (((s64) arg0[2] * d + 0x800) >> 12);
            }
        }
        return 1;
    }
    return 0;
}
