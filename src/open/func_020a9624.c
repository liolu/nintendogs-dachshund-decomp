#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

extern s64 data_02124d28;
s32 func_020681f8(Vec *, Vec *);
void func_01ff832c(s32, Vec *, Vec *, Vec *);

void func_020a9624(Vec *ref, Vec *v, s32 scale, Vec *out) {
    s64 mag;
    Vec neg;
    s32 dot;

    mag = (s64) v->x * v->x + (s64) v->y * v->y + (s64) v->z * v->z;
    if (mag < data_02124d28) {
        *out = *ref;
    }
    neg.x = -v->x;
    neg.y = -v->y;
    neg.z = -v->z;
    dot = func_020681f8(ref, &neg);
    if (dot < 0) {
        dot = 0;
    }
    func_01ff832c(dot << 1, v, ref, out);
    if (scale != 0x1000) {
        out->x = (s32) (((s64) out->x * scale + 0x800) >> 12);
        out->y = (s32) (((s64) out->y * scale + 0x800) >> 12);
        out->z = (s32) (((s64) out->z * scale + 0x800) >> 12);
    }
}
