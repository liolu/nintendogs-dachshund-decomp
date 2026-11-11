/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020f0af4(s32);                             /* extern */
M2C_UNK func_020f0d14(s32, M2C_UNK);                /* extern */
extern void *data_02159e70;

void func_020ed470(s32 arg0) {
    if (func_020f0af4(arg0 + 8) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x1D70) = 0;
    }
    if (func_020f0af4(arg0 + 0x44) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x1D70) = 1;
    }
    if (func_020f0af4(arg0 + 0x80) != 0) {
        M2C_FIELD(data_02159e70, s32 *, 0x1D70) = 2;
    }
    func_020f0d14(arg0 + 0xBC, 0);
    func_020f0d14(arg0 + 0xDC, 0);
    func_020f0d14(arg0 + 0xFC, 0);
}
