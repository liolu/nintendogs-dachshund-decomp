/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_020b8f2c(s32, s16);                        /* extern */
s16 func_020b8f58(s32, s16);                        /* extern */

void func_020be288(void *arg0, s32 arg1, s32 arg2, s16 arg3, s16 arg4, s16 arg5, u16 arg6) {
    M2C_FIELD(arg0, s32 *, 0)    = arg1;
    M2C_FIELD(arg0, s32 *, 4)    = arg2;
    M2C_FIELD(arg0, s16 *, 8)    = arg3;
    M2C_FIELD(arg0, s16 *, 0xA)  = arg4;
    M2C_FIELD(arg0, s16 *, 0xC)  = arg5;
    M2C_FIELD(arg0, u16 *, 0xE)  = arg6;
    M2C_FIELD(arg0, u16 *, 0x10) = 0U;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s16 *, 0x1C) = 0;
    M2C_FIELD(arg0, s16 *, 0x18) = func_020b8f58(arg1, arg3);
    M2C_FIELD(arg0, s16 *, 0x1A) = func_020b8f2c(arg1, arg3);
    M2C_FIELD(arg0, u16 *, 0x1E) = (u16) M2C_FIELD(arg0, u16 *, 0x10);
}
