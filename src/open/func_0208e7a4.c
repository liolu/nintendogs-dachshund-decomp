#include "m2c.h"
M2C_UNK func_020721a0(M2C_UNK *, M2C_UNK);
M2C_UNK func_02072278(M2C_UNK);
M2C_UNK func_02073034(M2C_UNK, M2C_UNK);
M2C_UNK func_020733c0(M2C_UNK *, M2C_UNK);
extern M2C_UNK data_0215422c;
extern M2C_UNK data_0215433c;
void func_0208e7a4(s32 arg0) {
    M2C_UNK *p = &data_0215422c;
    M2C_UNK *q = &data_0215433c;
    s32 temp_r4;
    s16 v;

    temp_r4 = *(s32 *) ((s8 *) p + 4);
    if (arg0 == -1) {
        return;
    }
    if (*(s16 *) ((s8 *) p + 0x16) != -1) {
        ((void (*)(M2C_UNK)) func_020721a0)(temp_r4);
    }
    v = func_02072278(temp_r4);
    *(s16 *) ((s8 *) p + 0x16) = v;
    func_02073034(arg0, temp_r4);
    func_020733c0(q, arg0);
    *(s32 *) ((s8 *) q + 0xC) = 1;
}
