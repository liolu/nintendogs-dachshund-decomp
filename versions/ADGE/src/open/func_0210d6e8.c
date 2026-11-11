#include "m2c.h"
extern u8 data_021319fc[4][3];
extern u8 data_021319e4[];
void func_020eb9fc(M2C_UNK, u8, M2C_UNK);
u8 *func_020cd92c(s16, u8);

void func_0210d6e8(u8 *arg0) {
    s32 i;
    s32 j;
    s32 v;
    u8 *row;
    u8 *idx;

    row = &data_021319fc[0][0];
    for (i = 0; i < 4; i++, row += 3) {
        for (j = 0; j < 3; j++) {
            func_020eb9fc(2, row[j], 0);
        }
    }
    if ((u32) (*(s32 *) (arg0 + 0x0) - 6) > 2) {
        return;
    }
    idx = data_021319e4;
    row = &data_021319fc[0][0];
    for (i = 0; i < 4; i++, idx++, row += 3) {
        v = *(s16 *) (func_020cd92c(*(s16 *) (arg0 + 0xC), *idx) + 0x14);
        if (v >= 1 && v <= 3) {
            v -= 1;
            func_020eb9fc(2, row[(u32) v], 1);
        }
    }
}
