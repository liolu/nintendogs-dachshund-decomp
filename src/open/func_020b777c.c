#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

void func_0206823c(const Vec *a, const Vec *b, Vec *diff);
s32 func_02068038(const Vec *v);
s32 func_02067c34(s32 value);
u16 func_02068480(s32 y, s32 x);

void func_020b777c(const Vec *a, const Vec *b, s32 *len, u16 *pitch, u16 *yaw) {
    Vec diff;
    s32 tx;
    s32 tz;
    s32 dist;

    func_0206823c(a, b, &diff);
    *len = func_02068038(&diff);
    tx = ((s64) diff.x * diff.x + 0x800) >> 12;
    tz = ((s64) diff.z * diff.z + 0x800) >> 12;
    dist = func_02067c34(tx + tz);
    *pitch = func_02068480(diff.y, dist);
    *yaw = func_02068480(diff.x, diff.z);
}
