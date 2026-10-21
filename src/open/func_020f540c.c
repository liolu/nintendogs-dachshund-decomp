#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

extern void func_0206810c(Vec3 *, Vec3 *, Vec3 *);
extern void func_02006a20(Vec3 *, Vec3 *);

void func_020f540c(s32 arg0) {
    s32 *p = *(s32 **) (arg0 + 0x214);
    Vec3 a, b, c;
    s32 x, y, z;
    s32 zero = 0;

    x = *(s32 *) (arg0 + 0xC8);
    z = *(s32 *) (arg0 + 0xD0);
    y = *(s32 *) (arg0 + 0xCC);
    a.x = x;
    a.y = y;
    a.z = z;
    x = *(s32 *) (arg0 + 0xD4);
    z = *(s32 *) (arg0 + 0xDC);
    y = *(s32 *) (arg0 + 0xD8);
    b.x = x;
    b.y = y;
    b.z = z;
    func_0206810c(&a, &b, &c);
    func_02006a20(&a, &a);
    func_02006a20(&c, &c);
    func_0206810c(&c, &a, &b);
    *(s32 *) (arg0 + 0xC8) = a.x;
    *(s32 *) (arg0 + 0xCC) = a.y;
    *(s32 *) (arg0 + 0xD0) = a.z;
    *(s32 *) (arg0 + 0xD4) = b.x;
    *(s32 *) (arg0 + 0xD8) = b.y;
    *(s32 *) (arg0 + 0xDC) = b.z;
    *(s32 *) (arg0 + 0xE0) = c.x;
    *(s32 *) (arg0 + 0xE4) = c.y;
    *(s32 *) (arg0 + 0xE8) = c.z;
    p[7] = zero;
    p[8] = zero;
    p[9] = zero;
}
