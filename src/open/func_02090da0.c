#include "m2c.h"
extern u8 data_021544dc[];
extern u8 data_02154520[];
s32 func_020915a8(s32 arg0, s32 arg1);
s32 func_02090da0(s32 arg0, s32 arg1) {
    u8 *g = data_021544dc;
    u8 *d;
    s32 t;
    s16 i;

    if (M2C_FIELD(g, s32 *, 0x8c) != 0) {
        M2C_FIELD(g, s32 *, 0x8c) = 0;
        M2C_FIELD(g, s16 *, 0x2) = -1;
    }
    t = M2C_FIELD(g, s32 *, 0x94);
    d = data_02154520;
    if (t == 0) {
        return -3;
    }
    M2C_FIELD(g, s32 *, 0x94) = 0;
    if (M2C_FIELD(d, s16 *, 0x2) == -1) {
        goto neg1;
    }
    if (M2C_FIELD(g, s16 *, 0x8a) > 1) {
        goto neg1;
    }
    for (i = 0; i < 0x14; i++) {
        if (arg0 & (1 << i)) {
            if (func_020915a8(arg1, i) != 0) {
                goto out;
            }
        }
    }
    i = -1;
 out:
    if (i == -1) {
        return -2;
    }
    return i;
 neg1:
    return -1;
}
