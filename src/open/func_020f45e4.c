#include "m2c.h"
s32 func_02067c34(s32 value);
s32 func_02067ca0(s32 num, s32 den);
static inline s32 FX_Mul(s32 x, s32 y) {
    return (s32) (((s64) x * y + 0x800) >> 12);
}
void func_020f45e4(s32 *out, s32 m[3][3]) {
    s32 a[3] = {1, 2, 0};
    s32 b[3];
    s32 trace;
    s32 q;
    s32 w;
    s32 idx;
    s32 i;
    s32 j;
    s32 t;

    trace = m[0][0] + m[1][1] + m[2][2];
    if (trace > 0) {
        q = func_02067c34(trace + 0x1000);
        out[0] = q >> 1;
        w = func_02067ca0(0x800, q);
        out[1] = FX_Mul(m[1][2] - m[2][1], w);
        out[2] = FX_Mul(m[2][0] - m[0][2], w);
        out[3] = FX_Mul(m[0][1] - m[1][0], w);
    } else {
        idx = 0;
        if (m[1][1] > m[0][0]) {
            idx = 1;
        }
        if (m[2][2] > m[idx][idx]) {
            idx = 2;
        }
        i = a[idx];
        j = a[i];
        q = func_02067c34(m[idx][idx] - (m[i][i] + m[j][j]) + 0x1000);
        b[idx] = q >> 1;
        w = q;
        if (q != 0) {
            w = func_02067ca0(0x800, q);
        }
        t = m[i][j] - m[j][i];
        out[0] = FX_Mul(t, w);
        b[i] = FX_Mul(m[i][idx] + m[idx][i], w);
        b[j] = FX_Mul(m[j][idx] + m[idx][j], w);
        out[1] = b[0];
        out[2] = b[1];
        out[3] = b[2];
    }
}
