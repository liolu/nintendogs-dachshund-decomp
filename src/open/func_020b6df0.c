#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
} Struct12;

s32 func_01ffdb08(s16);
s32 func_02033edc(M2C_UNK);
void func_020b2a54(M2C_UNK, Struct12 *);
void func_02027540(M2C_UNK, Struct12 *);
s32 func_020b2af4(s16);
void func_01ff832c(s32, Struct12 *, Struct12 *, Struct12 *);
void func_0206823c(Struct12 *, Struct12 *, Struct12 *);
s32 func_020681f8(Struct12 *, Struct12 *);
M2C_UNK func_02067ca0(M2C_UNK, M2C_UNK);
void func_020b6df0(Struct12 *arg0, Struct12 *arg1, Struct12 *arg2, Struct12 *arg3, Struct12 *arg4, M2C_UNK arg5) {
    Struct12 t1;
    Struct12 t2;
    Struct12 c1;
    Struct12 c2;
    Struct12 sub1;
    Struct12 sub2;
    Struct12 s1;
    Struct12 s2;
    s32 v;
    s32 n11;
    s32 best;
    s32 d;
    s32 t;
    s16 i;
    s32 dd;
    s32 q1;
    s32 q2;
    s32 n;
    M2C_UNK p;

    if (arg5 != 0) {
        v = M2C_FIELD(arg5, s32 *, 0xF8) + 0x1000;
        func_01ff832c(-v, arg4, (Struct12 *) (arg5 + 0xBC), arg0);
        func_01ff832c(v, arg4, (Struct12 *) (arg5 + 0xBC), arg1);
        d = func_020681f8((Struct12 *) (arg5 + 0xB0), arg4);
        t = (s32) (((s64) d * 0x3C000 + 0x800) >> 12);
        if (0 < t) {
            func_01ff832c(t, arg4, arg1, arg1);
        } else {
            func_01ff832c(t, arg4, arg0, arg0);
        }
        func_0206823c(arg0, arg2, &sub1);
        n = func_020681f8(&sub1, arg4);
        dd = func_020681f8(&sub1, arg3);
        n11 = func_02067ca0(n, dd);
        func_0206823c(arg1, arg2, &sub2);
        n = func_020681f8(&sub2, arg4);
        dd = func_020681f8(&sub2, arg3);
        best = func_02067ca0(n, dd);
    } else {
        n11 = 0x64000;
        best = -0x64000;
    }
    for (i = 0; i < 3; i++) {
        p = func_01ffdb08(i);
        if (p != 0 && func_02033edc(p) == 0) {
            func_020b2a54(p, &t1);
            func_02027540(p, &t2);
            v = func_020b2af4(i) + 0x1000;
            func_01ff832c(-v, arg4, &t1, &c1);
            func_01ff832c(v, arg4, &t1, &c2);
            d = func_020681f8(&t2, arg4);
            t = (s32) (((s64) d * 0x1E000 + 0x800) >> 12);
            if (t > 0) {
                func_01ff832c(t, arg4, &c2, &c2);
            } else {
                func_01ff832c(t, arg4, &c1, &c1);
            }
            func_0206823c(&c1, arg2, &s1);
            n = func_020681f8(&s1, arg4);
            dd = func_020681f8(&s1, arg3);
            q1 = func_02067ca0(n, dd);
            if (q1 < n11) {
                n11 = q1;
                arg0->f0 = c1.f0;
                arg0->f4 = c1.f4;
                arg0->f8 = c1.f8;
            }
            func_0206823c(&c2, arg2, &s2);
            n = func_020681f8(&s2, arg4);
            dd = func_020681f8(&s2, arg3);
            q2 = func_02067ca0(n, dd);
            if (q2 > best) {
                best = q2;
                arg1->f0 = c2.f0;
                arg1->f4 = c2.f4;
                arg1->f8 = c2.f8;
            }
        }
    }
}
