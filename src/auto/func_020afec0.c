/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a3788(M2C_UNK, void *, s32, M2C_UNK); /* extern */
extern void *data_02153740;

void func_020afec0(s32 *arg0) {
    s32 temp_r2;

    *arg0 -= 1;
    temp_r2 = *arg0;
    if (temp_r2 < 0) {
        M2C_FIELD(data_02153740, s32 *, 0x34D8) = 1;
        return;
    }
    func_020a3788(2, ((s8 *) arg0 + 0xF0), temp_r2, 0x10);
}
