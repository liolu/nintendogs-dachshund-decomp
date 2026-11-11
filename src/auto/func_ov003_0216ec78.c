/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02023770(M2C_UNK);                         /* extern */
void *func_02024104(M2C_UNK, s32);                  /* extern */
M2C_UNK func_02028fd4(M2C_UNK, s16, u8);            /* extern */
M2C_UNK func_0203e5e8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_ov003_021728e4(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, s32, s32, s32); /* extern */

void func_ov003_0216ec78(M2C_UNK arg0) {
    void *temp_r0;

    if (func_ov003_021728e4(arg0, 1, 0x49, 0x4A, 0x4B, 0x4C, 0xA) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0xED);
    temp_r0 = func_02024104(arg0, func_02023770(arg0));
    if (temp_r0 == NULL) {
        return;
    }
    func_02028fd4(arg0, (s16) (M2C_FIELD(temp_r0, u16 *, 0) + 0xC), M2C_FIELD(temp_r0, u8 *, 0x28));
}
