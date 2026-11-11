/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020bdb98(s32);                             /* extern */
extern void *data_02153740;

void func_020bc984(s32 arg0) {
    if (func_020bdb98(arg0 + 0x18) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x9F0) = 3;
    }
    if (func_020bdb98(arg0 + 0x54) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x9F0) = 2;
    }
    if (func_020bdb98(arg0 + 0x90) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x9F0) = 1;
    }
    func_020bdb98(arg0 + 0xCC);
    func_020bdb98(arg0 + 0x108);
    func_020bdb98(arg0 + 0x144);
    if (func_020bdb98(arg0 + 0x180) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x9F0) = 4;
    }
    if (func_020bdb98(arg0 + 0x1BC) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x9F0) = 5;
    }
    if (func_020bdb98(arg0 + 0x1F8) != 0) {
        M2C_FIELD(data_02153740, s32 *, 0x9F0) = 6;
    }
}
