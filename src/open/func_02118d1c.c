#include "m2c.h"
extern void *data_021555f8;
s32 func_020abb3c(s32);
void func_020cf19c(M2C_UNK, M2C_UNK);

s32 func_02118d1c(s32 arg0) {
    s16 idx = *(s16 *) (arg0 + 0x7A);
    s32 v;
    s32 r = 0;
    s16 buf[2];
    s16 b1;

    if ((idx < 0) || ((s32) M2C_FIELD(data_021555f8, s16 *, 0x20) <= idx)) {
        v = 0;
    } else {
        v = M2C_FIELD(data_021555f8 + idx * 4, s32 *, 4);
    }
    if (v != 0) {
        r = (func_020abb3c(v) << 4) >> 16;
        b1 = *(s16 *) (arg0 + 0x7C);
        buf[0] = 0;
        buf[1] = b1;
        func_020cf19c((M2C_UNK) buf, r);
    }
    return r;
}
