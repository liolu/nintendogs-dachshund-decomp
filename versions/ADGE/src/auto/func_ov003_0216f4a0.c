/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0203e5e8(void *, s32);                 /* extern */
s32 func_ov003_021729a4(void *, s32, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_ov003_0218c400(void *, M2C_UNK);       /* extern */

void func_ov003_0216f4a0(void *arg0) {
    s16 temp_r2;
    s32 temp_r0;
    u16 temp_r0_2;

    temp_r0 = func_ov003_021729a4(arg0, 0x11E, 0x70, 0xE000);
    temp_r2 = M2C_FIELD(arg0, s16 *, 0xEA);
    if (((s32) temp_r2 >= 0x119) && ((s32) temp_r2 <= 0x121)) {
        return;
    }
    if (temp_r0 == 0) {
        return;
    }
    temp_r0_2 = M2C_FIELD(arg0, u16 *, 0xF4);
    if (((u32) temp_r0_2 >= 0x4FU) && ((u32) temp_r0_2 < 0x63U)) {
        func_0203e5e8(arg0, 0x438);
        return;
    }
    func_ov003_0218c400(arg0, 5);
}
