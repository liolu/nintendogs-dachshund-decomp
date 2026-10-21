#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

extern s64 data_02124d28;
void func_020b103c(s32, s32, s32, s32);
void func_02006a20(Vec3 *, Vec3 *);
void func_01ff832c(s32, Vec3 *, Vec3 *, Vec3 *);
void func_0206810c(Vec3 *, Vec3 *, Vec3 *);

void func_020f8538(s32 arg0, s32 arg1) {
    s32 *p = *(s32 **)(arg0 + 0x214);
    Vec3 t1;
    Vec3 t2;
    Vec3 t3;
    Vec3 v;
    s64 mag;
    s32 x;
    s32 y;
    s32 z;
    s32 n;

    func_020b103c(arg0, arg1, 0x333, 0);
    p[2] -= p[2] >> 4;
    v = *(Vec3 *)(arg0 + 0xBC);
    mag = (s64) v.x * v.x + (s64) v.y * v.y + (s64) v.z * v.z;
    z = *(s32 *)(arg0 + 0xD0);
    y = *(s32 *)(arg0 + 0xCC);
    x = *(s32 *)(arg0 + 0xC8);
    t1.x = x;
    t1.y = y;
    t1.z = z;
    z = *(s32 *)(arg0 + 0xE8);
    y = *(s32 *)(arg0 + 0xE4);
    x = *(s32 *)(arg0 + 0xE0);
    t3.x = x;
    t3.y = y;
    t3.z = z;
    z = *(s32 *)(arg0 + 0xDC);
    y = *(s32 *)(arg0 + 0xD8);
    x = *(s32 *)(arg0 + 0xD4);
    t2.x = x;
    t2.y = y;
    t2.z = z;
    if (mag >= data_02124d28) {
        func_02006a20(&v, &v);
    }
    if (p[2] > 0) {
        func_01ff832c(-410, &v, &t3, &t3);
    } else {
        func_01ff832c(410, &v, &t3, &t3);
    }
    func_02006a20(&t3, &t3);
    func_0206810c(&t2, &t3, &t1);
    func_0206810c(&t1, &t2, &t3);
    *(s32 *)(arg0 + 0xC8) = t1.x;
    *(s32 *)(arg0 + 0xCC) = t1.y;
    *(s32 *)(arg0 + 0xD0) = t1.z;
    *(s32 *)(arg0 + 0xD4) = t2.x;
    *(s32 *)(arg0 + 0xD8) = t2.y;
    *(s32 *)(arg0 + 0xDC) = t2.z;
    *(s32 *)(arg0 + 0xE0) = t3.x;
    *(s32 *)(arg0 + 0xE4) = t3.y;
    *(s32 *)(arg0 + 0xE8) = t3.z;
    n = p[2];
    if (n <= 0) {
        n = -n;
    }
    if (n > 0xa4) {
        p[14] = 1;
    }
    if (M2C_FIELD(arg0, u16 *, 0xA0) == 0x3C) {
        M2C_FIELD(arg0, u16 *, 0xA0) = 0;
    }
}
