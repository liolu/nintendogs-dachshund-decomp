#include "m2c.h"
extern u8 data_0215422c[];
extern u8 data_02129429[];
extern u8 data_02154464[];
extern u8 data_0215449c[];
s32 func_02070c3c(s32);
s32 func_0208fb70(s32, s32, s32, s32);
s32 func_0208f0e4(M2C_UNK arg0, M2C_UNK arg1) {
    u8 *base;
    u8 thing;
    s16 i;
    u16 mask;
    s32 state;
    s32 bad;

    thing = *((u8 *) ((s8 *) &data_02129429 + (M2C_FIELD(&data_0215422c, u16 *, 0x18) * 6)));
    state = func_02070c3c((s32) &data_02154464);
    bad = (state == 4) || (state == 5) || (state == 0x3E);
    if (bad != 0) {
        return -1;
    }
    if (thing != 0xFF) {
        base = data_0215449c;
        for (i = 0; i < 4; i = (s16) (i + 1)) {
            mask = (u16) (1 << i);
            if ((M2C_FIELD(base, u16 *, 0x18) & mask) == 0) {
                M2C_FIELD(base, u16 *, 0x18) |= mask;
                goto found;
            }
        }
        i = -1;
    found:
        if (i == -1 || func_0208fb70((s32) (base + 0x28 + i * 4), thing, arg0, arg1) == 0) {
            i = -1;
        }
        return i;
    }
    return -1;
}
