/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_020038a8(s32 *, M2C_UNK);
void func_020f7e98(s32);
void func_020f8bf4(s32);

M2C_UNK func_020a7924(s32, s16);                    /* extern */

void func_020f8c7c(s32 arg0, s32 arg1, s32 arg2) {
    s16 temp_r1;
    s32 temp_r0;

    func_020a7924(arg0, (s16) arg2);
    M2C_FIELD(arg0, s32 *, 0x214)          = func_020038a8((s32 *) arg1, 0x3C);
    M2C_FIELD(arg0, void (**)(s32), 0x1F4) = func_020f8bf4;
    M2C_FIELD(arg0, void (**)(s32), 0x1F8) = func_020f7e98;
    temp_r0                                = M2C_FIELD(arg0, s32 *, 0x214);
    M2C_FIELD(temp_r0, s16 *, 0)           = 0;
    M2C_FIELD(temp_r0, s32 *, 4)           = 0;
    M2C_FIELD(arg0, s32 *, 0xB0)           = 0;
    M2C_FIELD(arg0, s32 *, 0xB4)           = 0;
    M2C_FIELD(arg0, s32 *, 0xB8)           = 0;
    M2C_FIELD(temp_r0, s32 *, 8)           = 0;
    M2C_FIELD(temp_r0, s32 *, 0x24)        = 0;
    M2C_FIELD(temp_r0, s32 *, 0x34)        = 0;
    temp_r1                                = M2C_FIELD(arg0, s16 *, 0x94);
    switch (temp_r1) {
        case 0x40:
            M2C_FIELD(arg0, s32 *, 0xF8)    = 0x333;
            M2C_FIELD(arg0, s16 *, 0xA6)    = 1;
            M2C_FIELD(arg0, s32 *, 0xAC)    = 0x5DC;
            M2C_FIELD(temp_r0, s32 *, 0xC)  = 0x600;
            M2C_FIELD(temp_r0, s32 *, 0x14) = 0x10;
            M2C_FIELD(temp_r0, s32 *, 0x1C) = 0x1D0;
            M2C_FIELD(temp_r0, s32 *, 0x20) = 0xD0;
            break;
        case 0x41:
            M2C_FIELD(arg0, s32 *, 0xF8)    = 0x333;
            M2C_FIELD(arg0, s16 *, 0xA6)    = 0;
            M2C_FIELD(arg0, s32 *, 0xAC)    = 0x708;
            M2C_FIELD(temp_r0, s32 *, 0xC)  = 0x800;
            M2C_FIELD(temp_r0, s32 *, 0x14) = 8;
            M2C_FIELD(temp_r0, s32 *, 0x1C) = 0x1D0;
            M2C_FIELD(temp_r0, s32 *, 0x20) = 0xD0;
            break;
        case 0x42:
            M2C_FIELD(arg0, s32 *, 0xF8)    = 0x333;
            M2C_FIELD(arg0, s16 *, 0xA6)    = 2;
            M2C_FIELD(arg0, s32 *, 0xAC)    = 0x5DC;
            M2C_FIELD(temp_r0, s32 *, 0xC)  = 0x400;
            M2C_FIELD(temp_r0, s32 *, 0x14) = 0x19;
            M2C_FIELD(temp_r0, s32 *, 0x1C) = 0x1D0;
            M2C_FIELD(temp_r0, s32 *, 0x20) = 0xD0;
            break;
    }
    M2C_FIELD(temp_r0, s32 *, 0x10) = (s32) M2C_FIELD(temp_r0, s32 *, 0xC);
    M2C_FIELD(temp_r0, s32 *, 0x18) = (s32) M2C_FIELD(temp_r0, s32 *, 0x14);
}
