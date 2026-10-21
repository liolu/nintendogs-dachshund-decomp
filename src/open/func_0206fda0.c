#include "m2c.h"
void func_0206cc0c(M2C_UNK, void *, M2C_UNK);
void func_02070074(void *);
extern s32 data_0214f574;
void func_0206fda0(u16 arg0, s32 arg1, M2C_UNK arg2, s32 arg3) {
    s32 block[7];
    u8 buf[0x80];

    block[0] = 6;
    M2C_FIELD(block, u16 *, 8) = arg0;
    block[4] = arg3;
    block[5] = arg1;
    block[6] = 0x28;
    func_0206cc0c(arg2, buf, 0x40);
    func_02070074(block);
}
