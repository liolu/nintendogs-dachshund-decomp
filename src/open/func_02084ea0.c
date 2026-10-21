#include "m2c.h"

#define FX_Mul(x, y) ((s32) (((s64) (x) * (y) + 0x800) >> 12))

typedef struct Vecx16 {
    s16 x;
    s16 y;
    s16 z;
} VecFx16;

void func_020680a0(struct Vecx16 *a, struct Vecx16 *b, struct Vecx16 *dst);
void func_02067da4(struct Vecx16 *src, struct Vecx16 *dst);

void func_02084ea0(s32 *out, s32 *v, u8 *m) {
    struct Vecx16 n;

    func_020680a0((struct Vecx16 *) (m + 0x60), (struct Vecx16 *) (m + 0x66), &n);
    func_02067da4(&n, &n);

    out[0] = FX_Mul(v[2], n.x) + (FX_Mul(v[0], *(s16 *) (m + 0x60)) + FX_Mul(v[1], *(s16 *) (m + 0x66)));
    out[1] = FX_Mul(v[2], n.y) + (FX_Mul(v[0], *(s16 *) (m + 0x62)) + FX_Mul(v[1], *(s16 *) (m + 0x68)));
    out[2] = FX_Mul(v[2], n.z) + (FX_Mul(v[0], *(s16 *) (m + 0x64)) + FX_Mul(v[1], *(s16 *) (m + 0x6A)));
}
