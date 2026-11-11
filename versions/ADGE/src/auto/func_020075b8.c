/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020038a8(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0207cb84(s32, M2C_UNK);                /* extern */
extern s32 data_0214d754;

void func_020075b8(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020038a8(arg0, 0x300);
    func_0207cb84(temp_r0, 0x30);
    data_0214d754 = temp_r0;
}
