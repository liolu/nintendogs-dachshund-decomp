#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f4;
    s32 f8;
} Struct12;

extern s32 data_0213eeb4;
extern s32 data_0213eebc;

s32 func_020b2c40(Struct12 *);
void func_02068270(Struct12 *, Struct12 *, Struct12 *);
void func_020b7674(Struct12 *, Struct12 *, Struct12 *, Struct12 *, Struct12 *);
void func_020b6df0(Struct12 *, Struct12 *, Struct12 *, Struct12 *, Struct12 *, M2C_UNK);
void func_0206823c(Struct12 *, Struct12 *, Struct12 *);
s32 func_02006a20(Struct12 *, Struct12 *);
void func_0206810c(Struct12 *, Struct12 *, Struct12 *);
s32 func_020681f8(Struct12 *, Struct12 *);
s32 func_02068038(Struct12 *);
void func_01ff832c(s32, Struct12 *, Struct12 *, Struct12 *);
M2C_UNK func_02067ca0(M2C_UNK, M2C_UNK);
M2C_UNK func_02068654(M2C_UNK);
void func_020b6a24(M2C_UNK arg0, M2C_UNK arg1, s32 arg2, M2C_UNK arg3) {
    Struct12 dir;
    Struct12 xAxis;
    Struct12 yAxis;
    Struct12 zAxis;
    Struct12 target;
    Struct12 a1;
    Struct12 a2;
    Struct12 t1;
    Struct12 t2;
    Struct12 mid1;
    Struct12 n1;
    Struct12 n2;
    Struct12 b1;
    Struct12 b2;
    Struct12 t3;
    Struct12 t4;
    Struct12 mid2;
    Struct12 n3;
    Struct12 n4;
    Struct12 t5;
    long q1;
    s32 d1;
    s32 d2;
    s32 count;
    s32 d3;
    s32 len;
    s32 q2;
    s32 d4;
    s32 d;
    s32 s;

    count = func_020b2c40(&dir);
    if (!count) {
        return;
    }
    if (arg3) {
        func_02068270((Struct12 *) (arg3 + 0xBC), &dir, &dir);
        dir.f0 = (s32) (((s64) dir.f0 * 0x800 + 0x800) >> 12);
        dir.f4 = (s32) (((s64) dir.f4 * 0x800 + 0x800) >> 12);
        dir.f8 = (s32) (((s64) dir.f8 * 0x800 + 0x800) >> 12);
    }
    target = *(Struct12 *) arg1;
    func_020b7674(&zAxis, &yAxis, &xAxis, &target, &dir);
    func_020b6df0(&a1, &a2, &target, &xAxis, &zAxis, arg3);
    func_0206823c(&a1, &target, &t1);
    func_0206823c(&a2, &target, &t2);
    n1 = t1;
    n2 = t2;
    func_02006a20(&n1, &n1);
    func_02006a20(&n2, &n2);
    func_02068270(&n1, &n2, &mid1);
    func_02006a20(&mid1, &mid1);
    func_0206810c(&yAxis, &mid1, &zAxis);
    func_02006a20(&zAxis, &zAxis);
    func_0206810c(&zAxis, &yAxis, &xAxis);
    d1 = func_020681f8(&t1, &xAxis);
    d2 = func_020681f8(&t1, &zAxis);
    if (0 >= d2) {
        d2 = -d2;
    }
    q1 = func_02067ca0(d2, d1);
    func_020b6df0(&b1, &b2, &target, &xAxis, &yAxis, arg3);
    func_0206823c(&b1, &target, &t3);
    func_0206823c(&b2, &target, &t4);
    n3 = t3;
    n4 = t4;
    func_02006a20(&n3, &n3);
    func_02006a20(&n4, &n4);
    func_02068270(&n3, &n4, &mid2);
    func_02006a20(&mid2, &mid2);
    func_0206810c(&mid2, &zAxis, &yAxis);
    func_02006a20(&yAxis, &yAxis);
    func_0206810c(&zAxis, &yAxis, &xAxis);
    d3 = func_020681f8(&t3, &xAxis);
    d4 = func_020681f8(&t3, &yAxis);
    q2 = func_02067ca0(d4 > 0 ? func_020681f8(&t3, &yAxis) : -func_020681f8(&t3, &yAxis), d3);
    func_0206823c(&dir, &target, &t5);
    len = func_02068038(&t5);
    func_01ff832c(len, &xAxis, &target, &dir);
    d = func_02067ca0(q1, arg2);
    if (d < q2) {
        d = q2;
    }
    s = func_02068654(d);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) (((s64) s * 0x1680000 + 0x80000) >> 20);
    if (count == 1 && arg3 == 0) {
        M2C_FIELD(arg0, s32 *, 0x24) = data_0213eeb4;
    } else if (M2C_FIELD(arg0, s32 *, 0x24) > data_0213eebc) {
        M2C_FIELD(arg0, s32 *, 0x24) = data_0213eebc;
    }
    *(Struct12 *) arg0 = target;
    *(Struct12 *) ((u32)arg0 + 0xC) = dir;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0x1000;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
}
