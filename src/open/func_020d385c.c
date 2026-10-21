#include "m2c.h"

extern void *data_02159e64;

s32 func_0205df50(s32 dividend, s32 divisor);
void func_0207ca98(u32 type, u32 dstAddr, const void *pSrc, u32 szByte);

void func_020d385c(s32 arg0, s32 arg1) {
    s16 i;
    void *obj;
    u8 *base;
    u8 *p;
    u8 *src;
    u16 colorA;
    u16 colorB;
    s16 a0;
    s16 b0;
    s16 a1;
    s16 b1;
    s16 a2;
    s16 b2;
    s16 c0;
    s16 c1;
    s16 c2;

    for (i = 0; i < 4; i++) {
        if (arg0 == 0) {
            obj = data_02159e64;
            base = *(u8 **) (*(u32 *) ((u8 *) obj + 0x18) + 0xC);
            p = base + 2 * i + 0x100;
            colorA = *(u16 *) (p + 0xD2);
            c0 = colorA & 0x1F;
            c1 = (colorA & 0x3E0) >> 5;
            c2 = (colorA & 0x7C00) >> 10;
        } else if (arg0 == arg1) {
            obj = data_02159e64;
            base = *(u8 **) (*(u32 *) ((u8 *) obj + 0x18) + 0xC);
            p = base + 0x100;
            colorA = *(u16 *) (p + 0xDE);
            c0 = colorA & 0x1F;
            c1 = (colorA & 0x3E0) >> 5;
            c2 = (colorA & 0x7C00) >> 10;
        } else {
            obj = data_02159e64;
            base = *(u8 **) (*(u32 *) ((u8 *) obj + 0x18) + 0xC);
            p = base + 0x1C0;
            colorA = *(u16 *) (p + 0x1E);
            colorB = *(u16 *) (p + 2 * i + 0x12);
            a0 = colorA & 0x1F;
            b0 = colorB & 0x1F;
            c0 = func_0205df50(arg0 * (a0 - b0), arg1) + b0;
            a1 = (colorA & 0x3E0) >> 5;
            b1 = (colorB & 0x3E0) >> 5;
            c1 = func_0205df50(arg0 * (a1 - b1), arg1) + b1;
            a2 = (colorA & 0x7C00) >> 10;
            b2 = (colorB & 0x7C00) >> 10;
            c2 = func_0205df50(arg0 * (a2 - b2), arg1) + b2;
        }
        p = (u8 *) obj + (i + 9) * 2;
        *(u16 *) (p + 0x1C) = c0 | (c1 << 5) | (c2 << 10);
    }

    obj = data_02159e64;
    src = (u8 *) obj + 0x1C;
    if (*(s16 *) ((u8 *) obj + 0x74) != 0) {
        func_0207ca98(0xF, 0x1C0, src, 0x40);
    } else {
        func_0207ca98(0x1F, 0x1C0, src, 0x40);
    }
}
