#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} VecFx32;

s32 func_02067ca0(s32, s32);

#define FX_Mul(x, y) ((s32) (((s64) (x) * (y) + 0x800) >> 12))

void func_0200b634(VecFx32 *out, VecFx32 *p1, VecFx32 *p2, VecFx32 *p3, VecFx32 *n) {
    s32 den;
    s32 nz;
    s32 nx;
    s32 ny;
    s32 t;
    s32 dx;
    s32 dy;
    s32 dz;

    den = FX_Mul(n->x, p2->x - p1->x) + FX_Mul(n->y, p2->y - p1->y) + FX_Mul(n->z, p2->z - p1->z);
    if (den == 0) {
        *out = *p3;
        return;
    }
    nz = FX_Mul(n->z, p3->z - p1->z);
    nx = FX_Mul(n->x, p3->x - p1->x);
    ny = FX_Mul(n->y, p3->y - p1->y);
    t = den ? func_02067ca0(nx + ny + nz, den) : nx + ny + nz;
    dx = p2->x - p1->x;
    out->x = p1->x + FX_Mul(dx, t);
    dy = p2->y - p1->y;
    out->y = p1->y + FX_Mul(dy, t);
    dz = p2->z - p1->z;
    out->z = p1->z + FX_Mul(dz, t);
}
