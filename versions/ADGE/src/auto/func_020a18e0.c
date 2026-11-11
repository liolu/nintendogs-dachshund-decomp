/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020d128c();                                /* extern */
M2C_UNK func_020d2c64(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */
M2C_UNK func_020eae18(M2C_UNK, s16, s16);           /* extern */
extern void *data_02159e70;

void func_020a18e0(void *arg0) {
    void *temp_r4;

    M2C_FIELD(arg0, s32 *, 0)    = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 8)    = -0x40;
    temp_r4                      = arg0 + 0x1CF4;
    if (M2C_FIELD(data_02159e70, s32 *, 0xBC) == 0x1D) {
        func_020eae18(0x14, M2C_FIELD(arg0, s16 *, 0x1C18), M2C_FIELD(arg0, s16 *, 0x1C1A));
    }
    if (func_020d128c() == 0) {
        func_020d2c64(1, 0x838, 0, 0, 0);
        M2C_FIELD(data_02159e70, s16 *, 0x11160) = 0x10;
        return;
    }
    if (M2C_FIELD(temp_r4, s32 *, 4) != 0) {
        return;
    }
    func_020d2c64(8, 0x251C, 0, 0, 1);
    M2C_FIELD(temp_r4, s32 *, 4) = 1;
}
