#include "m2c.h"
extern void *data_02159e70;
extern s16 data_02124e68[];
void func_02066718(void *, s32, s32);
void func_0206670c(void *, s32, s32);
void func_02066724(void *, void *, void *);
void *func_02085d3c(s32, s32);
void func_020ebe84(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4, s32 arg5, u16 arg6, s32 arg7, s32 arg8) {
    s32 v;
    u8 *ent;
    u8 *base;
    u32 *ptr;
    s32 c[4];
    s32 a[4];
    s32 b[4];

    if (arg7 < 0) {
        return;
    }
    if (arg7 > 0x1f) {
        return;
    }

    v = 0;
    switch (arg0) {
    case 0:
    case 1:
        v = M2C_FIELD((u8 *) data_02159e70 + 0x1000, s32 *, 0xDE4);
        break;
    case 2:
    case 3:
        v = M2C_FIELD((u8 *) data_02159e70 + 0x1000, s32 *, 0xDE8);
        break;
    }

    ent = (u8 *) M2C_FIELD((u8 *) v, s32 *, 4) + arg7 * 32;
    func_02066718(c, data_02124e68[(arg6 >> 4) * 2], data_02124e68[(arg6 >> 4) * 2 + 1]);
    func_0206670c(a, arg4, arg5);
    func_02066724(c, a, b);

    base = (u8 *) data_02159e70 + 0x1dec + arg0 * 0x294;
    ptr = (u32 *) func_02085d3c(M2C_FIELD(base, s32 *, 0xc),
                                M2C_FIELD((u8 *) M2C_FIELD(base, s32 *, 8) + arg1 * 8, s32 *, 0xc));

    M2C_FIELD(ptr, u32 *, 0) = (M2C_FIELD(ptr, u32 *, 0) & 0xfe00ff00) | (arg3 & 0xff) | ((arg2 & 0x1ff) << 16);

    M2C_FIELD(ent, s16 *, 0x6) = M2C_FIELD(b, s32 *, 0) >> 4;
    M2C_FIELD(ent, s16 *, 0xe) = M2C_FIELD(b, s32 *, 4) >> 4;
    M2C_FIELD(ent, s16 *, 0x16) = M2C_FIELD(b, s32 *, 8) >> 4;
    M2C_FIELD(ent, s16 *, 0x1e) = M2C_FIELD(b, s32 *, 0xc) >> 4;

    M2C_FIELD(ptr, u32 *, 0) = (M2C_FIELD(ptr, u32 *, 0) & 0xc1fffcff) | 0x300 | (arg7 << 25);
    M2C_FIELD(ptr, u16 *, 4) = (M2C_FIELD(ptr, u16 *, 4) & ~0xc00) | (arg8 << 10);
}
