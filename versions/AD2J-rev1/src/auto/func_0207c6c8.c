/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02068f28(s32, s32);                    /* extern */
s32 func_02068fc8();                                /* extern */

void func_0207c6c8(void *arg0, void *arg1) {
    s32 temp_r4;
    s32 temp_r7;

    temp_r4 = M2C_FIELD(arg1, u16 *, 0x2C) << 0xC;
    temp_r7 = M2C_FIELD(arg1, u16 *, 0x2E) << 0xC;
    func_02068f28(temp_r7, temp_r4);
    M2C_FIELD(arg0, s32 *, 0)    = (s32) M2C_FIELD(arg1, s16 *, 0x22);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s16 *, 0x22);
    M2C_FIELD(arg0, s32 *, 4)    = (s32) ((s32) (M2C_FIELD(arg1, s16 *, 0x20) * func_02068fc8()) >> 0xC);
    func_02068f28(temp_r4, temp_r7);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg1, u16 *, 0x2C) * M2C_FIELD(arg1, s16 *, 0x20) * 0x10);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) ((0 - M2C_FIELD(arg1, u16 *, 0x2E)) * (M2C_FIELD(arg1, s16 *, 0x22) - 0x1000) * 0x10);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) ((s32) ((0 - M2C_FIELD(arg1, s16 *, 0x20)) * func_02068fc8()) >> 0xC);
}
