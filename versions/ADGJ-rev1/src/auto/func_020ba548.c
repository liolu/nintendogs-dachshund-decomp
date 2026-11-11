/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020bdb98(s32);                             /* extern */
M2C_UNK func_020bddb8(s32, M2C_UNK);                /* extern */
extern void *data_02153740;

void func_020ba548(s32 arg0) {
    if (func_020bdb98(arg0 + 8) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x9E0) = 0;
    }
    if (func_020bdb98(arg0 + 0x44) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x9E0) = 1;
    }
    if (func_020bdb98(arg0 + 0x80) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x9E0) = 2;
    }
    func_020bddb8(arg0 + 0xBC, 0);
    func_020bddb8(arg0 + 0xDC, 0);
    func_020bddb8(arg0 + 0xFC, 0);
}
