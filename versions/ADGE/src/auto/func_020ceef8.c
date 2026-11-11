/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern void *data_02159e38;

void func_020ceef8(s32 arg0) {
    void *temp_r2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(data_02159e38, void **, 0x141C);
    temp_r2 = temp_r3 + 0x60;
    if (M2C_FIELD(temp_r2, s32 *, 0x18) == arg0) {
        return;
    }
    M2C_FIELD(temp_r2, s32 *, 0x18) = arg0;
    if ((s32) M2C_FIELD(temp_r2, s32 *, 0x18) > 0x05F5E0FF) {
        M2C_FIELD(temp_r2, s32 *, 0x18) = 0x05F5E0FF;
    }
    M2C_FIELD(temp_r3, u16 *, 0x6AE) = (u16) (M2C_FIELD(temp_r3, u16 *, 0x6AE) | 1);
}
