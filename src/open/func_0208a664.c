#include "m2c.h"
extern u8 data_02129390[];
extern void *data_0215422c;
void func_0207306c(s32 arg0, s32 arg1);
void func_02089348(s32 arg0);
void func_02070b98(s32 arg0, s32 arg1);
void func_02070efc(void *arg0);
#pragma opt_strength_reduction off
void func_0208a664(void *arg0, s32 arg1, void *arg2) {
    u8 *tbl;
    u8 *p;
    s16 i;
    s16 j;
    s16 k;

    *(u16 *) ((u8 *) arg0 + 0x24) = (u16) arg1;
    *(s16 *) ((u8 *) arg0 + 0x80) = -1;
    *(s32 *) ((u8 *) arg0 + 0x84) = 0;
    *(u16 *) ((u8 *) arg0 + 0x88) = 0;
    *(u16 *) ((u8 *) arg0 + 0x8A) = 0x10;
    *(u16 *) ((u8 *) arg0 + 0x2A) = 0;
    tbl = data_02129390 + (*(s16 *) ((u8 *) arg2 + 0x66) << 1);

    for (i = 0; i < 3; i++) {
        *(s32 *) ((u8 *) arg0 + 0x50 + i * 4) = 0;
        *(s32 *) ((u8 *) arg0 + 0x68 + i * 4) = 0x7FFFFFFF;
        *(s32 *) ((u8 *) arg0 + 0x5C + i * 4) = 0;
        *(s32 *) ((u8 *) arg0 + 0x74 + i * 4) = 0;
    }
    for (j = 0; j < 3; j++) {
        *(s32 *) ((u8 *) arg0 + 0x38 + j * 4) = 0;
        *(s32 *) ((u8 *) arg0 + 0x2C + j * 4) = 0;
    }
    func_0207306c(*tbl, (s32) data_0215422c);
    func_02089348(2);
    func_02070b98(arg1, *(s16 *) ((u8 *) arg2 + 0x64));
    func_02070b98(arg1 + 4, ((0x1000 - *(s32 *) ((u8 *) arg2 + 8)) << 11) >> 16);
    *(s32 *) ((u8 *) arg0 + 0) = 3;
    k = 0;
    if (*(s32 *) ((u8 *) arg0 + 0) > 0) {
        p = (u8 *) arg0 + 0x18;
        do {
            func_02070efc(p);
            *(u16 *) ((u8 *) arg0 + 0x12 + k * 2) = 0;
            *(u16 *) ((u8 *) arg0 + 0x0C + k * 2) = tbl[1];
            p += 4;
            k++;
        } while (k < *(s32 *) ((u8 *) arg0 + 0));
    }
    *(u16 *) ((u8 *) arg0 + 0x4) = 0;
    *(u16 *) ((u8 *) arg0 + 0x6) = 0;
    *(u16 *) ((u8 *) arg0 + 0x8) = 0;
    *(u16 *) ((u8 *) arg0 + 0xA) = 0;
    *(s32 *) ((u8 *) arg0 + 0x44) = 0;
    *(s32 *) ((u8 *) arg0 + 0x48) = 0;
    *(s32 *) ((u8 *) arg0 + 0x4C) = 0;
}
