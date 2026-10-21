#include "m2c.h"
#include "engine.h"
#pragma opt_strength_reduction off
extern void *data_0214cf54;
extern u8 data_0214cfe0[];
void func_0206cbc4(M2C_UNK, void *, M2C_UNK);
s32 func_020092e4(M2C_UNK, M2C_UNK);
void func_020b777c(s32 arg0, s32 arg1, s32 arg2, s32 arg3, s32 arg4);
M2C_UNK func_020cba74(M2C_UNK);
void func_0207ca98(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
extern M2C_UNK data_02145614[];
#pragma opt_strength_reduction off
void func_02007c18(M2C_UNK arg0, u16 arg1) {
    s32 i;
    u16 *p;

    M2C_FIELD(arg0, u16 *, 0x00) = 0;
    M2C_FIELD(arg0, u16 *, 0x02) = 0;
    M2C_FIELD(arg0, u16 *, 0x04) = 0;
    M2C_FIELD(arg0, u16 *, 0x06) = 0;
    M2C_FIELD(arg0, u16 *, 0x08) = 0;
    M2C_FIELD(arg0, u16 *, 0x0A) = arg1;
    M2C_FIELD(arg0, s32 *, 0x0C) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, u16 *, 0x1C) = 0;
    M2C_FIELD(arg0, u16 *, 0x1E) = 0;
    M2C_FIELD(arg0, u16 *, 0x20) = 0;
    M2C_FIELD(arg0, u16 *, 0x22) = 0;
    p = (u16 *) arg0;
    for (i = 0; i < 0xC0; i++) {
        p[i + 0x12] = 0;
        p[i + 0xD2] = 0;
    }
}
