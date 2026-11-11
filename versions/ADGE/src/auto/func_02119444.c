/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_02114124();                            /* extern */
M2C_UNK func_021194b4(s32, M2C_UNK);                /* extern */
extern M2C_UNK func_021197f4;
extern M2C_UNK func_02119e38;

void *func_02119444(M2C_UNK arg0, M2C_UNK arg1, s32 arg2) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = func_020038a8(arg0, 0x20);
    func_02114124();
    M2C_FIELD(temp_r4, s16 *, 0)         = 2;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x10) = &func_021197f4;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x14) = &func_02119e38;
    M2C_FIELD(temp_r4, s16 *, 2)         = 0xE10;
    M2C_FIELD(temp_r4, s16 *, 8)         = 0xB4;
    M2C_FIELD(temp_r4, s32 *, 0x1C)      = arg2;
    temp_r0                              = M2C_FIELD(temp_r4, s32 *, 0x1C);
    if (temp_r0 != 0) {
        func_021194b4(temp_r0, arg1);
    }
    return temp_r4;
}
