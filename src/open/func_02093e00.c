#include "m2c.h"

#define FX_Mul(x, y) ((s32) (((s64) (x) * (y) + 0x800) >> 12))

s32 func_02067ca0(s32, s32);
s32 func_02093e00(s16 *buf, u32 count, s32 thresh, s32 limit) {
    s32 i = 0;
    s32 max = 0;
    s32 scale = 0x1000;
    s16 v;

    if (limit != 0x7FFF || limit == 0) {
        for (; i < count; i++) {
            v = buf[i];
            if (v < thresh && v > -thresh) {
                buf[i] = 0;
            }
            v = buf[i];
            v = (v < 0) ? -v : v;
            if (max < v) {
                max = v;
            }
        }
    } else {
        max = limit;
    }
    if (max < 0x7FF0) {
        scale = func_02067ca0(0x7FF0, max);
        if (scale > 0x1000) {
            for (i = 0; i < count; i++) {
                s32 s = buf[i] << 12;
                buf[i] = (s16) ((s32) (((s64) s * scale + 0x800) >> 12) >> 12);
            }
        }
    }
    return scale;
}
