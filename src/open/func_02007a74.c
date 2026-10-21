#include "m2c.h"
s32 func_0205df50(s32 dividend, s32 divisor);
s32 func_02067c34(s32 value);
s32 func_0207ca98(u32 type, u32 dstAddr, const void *pSrc, u32 szByte);
extern void *data_0214d628;
void func_02007a74(u8 *arg0) {
    s32 i;
    s32 v;
    s32 x;
    s32 q;
    s16 *a;

    if (M2C_FIELD(arg0, u16 *, 4) == 0) {
        return;
    }
    if (M2C_FIELD(arg0, u16 *, 4) != 1) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 6) = M2C_FIELD(arg0, s16 *, 6) + 1;
    if (M2C_FIELD(arg0, s16 *, 6) <= M2C_FIELD(arg0, s16 *, 8)) {
        q = func_0205df50(M2C_FIELD(arg0, s32 *, 0x18) * M2C_FIELD(arg0, s16 *, 6),
                          M2C_FIELD(arg0, s16 *, 8));
        x = (s32) (((s64) q * q + 0x800) >> 12);

        v = M2C_FIELD(arg0, s16 *, 0x1E) - (q >> 12);
        if (v < 0) {
            v = 0;
        }
        M2C_FIELD(arg0, s16 *, 0x20) = v;
        v = M2C_FIELD(arg0, s16 *, 0x1E) + (q >> 12);
        if (v >= 0xC0) {
            v = 0xBF;
        }
        M2C_FIELD(arg0, s16 *, 0x22) = v;

        a = (s16 *) arg0;
        for (i = 0; i < 0xC0; i++) {
            v = (i - M2C_FIELD(arg0, s16 *, 0x1E)) << 12;
            v = x - (s32) (((s64) v * v + 0x800) >> 12);
            if (v > 0) {
                v = func_02067c34(v) >> 12;
                a[i + 0x12] = M2C_FIELD(arg0, s16 *, 0x1C) - v;
                if (a[i + 0x12] < 0) {
                    a[i + 0x12] = 0;
                }
                a[i + 0xD2] = M2C_FIELD(arg0, s16 *, 0x1C) + v;
                if (a[i + 0xD2] >= 0x100) {
                    a[i + 0xD2] = 0xFF;
                }
            } else {
                a[i + 0xD2] = M2C_FIELD(arg0, s16 *, 0x1C);
                a[i + 0x12] = a[i + 0xD2];
            }
        }
        return;
    }
    M2C_FIELD(arg0, u16 *, 4) = 2;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    *(volatile u32 *) 0x4001000 = *(volatile u32 *) 0x4001000 & ~0xE000;
    *(volatile u16 *) 0x4001050 = 0;
    *(volatile u32 *) 0x4001000 = *(volatile u32 *) 0x4001000 & ~0x800;
}
