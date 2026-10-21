#include "m2c.h"

typedef struct {
    s32 x, y, z;
} Vec3;

typedef struct {
    u8 pad0[0xC];
    Vec3 vec;
    u16 f18;
    u16 f1a;
    s32 f1c;
} B9d20;

extern u8 data_0213eee4[];
extern u8 data_02124d28[];
extern u8 data_0214d5fc[];
extern u8 data_0213eee8[];
extern B9d20 data_0215563c;

void func_02067ef8(void *a, void *b, s32 c);
void func_01ff832c(s32 a, void *b, void *c, void *d);
s32 func_02006a20(void *a, void *b);
void func_020ba108(void *a, void *b);
void func_020ba364(void *a, void *b);

void func_020b9d20(M2C_UNK arg0, u8 *arg1) {
    Vec3 v0, v1, v2;
    B9d20 *o = &data_0215563c;
    s32 d2, d1;
    s32 m;
    s64 len;
    s32 res;

    *(Vec3 *) &v0 = *(Vec3 *) (arg1 + 0x48);
    v0.y = 0;
    func_02067ef8(&v0, &v0, 0);
    v1.x = v0.z;
    v1.y = 0;
    v1.z = -v0.x;
    v2.x = 0;
    v2.y = 0x1000;
    v2.z = 0;
    m = *(s32 *) data_0213eee4;
    switch (m) {
    case 0:
        d1 = 0x10;
        d2 = 0x66;
        break;
    case 1:
        d1 = 0x100;
        d2 = 0x400;
        break;
    }
    if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x100)) {
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x40))
            func_01ff832c(0x400, &v0, o, o);
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x80))
            func_01ff832c(-0x400, &v0, o, o);
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x20))
            func_01ff832c(0x400, &v1, o, o);
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x10))
            func_01ff832c(-0x400, &v1, o, o);
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x400))
            func_01ff832c(0x400, &v2, o, o);
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x800))
            func_01ff832c(-0x400, &v2, o, o);
    } else {
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x20))
            o->f1a -= d1;
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x10))
            o->f1a += d1;
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x80))
            o->f18 -= d1;
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x40))
            o->f18 += d1;
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x400))
            o->f1c -= d2;
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x800))
            o->f1c += d2;
        if (o->f1c <= 0x1000)
            o->f1c = 0x1000;
        if ((u32) o->f18 > 0x3F00 && (u32) o->f18 <= 0x8000) {
            o->f18 = 0x3F00;
        } else if ((u32) o->f18 < 0xC100 && (u32) o->f18 > 0x8000) {
            o->f18 = 0xC100;
        }
    }
    len = (s64) o->vec.x * o->vec.x + (s64) o->vec.y * o->vec.y + (s64) o->vec.z * o->vec.z;
    if (len < *(s64 *) data_02124d28) {
        res = 0;
    } else {
        res = func_02006a20(&o->vec, &o->vec);
    }
    if (res == 0) {
        o->vec.x = 0;
        o->vec.y = 0x1000;
        o->vec.z = 0;
    }
    func_020ba108(o, data_0213eee8);
    func_020ba364(data_0213eee8, arg1);
}
