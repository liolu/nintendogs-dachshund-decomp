#include "m2c.h"
#pragma opt_strength_reduction off
extern u8 *data_02159e70;
extern void *data_0215a034;
extern void *data_0215a04c;
extern u8 *data_0214da84;
s32 func_020ec050(s32, u16);
void func_020eb9fc(s32, u16, s32);
void func_020d5a60(s32, s32);
void *func_020038a8(s32 arg0, s32 arg1);
void func_020fdc5c(s32 arg0);
void func_020fd470(void *arg0);
void func_020fdb30(void);
void func_020fe4cc(void);
#pragma opt_strength_reduction off
void func_020df7e4(M2C_UNK arg0) {
    u32 i;

    M2C_FIELD(arg0, s32 *, 0x00) = 0;
    M2C_FIELD(arg0, s32 *, 0x04) = 0;
    M2C_FIELD(arg0, s32 *, 0x08) = 0;
    M2C_FIELD(arg0, s32 *, 0x0C) = 0;
    M2C_FIELD(arg0, s32 *, 0x10) = 0;
    M2C_FIELD(arg0, s32 *, 0x14) = 0;
    M2C_FIELD(arg0, s32 *, 0x18) = 0;
    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
    M2C_FIELD(arg0, s32 *, 0x20) = 0;
    M2C_FIELD(arg0, s32 *, 0x24) = 0;
    M2C_FIELD(arg0, s32 *, 0x34) = 0;
    M2C_FIELD(arg0, s16 *, 0x38) = -1;
    for (i = 0; i < 3; i++) {
        M2C_FIELD(arg0, s32 *, 0x28 + i * 4) = -1;
    }
}
