/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020bdb98(s32);                             /* extern */
extern void *data_02153740;

void func_020aafc4(s32 arg0) {
    if (func_020bdb98(arg0 + 0x6C) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x352C) = 1;
        return;
    }
    if (func_020bdb98(arg0 + 0xA8) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x352C) = 1;
        return;
    }
    if (func_020bdb98(arg0 + 0xE4) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x352C) = 4;
        M2C_FIELD(data_02153740, s32 *, 0x9A0)  = (s32) M2C_FIELD(data_02153740, s32 *, 0xB8);
        return;
    }
    if (func_020bdb98(arg0 + 0x120) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x352C) = 4;
        M2C_FIELD(data_02153740, s32 *, 0x9A0)  = (s32) M2C_FIELD(data_02153740, s32 *, 0xB8);
        return;
    }
    if (func_020bdb98(arg0 + 0x15C) == 0) {
        return;
    }
    M2C_FIELD(data_02153740, s32 *, 0x34C8) = 0;
    M2C_FIELD(data_02153740, s32 *, 0x352C) = 3;
}
