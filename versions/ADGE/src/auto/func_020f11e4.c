/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020ebe24(M2C_UNK, M2C_UNK);
M2C_UNK func_020ebe54(M2C_UNK, M2C_UNK);

void func_020f11e4(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4, s16 arg5, u16 arg6) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 4)    = arg2;
    M2C_FIELD(arg0, s16 *, 8)    = (s16) arg3;
    M2C_FIELD(arg0, s16 *, 0xA)  = arg4;
    M2C_FIELD(arg0, s16 *, 0xC)  = arg5;
    M2C_FIELD(arg0, u16 *, 0xE)  = arg6;
    M2C_FIELD(arg0, u16 *, 0x10) = 0U;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x18) = (s16) func_020ebe54(arg1, arg3);
    M2C_FIELD(arg0, s16 *, 0x1A) = (s16) func_020ebe24(arg1, arg3);
    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
}
