/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a6444();                            /* extern */
s32 func_020bdb98(s32);                             /* extern */
extern void *data_02153740;

void func_020a627c(s32 arg0) {
    func_020a6444();
    if (func_020bdb98(arg0 + 4) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x950)  = 3;
        M2C_FIELD(data_02153740, s32 *, 0x3530) = 3;
    }
    if (func_020bdb98(arg0 + 0x40) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x950)  = 4;
        M2C_FIELD(data_02153740, s32 *, 0x3530) = 4;
    }
    if (func_020bdb98(arg0 + 0x7C) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x950)  = 5;
        M2C_FIELD(data_02153740, s32 *, 0x3530) = 5;
    }
    if (func_020bdb98(arg0 + 0xB8) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x950)  = 1;
        M2C_FIELD(data_02153740, s32 *, 0x3530) = 1;
    }
    if (func_020bdb98(arg0 + 0xF4) == 0) {
        return;
    }
    M2C_FIELD(data_02153740, s32 *, 0x950)  = 2;
    M2C_FIELD(data_02153740, s32 *, 0x3530) = 2;
}
