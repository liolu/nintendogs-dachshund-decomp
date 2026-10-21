#include "m2c.h"
s32 func_020969e4(void);
s32 func_02091bb8(void);
s32 func_02073328(void *, s32, s32);
u64 func_02080978(void);
s32 func_0204496c(void);
void func_02070ed4(void *, s32);
void func_02070d7c(void *, s32, s16);
extern u8 data_0215422c[];
extern u8 data_0215446c[];
s32 func_0208e824(s32 arg0) {
    u8 *base;
    u8 *p;
    s16 pitch;
    s16 idx;
    u32 rnd;
    s32 h;

    if (func_020969e4() == -0xB) {
        goto fail;
    }
    if (*(s32 *) (data_0215422c + 0x1C) != 0) {
        goto fail;
    }
    base = data_0215446c;
    idx = 0;
    for (;;) {
        u16 bit = (u16) (1 << idx);
        if ((*(u16 *) (base + 4) & bit) == 0) {
            *(u16 *) (base + 4) |= bit;
            break;
        }
        idx = (s16) (idx + 1);
        if (idx >= 2) {
            idx = -1;
            break;
        }
    }
    if (idx == -1) {
        goto fail;
    }
    if (*(s32 *) (base + 8) == 0) {
        goto fail;
    }
    p = base + 0xC + idx * 4;
    h = func_02091bb8();
    func_02073328(p, h, arg0);
    if (arg0 >= 0x3C) {
        goto done;
    }
    rnd = (u32) func_02080978();
    switch (arg0) {
    case 1:
    case 0x28:
    case 0x29:
        *(s32 *) (base + 0x1C) = 1;
        *(u16 *) (base + 0x20) = 0;
        *(s32 *) (base + 0x24) = (s32) p;
        break;
    case 2:
    case 0x1E:
    case 0x1F:
    case 0x20:
    case 0x2A:
    case 0x30:
    case 0x31:
    case 0x32:
    case 0x33:
    case 0x34:
    case 0x35:
    case 0x36:
    case 0x37:
        *(s32 *) (base + 0x28) = 1;
        *(s32 *) (base + 0x2C) = (s32) p;
    default:
        rnd = rnd * 0x10DCD + 1;
        pitch = (s16) (((u16) ((rnd << 16) >> 26)) + 0x40);
        if (func_0204496c() != -1) {
            pitch = pitch / 3;
        }
        func_02070ed4(p, pitch);
        break;
    }
    rnd = rnd * 0x10DCD + 1;
    func_02070d7c(p, 0xFFFF, ((u16) (((u32) ((u16) rnd * 0x3C)) >> 16)) - 0x1E);

done:
    return idx;

fail:
    return -1;
}
