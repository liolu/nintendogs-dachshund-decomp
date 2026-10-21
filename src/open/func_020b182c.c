#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

void func_02068270(s32, s32, s32);
s32 func_01ffdb08(s32);
void func_020b1ad0(s32, s32);
s32 func_0208b948(s32, s32, s32);

void func_020b182c(s32 arg0, Vec *arg1, s32 arg2) {
    Vec v;
    s16 i;
    s32 h;
    s32 b, a, c;

    v = *arg1;
    if (v.x > 0x333) {
        v.x = 0x333;
    }
    if (v.y > 0x333) {
        v.y = 0x333;
    }
    if (v.z > 0x333) {
        v.z = 0x333;
    }
    if (v.x < -0x333) {
        v.x = -0x333;
    }
    if (v.y < -0x333) {
        v.y = -0x333;
    }
    if (v.z < -0x333) {
        v.z = -0x333;
    }
    func_02068270(arg0 + 0xBC, (s32) &v, arg0 + 0xBC);
    for (i = 0; i < 3; i++) {
        if ((M2C_FIELD(arg0, s32 *, 0x16C) & (1 << (i + 3))) != 0) {
            h = func_01ffdb08(i);
            if (h != 0) {
                func_020b1ad0(h, arg0);
            }
        }
    }
    if (M2C_FIELD(arg0, u16 *, 0xA2) == 0) {
        M2C_FIELD(arg0, s32 *, 0xB0) = M2C_FIELD(arg0, s32 *, 0xB0) + (arg1->x << arg2);
        M2C_FIELD(arg0, s32 *, 0xB8) = M2C_FIELD(arg0, s32 *, 0xB8) + (arg1->z << arg2);
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) > 0x99A) {
        M2C_FIELD(arg0, s32 *, 0xB0) = 0x99A;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB4) > 0x99A) {
        M2C_FIELD(arg0, s32 *, 0xB4) = 0x99A;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB8) > 0x99A) {
        M2C_FIELD(arg0, s32 *, 0xB8) = 0x99A;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB0) < -0x99A) {
        M2C_FIELD(arg0, s32 *, 0xB0) = -0x99A;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB4) < -0x99A) {
        M2C_FIELD(arg0, s32 *, 0xB4) = -0x99A;
    }
    if (M2C_FIELD(arg0, s32 *, 0xB8) < -0x99A) {
        M2C_FIELD(arg0, s32 *, 0xB8) = -0x99A;
    }
    if (M2C_FIELD(arg0, s16 *, 0x90) == 1) {
        a = M2C_FIELD(arg0, s32 *, 0xB4);
        b = M2C_FIELD(arg0, s32 *, 0xB0);
        if (a <= 0) {
            a = -a;
        }
        if (b <= 0) {
            b = -b;
        }
        c = M2C_FIELD(arg0, s32 *, 0xB8);
        if (c <= 0) {
            c = -c;
        }
        func_0208b948(arg0 + 0x190, 2, b + a + c);
    }
}
