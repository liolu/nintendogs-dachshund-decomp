#include "m2c.h"

typedef struct {
    s32 x;
    s32 y;
    s32 z;
} Vec3;

extern void *data_0215a064;
extern s32 func_02044980(s16 arg0);
extern void func_0206810c(Vec3 *a, Vec3 *b, Vec3 *c);
void func_020a7fdc(u8 *arg0, u8 *arg1) {
    Vec3 a;
    Vec3 b;
    Vec3 c;

    func_02044980(*(s16 *) (arg0 + 0x9c));
    c = *(Vec3 *) (*(u8 **) ((u8 *) data_0215a064 + 0x1c) + 0x48);
    c.x = -c.x;
    c.y = -c.y;
    c.z = -c.z;
    b.x = 0;
    b.y = 0x1000;
    b.z = 0;
    func_0206810c(&b, &c, &a);
    func_0206810c(&a, &b, &c);
    *(s32 *) (arg1 + 0x0) = a.x;
    *(s32 *) (arg1 + 0x4) = a.y;
    *(s32 *) (arg1 + 0x8) = a.z;
    *(s32 *) (arg1 + 0xc) = b.x;
    *(s32 *) (arg1 + 0x10) = b.y;
    *(s32 *) (arg1 + 0x14) = b.z;
    *(s32 *) (arg1 + 0x18) = c.x;
    *(s32 *) (arg1 + 0x1c) = c.y;
    *(s32 *) (arg1 + 0x20) = c.z;
}
