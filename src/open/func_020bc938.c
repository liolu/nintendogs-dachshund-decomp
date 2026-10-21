#include "m2c.h"
s32 func_01ffdb08(s32);
s32 func_020b1ddc(s32, s32, s32, s32);
s32 func_020bc938(s32 *arg0, s32 arg1, s32 arg2) {
    u8 sp0[12];
    s32 i;
    s32 found;
    s32 h;

    found = 0;
    h = func_01ffdb08(arg1);
    if (h == 0) {
        return 0;
    }
    for (i = 0; i < M2C_FIELD(arg0, s32 *, 0); i++) {
        M2C_FIELD(sp0, s32 *, 0) = 0;
        M2C_FIELD(sp0, s32 *, 4) = 0;
        M2C_FIELD(sp0, s32 *, 8) = 0;
        if (func_020b1ddc(h, M2C_FIELD(arg0, s32 *, 4) + i * 0xC, arg2, (s32) sp0) != 0) {
            found = 1;
        }
    }
    return found;
}
