/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02003844(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0207d1cc(s32, M2C_UNK);                /* extern */
extern s32 data_0214b154;

void func_02007554(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_02003844(arg0, 0x300);
    func_0207d1cc(temp_r0, 0x30);
    data_0214b154 = temp_r0;
}
