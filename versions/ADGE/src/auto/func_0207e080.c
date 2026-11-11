/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207d280(); /* extern */

void *func_0207e080(void *arg0, M2C_UNK arg1, s32 arg2) {
    void *temp_r4;

    temp_r4 = arg0 + 0x24;
    func_0207d280(arg0, 0x46524D48, temp_r4 + 0xC, arg1, arg2);
    M2C_FIELD(arg0, s32 *, 0x24) = (s32) M2C_FIELD(arg0, s32 *, 0x18);
    M2C_FIELD(temp_r4, s32 *, 4) = (s32) M2C_FIELD(arg0, s32 *, 0x1C);
    M2C_FIELD(temp_r4, s32 *, 8) = 0;
    return arg0;
}
