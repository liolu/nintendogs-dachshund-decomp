/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ec2a0(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020f9dfc(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020f9f68();                            /* extern */
extern M2C_UNK data_02154d88;

s32 func_020ebc48(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(&data_02154d88, s32 *, 0x10);
    if (temp_r4 == 0) {
        return 0;
    }
    func_020f9f68();
    func_020f9dfc(temp_r4, 0x5A, 0);
    func_020ec2a0(arg0, 7);
    return 1;
}
