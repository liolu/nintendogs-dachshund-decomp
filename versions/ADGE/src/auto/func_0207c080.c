/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02067b30(M2C_UNK, M2C_UNK);
M2C_UNK func_02067bd0(void);

void func_0207c080(s32 arg0, s32 arg1) {
    s32 temp_r4;
    s32 temp_r7;

    temp_r4 = M2C_FIELD(arg1, u16 *, 0x2C) << 0xC;
    temp_r7 = M2C_FIELD(arg1, u16 *, 0x2E) << 0xC;
    func_02067b30(temp_r7, temp_r4);
    M2C_FIELD(arg0, s32 *, 0)    = (s32) M2C_FIELD(arg1, s16 *, 0x22);
    M2C_FIELD(arg0, s32 *, 0x14) = (s32) M2C_FIELD(arg1, s16 *, 0x22);
    M2C_FIELD(arg0, s32 *, 4)    = (s32) ((s32) (M2C_FIELD(arg1, s16 *, 0x20) * func_02067bd0()) >> 0xC);
    func_02067b30(temp_r4, temp_r7);
    M2C_FIELD(arg0, s32 *, 0x30) = (s32) (M2C_FIELD(arg1, u16 *, 0x2C) * M2C_FIELD(arg1, s16 *, 0x20) * 0x10);
    M2C_FIELD(arg0, s32 *, 0x34) = (s32) ((0 - M2C_FIELD(arg1, u16 *, 0x2E)) * (M2C_FIELD(arg1, s16 *, 0x22) - 0x1000) * 0x10);
    M2C_FIELD(arg0, s32 *, 0x10) = (s32) ((s32) ((0 - M2C_FIELD(arg1, s16 *, 0x20)) * func_02067bd0()) >> 0xC);
}
