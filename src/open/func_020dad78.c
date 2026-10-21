#include "m2c.h"
extern void *data_02159e74;
void func_020dac4c(s32 arg0, s32 arg1);
s32 func_020dad78(s32 arg0, s32 arg1, s32 arg2, u16 arg3, u16 arg4, u16 arg5, u16 arg6, u16 arg7, u16 arg8, u16 arg9) {
    s32 i;
    s32 result;
    s8 *p;
    s8 *q;

    result = -1;
    p = (s8 *) data_02159e74 + 4;
    for (i = 0; i < 0x18; i++, p += 0x1B8) {
        if (M2C_FIELD(p, s32 *, 4) == 0) {
            M2C_FIELD(p, s32 *, 4) = 1;
            M2C_FIELD(p, u16 *, 0xC) = arg5;
            M2C_FIELD(p, u16 *, 0xE) = arg6;
            M2C_FIELD(p, s32 *, 0x14) = arg5 * arg6 * 0x20;
            M2C_FIELD(p, s32 *, 0x18) = arg1;
            q = p + 0x18;
            M2C_FIELD(q, u16 *, 8) = arg3;
            M2C_FIELD(q, u16 *, 0xA) = arg4;
            M2C_FIELD(q, s32 *, 4) = arg2;
            M2C_FIELD(q, u16 *, 0x1E) = arg8;
            M2C_FIELD(q, u16 *, 0x1C) = arg7;
            M2C_FIELD(q, u16 *, 0x24) = arg9;
            result = i;
            func_020dac4c(arg0, (s32) p);
            break;
        }
    }
    return result;
}
