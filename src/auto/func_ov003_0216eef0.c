/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_0203e5e8(void *, s32);                 /* extern */
s32 func_ov003_021728e4(void *, M2C_UNK, M2C_UNK, s32, s32, s32, s32); /* extern */
M2C_UNK func_ov003_0218c400(void *, M2C_UNK);       /* extern */

void func_ov003_0216eef0(void *arg0) {
    u16 temp_r0;

    if (func_ov003_021728e4(arg0, 0, 0x1F4, 0x1F5, 0x200, 0x201, 0x64) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 0xF4);
    if (((u32) temp_r0 >= 0x4FU) && ((u32) temp_r0 < 0x63U)) {
        func_0203e5e8(arg0, 0x438);
        return;
    }
    func_ov003_0218c400(arg0, 6);
}
