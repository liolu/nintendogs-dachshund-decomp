/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020cd3d8(M2C_UNK, s32, M2C_UNK, M2C_UNK *, s32); /* extern */
extern void *data_02154c70;
extern M2C_UNK func_02096380;

void func_02093398(void *arg0) {
    s16 temp_r2;

    temp_r2 = M2C_FIELD(arg0, s16 *, 0x120);
    if ((s32) temp_r2 < 0) {
        return;
    }
    if (M2C_FIELD(data_02154c70, s16 *, 0x6C) != 0) {
        return;
    }
    if ((s32) temp_r2 > 0) {
        M2C_FIELD(arg0, s16 *, 0x120) = (s16) (temp_r2 - 1);
    }
    if (M2C_FIELD(arg0, s16 *, 0x120) != 0) {
        return;
    }
    if (((s32) (*(u16 *) 0x04000304 & 0x8000) >> 0xF) == 1) {
        func_020cd3d8(2, 0xC44, 0, &func_02096380, 0);
    } else {
        func_020cd3d8(2, 0xC44, 0, &func_02096380, 1);
    }
    M2C_FIELD(arg0, s16 *, 0x120) = 0x708;
}
