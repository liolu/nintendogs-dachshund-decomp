/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020d640c(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020da98c(M2C_UNK, s32, u16, M2C_UNK, s32); /* extern */
M2C_UNK func_020daee4(M2C_UNK);                     /* extern */
M2C_UNK func_020db44c(s32, M2C_UNK);                /* extern */
s32 func_020ec078(M2C_UNK);                         /* extern */

void func_020e536c(void *arg0) {
    s32 temp_r0;
    s32 temp_r4;
    s32 temp_r4_2;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 < 2) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_r0 + 1);
        return;
    }
    if (M2C_FIELD(arg0, s32 *, 0x86C) == 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 0x86C) = 0;
    temp_r4                       = func_020d640c(2, 0, 0xC9, 0);
    func_020db44c(M2C_FIELD(arg0, s32 *, 0x18), 0);
    if (temp_r4 != 0) {
        func_020da98c(0, func_020ec078(2), M2C_FIELD(arg0, u16 *, 0x20), 0, temp_r4);
    }
    temp_r4_2 = func_020d640c(2, 0, 0xC9, 1);
    func_020db44c(M2C_FIELD(arg0, s32 *, 0x1C), 0);
    if (temp_r4_2 != 0) {
        func_020da98c(0, func_020ec078(2), M2C_FIELD(arg0, u16 *, 0x22), 1, temp_r4_2);
    }
    func_020daee4(0);
}
