/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a3dfc(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020a82fc(M2C_UNK, s32, u16, M2C_UNK, s32); /* extern */
M2C_UNK func_020a8854(M2C_UNK);                     /* extern */
M2C_UNK func_020a8db4(s32, M2C_UNK);                /* extern */
s32 func_020b9168(M2C_UNK);                         /* extern */

void func_020b254c(void *arg0) {
    s32 temp_r4;
    s32 temp_r4_2;

    if (M2C_FIELD(arg0, s32 *, 0x86C) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x86C) = 0;
    temp_r4                       = func_020a3dfc(2, 0, 0xC9, 0);
    func_020a8db4(M2C_FIELD(arg0, s32 *, 0x18), 0);
    if (temp_r4 != 0) {
        func_020a82fc(0, func_020b9168(2), M2C_FIELD(arg0, u16 *, 0x20), 0, temp_r4);
    }
    temp_r4_2 = func_020a3dfc(2, 0, 0xC9, 1);
    func_020a8db4(M2C_FIELD(arg0, s32 *, 0x1C), 0);
    if (temp_r4_2 != 0) {
        func_020a82fc(0, func_020b9168(2), M2C_FIELD(arg0, u16 *, 0x22), 1, temp_r4_2);
    }
    func_020a8854(0);
}
