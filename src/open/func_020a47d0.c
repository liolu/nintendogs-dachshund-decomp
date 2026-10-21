#include "m2c.h"
extern void *data_02159e70;
void func_020d6068();
s32 func_0209fe30();
void func_0206a3c0();
void func_020a47d0(s32 arg0) {
    s32 r;
    s32 v;
    s32 t;

    if (M2C_FIELD(data_02159e70, s32 *, 0xAC) == 2) {
        func_020d6068(2, 2, 1);
        v = M2C_FIELD(arg0, s32 *, 0xF0);
        if (v == 0 || v == 7) {
            r = M2C_FIELD(arg0, s32 *, 0x74);
            t = *(u16 *) 0x4001048;
            t = (t & ~0x3F) | 6;
            t |= 0x20;
            *(u16 *) 0x4001048 = t;
            t = *(u16 *) 0x400104A;
            t = (t & ~0x3F) | 0x14;
            *(u16 *) 0x400104A = t;
            *(u16 *) 0x4001040 = 0xFF;
            t = (((-r) << 8) & 0xFF00) | 0xC4;
            *(u16 *) 0x4001044 = t;
            *(u32 *) 0x4001000 = (*(u32 *) 0x4001000 & ~0xE000) | 0x2000;
            v = M2C_FIELD(arg0, s32 *, 0x78);
            func_0206a3c0(0x4001050, 2, 4, v, 0x10 - v);
        } else {
            v = func_0209fe30(arg0);
            r = -0x20 - v % 0x50;
            *(u32 *) 0x4001000 = *(u32 *) 0x4001000 & ~0xE000;
            *(u16 *) 0x4001050 = 0;
        }
    } else {
        r = 0;
        func_020d6068(2, 2, r);
        *(u32 *) 0x4001000 = *(u32 *) 0x4001000 & ~0xE000;
        *(u16 *) 0x4001050 = 0;
    }
    *(u32 *) 0x4001014 = (u32) (r << 16) & 0x1FF0000;
}
