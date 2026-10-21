#include "m2c.h"
void func_0206cc0c();
void func_02070074();
extern s32 data_0214f574;
void func_0206fd48(u16 arg0, s32 arg1, M2C_UNK arg2, s32 arg3, M2C_UNK arg4, s32 arg5) {
    s32 block[7];
    u8 buf1[0x40];
    u8 buf2[0x40];

    block[0] = 4;
    M2C_FIELD(block, u16 *, 8) = arg0;
    block[4] = arg5;
    block[5] = arg1;
    block[6] = arg3;
    func_0206cc0c(arg2, buf1, 0x40);
    func_0206cc0c(arg4, buf2, 0x40);
    func_02070074(block);
}
