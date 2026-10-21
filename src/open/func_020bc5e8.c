#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} VecFx32;

s32 func_02067ca0(s32, s32);
s32 func_02068038(const VecFx32 *);
void func_0206823c(const VecFx32 *, const VecFx32 *, VecFx32 *);
void func_02068270(const VecFx32 *, const VecFx32 *, VecFx32 *);

#define FX_Mul(x, y) ((s32) (((s64) (x) * (y) + 0x800) >> 12))

void func_020bc5e8(s32 arg0) {
    VecFx32 diff;
    s32 percent;
    s32 i;
    s32 min;
    s32 max;
    s32 len;
    s32 scale;
    VecFx32 *cur;
    VecFx32 *next;

    percent = 99;
    for (i = M2C_FIELD(arg0, s32 *, 0) - 2; i >= 0; i--) {
        if (M2C_FIELD(arg0, s32 **, 0xc)[i] == 1) {
            continue;
        }
        max = M2C_FIELD(arg0, s32 *, 0x18);
        min = max * percent / 100;
        cur = &M2C_FIELD(arg0, VecFx32 **, 4)[i];
        next = &M2C_FIELD(arg0, VecFx32 **, 4)[i + 1];
        func_0206823c(cur, next, &diff);
        len = func_02068038(&diff);
        if (len > max) {
            scale = func_02067ca0(max, len);
            diff.x = FX_Mul(diff.x, scale);
            diff.y = FX_Mul(diff.y, scale);
            diff.z = FX_Mul(diff.z, scale);
            func_02068270(next, &diff, cur);
        } else if (len < min) {
            scale = func_02067ca0(min, len);
            diff.x = FX_Mul(diff.x, scale);
            diff.y = FX_Mul(diff.y, scale);
            diff.z = FX_Mul(diff.z, scale);
            func_02068270(next, &diff, cur);
        }
    }
}
