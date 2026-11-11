/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0203e2b8(void *, s32);                 /* extern */
s32 func_ov002_02170464(void *, M2C_UNK, s32, s32, s32, s32, s32); /* extern */
M2C_UNK func_ov002_0218a100(void *, M2C_UNK);       /* extern */

void func_ov002_0216cd78(void *arg0) {
    u16 temp_r0;

    if (func_ov002_02170464(arg0, 0, 0x1ED, 0x1EE, 0x1F9, 0x1FA, 0x64) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 0xF4);
    if (((u32) temp_r0 >= 0x4FU) && ((u32) temp_r0 < 0x63U)) {
        func_0203e2b8(arg0, 0x437);
        return;
    }
    func_ov002_0218a100(arg0, 0);
}
