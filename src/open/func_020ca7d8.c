#include "m2c.h"
void func_0207cfd4(M2C_UNK, u16);
void func_020ca7d8(M2C_UNK arg0, s16 arg1, s32 arg2) {
    s8 (*base)[0xc] = (s8 (*)[0xc]) M2C_FIELD(M2C_FIELD(arg0, M2C_UNK *, 0x1c), M2C_UNK *, 0x5c);
    M2C_FIELD(base[arg1], s32 *, 0x8) = arg2;
}
