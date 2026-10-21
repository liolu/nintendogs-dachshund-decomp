#include "m2c.h"

extern u8 data_021544dc[];
void func_0206cc88(void *, void *, s32);
s32 func_01ffdb08(s32);
s32 func_02022fdc(s32);
s32 func_020915a8(s32, s32);

void func_02090e7c(void) {
    u8 *base;
    s16 i;
    s32 r;
    s32 v;
    s32 n;
    u8 *g;

    base = data_021544dc;
    if (M2C_FIELD(base, s32 *, 0x8C) != 0) {
        M2C_FIELD(base, s32 *, 0x84)++;
        if (M2C_FIELD(base, s32 *, 0x84) > 0x78) {
            func_0206cc88(base + 4, base + 0x44, 0x40);
            v = M2C_FIELD(base, s16 *, 0);
            r = func_02022fdc(func_01ffdb08(v));
            i = 0;
            for (; i < 0x14; i = (s16) (i + 1)) {
                if (((r & (1 << i)) != 0) && (func_020915a8(v, i) != 0)) {
                    goto found;
                }
            }
            i = -1;
        found:
            n = 0xFFFF;
            g = data_021544dc;
            M2C_FIELD(base, s32 *, 0x84) = n;
            if (M2C_FIELD(g, s32 *, 0x8C) != 0) {
                M2C_FIELD(g, s32 *, 0x8C) = 0;
                M2C_FIELD(g, s16 *, 2) = -1;
            }
            if (i == -1) {
                M2C_FIELD(base, s32 *, 0x98) = 1;
            } else {
                M2C_FIELD(base, s32 *, 0x98) = 0;
            }
            M2C_FIELD(base, s32 *, 0x90) = 0;
        }
        if (M2C_FIELD(base, s32 *, 0x94) != 0) {
            if (M2C_FIELD(base, s16 *, 0x88) >= 0x10) {
                M2C_FIELD(base, s32 *, 0x94) = 0;
                M2C_FIELD(base, s32 *, 0x98) = 0;
            }
        }
        return;
    }
    if (M2C_FIELD(base, s32 *, 0x94) != 0) {
        M2C_FIELD(base, s32 *, 0x90)++;
        if (M2C_FIELD(base, s32 *, 0x90) > 0x12C) {
            M2C_FIELD(base, s32 *, 0x94) = 0;
            M2C_FIELD(base, s32 *, 0x98) = 0;
        }
    }
}
