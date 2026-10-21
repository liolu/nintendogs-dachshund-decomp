#include "m2c.h"

typedef struct {
    u16 f0;
    u16 f2;
    s32 f4;
} B83ec;

typedef struct {
    s32 x, y, z;
} Vec3;

extern u8 data_0214d5fc[];
extern u8 data_02125368[];

void func_0206823c(void *a, void *b, void *c);
void func_02067ef8(void *a, void *b, s32 c);
void func_01ff832c(s32 a, void *b, void *c, void *d);
void func_020b780c(void *a, void *b, s32 c, s32 d, s32 e);
void func_020b7674(void *a, void *b, void *c, void *d, void *e);

void func_020b83ec(B83ec *arg0, u8 *arg1) {
    Vec3 v4, v10, v1c;

    if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x100)) {
        func_0206823c(arg1 + 0x3C, arg1 + 0x30, &v4);
        v4.y = 0;
        func_02067ef8(&v4, &v4, 0);
        v10.x = v4.z;
        v10.y = 0;
        v10.z = -v4.x;
        v1c.x = 0;
        v1c.y = 0x1000;
        v1c.z = 0;
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x40))
            func_01ff832c(0x400, &v4, arg1 + 0x3C, arg1 + 0x3C);
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x80))
            func_01ff832c(-0x400, &v4, arg1 + 0x3C, arg1 + 0x3C);
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x20))
            func_01ff832c(0x400, &v10, arg1 + 0x3C, arg1 + 0x3C);
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x10))
            func_01ff832c(-0x400, &v10, arg1 + 0x3C, arg1 + 0x3C);
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x400))
            func_01ff832c(0x400, &v1c, arg1 + 0x3C, arg1 + 0x3C);
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x800))
            func_01ff832c(-0x400, &v1c, arg1 + 0x3C, arg1 + 0x3C);
    } else {
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x20))
            arg0->f2 -= 0x100;
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x10))
            arg0->f2 += 0x100;
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x80))
            arg0->f0 -= 0x100;
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x40))
            arg0->f0 += 0x100;
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x400)) {
            arg0->f4 -= 0x400;
            if (arg0->f4 <= 0x1000)
                arg0->f4 = 0x1000;
        }
        if ((u16) (*(u16 *) (data_0214d5fc + 2) & 0x800))
            arg0->f4 += 0x400;
        if ((u32) arg0->f0 > 0x3F00 && (u32) arg0->f0 <= 0x8000) {
            arg0->f0 = 0x3F00;
        } else if ((u32) arg0->f0 < 0xC100 && (u32) arg0->f0 > 0x8000) {
            arg0->f0 = 0xC100;
        }
    }
    func_020b780c(arg1 + 0x30, arg1 + 0x3C, arg0->f4, arg0->f0, arg0->f2);
    func_020b7674(arg1 + 0x60, arg1 + 0x54, arg1 + 0x48, arg1 + 0x30, arg1 + 0x3C);
    *(s16 *) (arg1 + 0x6C) = *(s16 *) (data_02125368 + 0x54);
    *(s16 *) (arg1 + 0x6E) = *(s16 *) (data_02125368 + 0x56);
}
