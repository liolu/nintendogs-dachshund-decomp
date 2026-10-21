#include "m2c.h"

typedef struct {
    s32 x, y, z;
} Vec3;

typedef struct {
    Vec3 a;
    Vec3 b;
    s32 f18;
    s32 f1c;
    s32 f20;
    s32 f24;
} Out3ea4;

void func_02068270(void *a, void *b, Vec3 *out);
void func_0206823c(void *a, void *b, Vec3 *out);
void func_020b7674(Vec3 *a, Vec3 *b, Vec3 *c, Vec3 *d, Vec3 *e);
s32 func_020681f8(Vec3 *a, Vec3 *b);
s32 func_02067ca0(s32 a, s32 b);
s32 func_02068654(s32 a);

void func_020b3ea4(Out3ea4 *arg0, void *arg1, s32 arg2, void *arg3, s32 a5, Vec3 *a6, s32 a7, s32 a8, s32 a9) {
    volatile s32 flag;
    Vec3 A, B, C, D, E, F;
    s32 t;
    s32 u;
    s32 v;
    s32 w;

    func_02068270(arg1, arg3, &A);
    A.x = (s32) (((s64) A.x * 0x800 + 0x800) >> 12);
    A.y = (s32) (((s64) A.y * 0x800 + 0x800) >> 12);
    A.z = (s32) (((s64) A.z * 0x800 + 0x800) >> 12);
    func_0206823c(arg1, a6, &B);
    func_0206823c(arg3, a6, &C);
    func_020b7674(&D, &E, &F, a6, &A);

    t = func_020681f8(&B, &F);
    u = func_020681f8(&B, &D);
    if (u <= 0)
        u = -u;
    t = func_02067ca0(arg2 + u, t);

    u = func_020681f8(&C, &F);
    v = func_020681f8(&C, &D);
    if (v <= 0)
        v = -v;
    u = func_02067ca0(a5 + v, u);
    if (u > t)
        t = u;

    u = func_020681f8(&B, &F);
    v = func_020681f8(&B, &E);
    if (v <= 0)
        v = -v;
    u = func_02067ca0(arg2 + v, u);

    v = func_020681f8(&C, &F);
    w = func_020681f8(&C, &E);
    if (w <= 0)
        w = -w;
    v = func_02067ca0(a5 + w, v);
    if (v > u)
        u = v;

    v = func_02067ca0(t, a7);
    flag = (v < u) ? (v = u, 1) : 0;
    v = func_02068654(v);
    v = (s32) (((s64) v * 0x1680000 + 0x80000) >> 20);
    if (v < a8)
        v = a8;
    if (v > a9)
        v = a9;

    arg0->a = *a6;
    arg0->b = A;
    arg0->f18 = 0;
    arg0->f1c = 0x1000;
    arg0->f20 = 0;
    arg0->f24 = v;
}
