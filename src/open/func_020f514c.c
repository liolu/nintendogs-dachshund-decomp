#include "m2c.h"
typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec;

extern void func_02044980(s32);
extern s32 func_02068038(s32);
extern void func_01ff832c(s32, Vec *, Vec *, Vec *);
extern void func_02067ef8(Vec *, Vec *);
extern void func_0206810c(Vec *, Vec *, Vec *);
extern void *data_0215a064;

void func_020f514c(s32 arg0) {
    s32 *p = *(s32 **) (arg0 + 0x214);
    Vec c, b, a;
    s32 x, y, z;
    s16 ang;
    s32 w;

    func_02044980(*(s16 *) (arg0 + 0x9C));
    if ((M2C_FIELD(data_0215a064, u16 *, 0x84) & 1) == 0) {
        return;
    }
    if (p[1] <= 0) {
        return;
    }
    if (p[4] == 0) {
        return;
    }
    if (p[5] == 0) {
        return;
    }
    ang = M2C_FIELD(data_0215a064, s16 *, 0x86);
    w = (-(s32) ang * func_02068038((s32) ((u8 *) p + 0x1C))) >> 8;
    z = *(s32 *) (arg0 + 0xD0);
    y = *(s32 *) (arg0 + 0xCC);
    x = *(s32 *) (arg0 + 0xC8);
    a.x = x;
    a.y = y;
    a.z = z;
    x = *(s32 *) (arg0 + 0xD4);
    z = *(s32 *) (arg0 + 0xDC);
    y = *(s32 *) (arg0 + 0xD8);
    b.x = x;
    b.y = y;
    b.z = z;
    x = *(s32 *) (arg0 + 0xE0);
    z = *(s32 *) (arg0 + 0xE8);
    y = *(s32 *) (arg0 + 0xE4);
    c.x = x;
    c.y = y;
    c.z = z;
    func_01ff832c(w, &a, &c, &c);
    func_02067ef8(&c, &c);
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
}
