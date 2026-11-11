/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov003_021729a4(void *, s32, s32, s32);
void func_0203e5e8(void *, s32);
void func_ov003_0218c400(void *, s32);

void func_ov003_0216f530(void *arg0) {
    s32 temp_r0;
    s16 temp_r2;
    u16 temp_r0_2;

    temp_r0 = func_ov003_021729a4(arg0, 0x11D, -1, 0);
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
    func_ov003_0218c400(arg0, 4);
}
