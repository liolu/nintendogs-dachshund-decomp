/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_0207b1a4(s32 *arg0, void *arg1, s32 arg2) {
    u32 temp_r2;
    void *temp_lr;

    temp_lr = M2C_FIELD(arg1, void **, 8);
    temp_r2 = (((s32) M2C_FIELD(arg1, s32 *, 0) >> 0xC) * M2C_FIELD(temp_lr, u16 *, 6)) + arg2;
    *arg0   = M2C_FIELD((temp_lr + ((temp_r2 >> 5) * 4)), s32 *, 0xC) & (1 << (temp_r2 & 0x1F));
}
