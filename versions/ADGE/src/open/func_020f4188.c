#include "m2c.h"

s32 func_02067ca0(s32, s32);
s32 func_02067c34(s32);

#define FX_Mul(x, y) ((s32) (((s64) (x) * (y) + 0x800) >> 12))

void func_020f4188(s32 *a, s32 *b, s32 *out, s32 t) {
    s32 x0;
    s32 x1;
    s32 x2;
    s32 x3;

    out[0] = FX_Mul(0x1000 - t, a[0]) + FX_Mul(t, b[0]);
    out[1] = FX_Mul(0x1000 - t, a[1]) + FX_Mul(t, b[1]);
    out[2] = FX_Mul(0x1000 - t, a[2]) + FX_Mul(t, b[2]);
    out[3] = FX_Mul(0x1000 - t, a[3]) + FX_Mul(t, b[3]);

    x0 = out[0];
    x1 = out[1];
    x2 = out[2];
    x3 = out[3];

    t = FX_Mul(x0, x0) + FX_Mul(x1, x1) + FX_Mul(x2, x2) + FX_Mul(x3, x3);
    t = func_02067c34(func_02067ca0(0x1000, t));

    out[0] = FX_Mul(out[0], t);
    out[1] = FX_Mul(out[1], t);
    out[2] = FX_Mul(out[2], t);
    out[3] = FX_Mul(out[3], t);
}
