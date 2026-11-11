#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} VecFx32;

s32 func_0200b0bc(VecFx32 *p, s32 ax, s32 az, s32 bx, s32 bz, s32 x1, s32 z1, s32 x2, s32 z2) {
#define FX_Mul(x, y) ((s32) (((s64) (x) * (y) + 0x800) >> 12))
    s32 dx1 = x1 - p->x;
    s32 dz1 = z1 - p->z;
    s32 dx2 = x2 - p->x;
    s32 dz2 = z2 - p->z;

    return FX_Mul(ax, dx1) + FX_Mul(az, dz1) >= 0 && FX_Mul(bx, dx1) + FX_Mul(bz, dz1) >= 0 &&
           FX_Mul(ax, dx2) + FX_Mul(az, dz2) <= 0 && FX_Mul(bx, dx2) + FX_Mul(bz, dz2) <= 0;
}
