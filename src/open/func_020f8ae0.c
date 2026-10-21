#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

extern void func_0206810c(Vec3 *, Vec3 *, Vec3 *);
extern void func_02006a20(Vec3 *, Vec3 *);
extern void func_01ff832c(void *, Vec3 *, Vec3 *, Vec3 *);
extern s32 func_020681f8(Vec3 *, void *);

void func_020f8ae0(s32 arg0, void *arg1) {
    s32 *p = *(s32 **) (arg0 + 0x214);
    Vec3 a, b, c;
    s32 x, y, z;

    z = *(s32 *) (arg0 + 0xD0);
    y = *(s32 *) (arg0 + 0xCC);
    x = *(s32 *) (arg0 + 0xC8);
    a.x = x;
    a.y = y;
    a.z = z;
    x = *(s32 *) (arg0 + 0xE0);
    z = *(s32 *) (arg0 + 0xE8);
    y = *(s32 *) (arg0 + 0xE4);
    c.x = x;
    c.y = y;
    c.z = z;
    x = *(s32 *) (arg0 + 0xD4);
    z = *(s32 *) (arg0 + 0xDC);
    y = *(s32 *) (arg0 + 0xD8);
    b.x = x;
    b.y = y;
    b.z = z;
    func_01ff832c(arg1, &a, &c, &c);
    func_02006a20(&c, &c);
    func_0206810c(&b, &c, &a);
    *(s32 *) (arg0 + 0xC8) = a.x;
    *(s32 *) (arg0 + 0xCC) = a.y;
    *(s32 *) (arg0 + 0xD0) = a.z;
    *(s32 *) (arg0 + 0xD4) = b.x;
    *(s32 *) (arg0 + 0xD8) = b.y;
    *(s32 *) (arg0 + 0xDC) = b.z;
    *(s32 *) (arg0 + 0xE0) = c.x;
    *(s32 *) (arg0 + 0xE4) = c.y;
    *(s32 *) (arg0 + 0xE8) = c.z;
    if (p[1] != 1) {
        return;
    }
    if (func_020681f8(&c, (u8 *) p + 0x28) <= 0xE66) {
        p[1] = p[1] + 1;
    }
}
