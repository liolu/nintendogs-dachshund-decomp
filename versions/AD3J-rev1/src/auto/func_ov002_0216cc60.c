/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_ov002_02170464(void *, s32, s32, s32, s32, s32, s32);
void func_0203e2b8(void *, s32);
void func_ov002_0218a100(void *, s32);

void func_ov002_0216cc60(void *arg0) {
    u16 temp_r0;

    if (func_ov002_02170464(arg0, 1, 0x49, 0x4A, 0x4B, 0x4C, 0x64) == 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 0xF4);
    if (((u32) temp_r0 >= 0x4FU) && ((u32) temp_r0 < 0x63U)) {
        func_0203e2b8(arg0, 0x437);
        return;
    }
    func_ov002_0218a100(arg0, 2);
}
