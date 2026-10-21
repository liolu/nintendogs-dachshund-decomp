#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

s32 func_020b1f88(void *arg0, s32 *arg1, s32 arg2, s32 *arg3) {
    Vec v;
    Vec b;
    Vec a;
    s32 f;
    s32 r;
    s32 dy;
    s32 dx;
    s32 dz;
    s32 sum;
    s32 t;
    s32 d;

    func_020275e0(arg0, &a);
    func_02027608(arg0, &b);
    func_02068270(&a, &b, &v);
    v.x >>= 1;
    v.y >>= 1;
    v.z >>= 1;
    f = func_02028120(arg0);
    r = arg2 + (f * 2 + (func_02028120(arg0) >> 2));
    dy = arg1[1] - v.y;
    if (dy < r && dy > -r) {
        dx = arg1[0] - v.x;
        if (dx < r && dx > -r) {
            dz = arg1[2] - v.z;
            if (dz < r && dz > -r) {
                sum = (s32) (((s64) dx * dx + 0x800) >> 12)
                    + (s32) (((s64) dy * dy + 0x800) >> 12)
                    + (s32) (((s64) dz * dz + 0x800) >> 12);
                if (sum != 0 && sum < (s32) (((s64) r * r + 0x800) >> 12)) {
                    t = func_02067c34(sum);
                    d = func_02067ca0(r - t, t);
                    arg3[0] += (s32) (((s64) dx * d + 0x800) >> 12);
                    arg3[1] += (s32) (((s64) dy * d + 0x800) >> 12);
                    arg3[2] += (s32) (((s64) dz * d + 0x800) >> 12);
                    return 1;
                }
            }
        }
    }
    return 0;
}
