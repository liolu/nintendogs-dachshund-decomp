#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

s32 func_01ffdb08(s32);
s32 func_02033edc(s32);
void func_02027658(void *, Vec *);
s32 func_02028120(s32);
void func_0206823c(Vec *, void *, Vec *);
s32 func_020681f8(Vec *, Vec *);
s32 func_02067ca0(s32, s32);

void func_020b2b3c(s16 *arg0, s16 *arg1, void *arg2, void *arg3, void *arg4) {
    Vec v;
    Vec w;
    s16 i;
    s32 min;
    s32 max;
    s32 f;
    s32 dot1;
    s32 dot2;
    s32 r;

    *arg1 = -1;
    *arg0 = -1;
    min = 0x64000;
    max = -0x64000;
    for (i = 0; i < 3; i++) {
        f = func_01ffdb08(i);
        if (f == 0) {
            continue;
        }
        if (func_02033edc(f) != 0) {
            continue;
        }
        func_02027658((void *) f, &w);
        w.y += (s32) (((s64) func_02028120(f) * 0x2000 + 0x800) >> 12);
        func_0206823c(&w, arg2, &v);
        dot1 = func_020681f8(&v, (Vec *) arg4);
        dot2 = func_020681f8(&v, (Vec *) arg3);
        r = func_02067ca0(dot1, dot2);
        if (r < min) {
            *arg0 = i;
            min = r;
        }
        if (r > max) {
            max = r;
            *arg1 = i;
        }
    }
}
