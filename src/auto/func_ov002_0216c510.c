/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0202373c(M2C_UNK);                         /* extern */
void *func_020240d0(M2C_UNK, s32);                  /* extern */
M2C_UNK func_02028f90(M2C_UNK, s16, u8);            /* extern */
M2C_UNK func_0203e2b8(M2C_UNK, M2C_UNK);            /* extern */
s32 func_ov002_02170464(M2C_UNK, M2C_UNK, s32, s32, s32, s32, s32); /* extern */

void func_ov002_0216c510(M2C_UNK arg0) {
    void *temp_r0;

    if (func_ov002_02170464(arg0, 0, 0x1F1, 0x1F2, 0x1FD, 0x1FE, 0xA) == 0) {
        return;
    }
    func_0203e2b8(arg0, 0xF1);
    temp_r0 = func_020240d0(arg0, func_0202373c(arg0));
    if (temp_r0 == NULL) {
        return;
    }
    func_02028f90(arg0, (s16) (M2C_FIELD(temp_r0, u16 *, 0) + 0xC), M2C_FIELD(temp_r0, u8 *, 0x28));
}
