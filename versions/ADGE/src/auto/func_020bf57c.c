/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02003850(M2C_UNK, s32, M2C_UNK);           /* extern */
void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020c0840();                            /* extern */
extern void *data_02155660;

void func_020bf57c(M2C_UNK arg0, void *arg1) {
    s32 temp_r0_2;
    s32 var_ip;
    u32 temp_r0_3;
    u32 var_r4;
    void *temp_r0;

    temp_r0                               = func_020038a8(arg0, 0x74);
    data_02155660                         = temp_r0;
    M2C_FIELD(temp_r0, s32 *, 0x20)       = 0;
    M2C_FIELD(data_02155660, void **, 0)  = arg1;
    M2C_FIELD(data_02155660, s32 *, 0x34) = 0;
    M2C_FIELD(data_02155660, s32 *, 0x14) = 0;
    M2C_FIELD(data_02155660, s32 *, 0x18) = 0;
    M2C_FIELD(data_02155660, s32 *, 0x1C) = 0;
    var_ip                                = (M2C_FIELD(arg1, u16 *, 0x34) + 0x23) & ~0x1F;
    temp_r0_2                             = (M2C_FIELD(arg1, u16 *, 0x36) + 0x21) & ~0x1F;
    if (var_ip <= temp_r0_2) {
        var_ip = temp_r0_2;
    }
    M2C_FIELD(data_02155660, s32 *, 4) = var_ip;
    M2C_FIELD(data_02155660, s32 *, 8) = func_02003850(arg0, M2C_FIELD(data_02155660, s32 *, 4), 0x20);
    var_r4    = ((((M2C_FIELD(arg1, u16 *, 0x36) + 0xE) * M2C_FIELD(arg1, u16 *, 0x10)) + 0x29) & ~0x1F) * 2;
    temp_r0_3 = ((M2C_FIELD(arg1, u16 *, 0x34) + 0x55) & ~0x1F) * 2;
    if (var_r4 <= temp_r0_3) {
        var_r4 = temp_r0_3;
    }
    M2C_FIELD(data_02155660, u32 *, 0xC)  = var_r4;
    M2C_FIELD(data_02155660, s32 *, 0x10) = func_02003850(arg0, (s32) M2C_FIELD(data_02155660, u32 *, 0xC), 0x20);
    M2C_FIELD(data_02155660, s16 *, 0x3C) = 0;
    M2C_FIELD(data_02155660, s32 *, 0x40) = 0;
    M2C_FIELD(data_02155660, s16 *, 0x30) = 0;
    func_020c0840();
}
