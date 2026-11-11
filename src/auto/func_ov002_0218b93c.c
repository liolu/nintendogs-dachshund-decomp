/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020351a0();                                /* extern */
M2C_UNK func_0203e2b8(M2C_UNK, M2C_UNK);            /* extern */
extern s32 *data_0214b484;

void func_ov002_0218b93c(M2C_UNK arg0) {
    s32 temp_r1;
    u16 temp_r0;

    if (func_020351a0() == 0) {
        return;
    }
    temp_r1        = (*data_0214b484 * 0x10DCD) + 1;
    *data_0214b484 = temp_r1;
    temp_r0        = (u16) ((u32) (temp_r1 << 0x10) >> 0x1F);
    switch (temp_r0) {                              /* irregular */
        case 0:
            func_0203e2b8(arg0, 0x84);
            return;
        case 1:
            func_0203e2b8(arg0, 0x86);
            return;
    }
}
