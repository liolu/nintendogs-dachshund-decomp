/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020d59e0(M2C_UNK);
void func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_020f0fd8(M2C_UNK);

void func_020f285c(s32 arg0) {
    s32 temp_r0_2;
    u32 temp_r0;

    temp_r0 = M2C_FIELD(arg0, u32 *, 4);
    switch (temp_r0) {
        case 3:
            break;
        default:
            break;
        case 0:
            if (M2C_FIELD(arg0, s32 *, 0x28) == 0) {
                func_020f0fd8(arg0 + 8);
            }
            if ((s32) M2C_FIELD(arg0, s32 *, 0x28) >= 0x23) {
                M2C_FIELD(arg0, u32 *, 4)    = 1U;
                M2C_FIELD(arg0, s32 *, 0x28) = 0;
                func_020eb9fc(2, 1, 0);
            }
            break;
        case 1:
            temp_r0_2 = M2C_FIELD(arg0, s32 *, 0x28);
            if (temp_r0_2 > 0x20) {
                M2C_FIELD(arg0, u32 *, 4)    = 2U;
                M2C_FIELD(arg0, s32 *, 0x28) = 0;
                func_020eb9fc(2, 0, 0);
            } else if (temp_r0_2 <= 0x20) {
                func_020d59e0((s32) ((u32) ((temp_r0_2 + ((u32) temp_r0_2 >> 0x1F)) << 0xF) >> 0x10));
            }
            break;
        case 2:
            if ((s32) M2C_FIELD(arg0, s32 *, 0x28) > 0x3C) {
                M2C_FIELD(arg0, s32 *, 0x28) = 0;
                M2C_FIELD(arg0, u32 *, 4)    = 3U;
            }
            break;
    }
    M2C_FIELD(arg0, s32 *, 0x28) = (s32) (M2C_FIELD(arg0, s32 *, 0x28) + 1);
}
