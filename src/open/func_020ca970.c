#include "m2c.h"
s32 func_020c94c0(s32, s32, s32, s32);
s32 func_0207832c(s32);
void func_020ca970(s32 arg0, s32 arg1, s32 arg2) {
    M2C_FIELD(arg0, s16 *, 0x70) = (s16) arg2;
    M2C_FIELD(arg0, s32 *, 0x7C) = func_020c94c0(arg1, arg2, M2C_FIELD(arg0, s32 *, 0x1C) + 4,
                                                  func_0207832c(M2C_FIELD(M2C_FIELD(M2C_FIELD(arg0, s32 *, 0x1C), s32 *, 0), s32 *, 8)));
}
