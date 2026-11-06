/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern u32 data_0215367c;

void func_02089114(void *arg0, void *arg1, void *arg2) {
    s16 temp_lr;
    s16 temp_lr_2;
    s16 temp_r2;
    u32 temp_ip;
    u32 temp_ip_2;
    u32 temp_r0;

    if (((s32) M2C_FIELD(arg1, u16 *, 0x2E) % (s32) M2C_FIELD(arg0, u16 *, 6)) != 0) {
        return;
    }
    temp_ip       = (data_0215367c * 0x5EEDF715) + 0x1B0CB173;
    data_0215367c = temp_ip;
    temp_lr       = M2C_FIELD(arg0, s16 *, 0);
    M2C_FIELD(arg2, s32 *, 0) =
        (s32) (M2C_FIELD(arg2, s32 *, 0) + ((s32) ((temp_lr * (temp_ip >> 0x17)) - (temp_lr << 8)) >> 8));
    temp_ip_2     = (data_0215367c * 0x5EEDF715) + 0x1B0CB173;
    data_0215367c = temp_ip_2;
    temp_lr_2     = M2C_FIELD(arg0, s16 *, 2);
    M2C_FIELD(arg2, s32 *, 4) =
        (s32) (M2C_FIELD(arg2, s32 *, 4) + ((s32) ((temp_lr_2 * (temp_ip_2 >> 0x17)) - (temp_lr_2 << 8)) >> 8));
    temp_r0       = (data_0215367c * 0x5EEDF715) + 0x1B0CB173;
    data_0215367c = temp_r0;
    temp_r2       = M2C_FIELD(arg0, s16 *, 4);
    M2C_FIELD(arg2, s32 *, 8) =
        (s32) (M2C_FIELD(arg2, s32 *, 8) + ((s32) ((temp_r2 * (temp_r0 >> 0x17)) - (temp_r2 << 8)) >> 8));
}
