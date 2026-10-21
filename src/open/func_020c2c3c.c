#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

s32 func_02068038(const Vec *v);
s32 func_02067ca0(s32 numer, s32 denom);

void func_020c2c3c(Vec *v, s32 max) {
    s32 len;
    s32 ratio;

    len = func_02068038(v);
    if (max >= len) {
        return;
    }
    ratio = func_02067ca0(max, len);
    v->x = ((s64) v->x * ratio + 0x800) >> 12;
    v->y = ((s64) v->y * ratio + 0x800) >> 12;
    v->z = ((s64) v->z * ratio + 0x800) >> 12;
}
