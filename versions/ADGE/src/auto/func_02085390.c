/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0205df50(M2C_UNK, M2C_UNK);

extern u32 data_021541a4;

void func_02085390(s32 arg0, s32 arg1, s32 arg2) {
    u16 temp_r0;
    u16 temp_r3_2;
    u32 temp_r1_2;
    u32 temp_r6;
    u32 temp_r6_2;
    u32 var_r0;
    u8 temp_r1;
    u8 temp_r3;
    void *temp_r4;

    temp_r4 = M2C_FIELD(arg1, void **, 0xC);
    temp_r1 = M2C_FIELD(temp_r4, u8 *, 4);
    temp_r3 = M2C_FIELD(temp_r4, u8 *, 5);
    if (arg2 < (s32) temp_r1) {
        temp_r3_2 = M2C_FIELD(temp_r4, u16 *, 0);
        temp_r6   = temp_r3_2 << 0x1B;
        var_r0 =
            func_0205df50(arg2 * (((u32) (temp_r3_2 << 0x16) >> 0x1B) - (temp_r6 >> 0x1B)), (s32) temp_r1) + (temp_r6 >> 0x1B);
    } else if (arg2 < (s32) temp_r3) {
        var_r0 = (u32) (M2C_FIELD(temp_r4, u16 *, 0) << 0x16) >> 0x1B;
    } else {
        temp_r0   = M2C_FIELD(temp_r4, u16 *, 0);
        temp_r6_2 = temp_r0 << 0x11;
        var_r0    = func_0205df50((arg2 - 0xFF) * ((temp_r6_2 >> 0x1B) - ((u32) (temp_r0 << 0x16) >> 0x1B)), 0xFF - temp_r3) +
                 (temp_r6_2 >> 0x1B);
    }
    temp_r1_2     = (data_021541a4 * 0x5EEDF715) + 0x1B0CB173;
    data_021541a4 = temp_r1_2;
    M2C_FIELD(arg0, u16 *, 0x40) =
        (u16) ((M2C_FIELD(arg0, u16 *, 0x40) & ~0x3E0) |
               ((((u32) ((var_r0 * (0xFF - ((s32) (M2C_FIELD(temp_r4, u8 *, 2) * (temp_r1_2 >> 0x18)) >> 8))) << 8) >> 0x10) &
                 0x1F)
                << 5));
}
