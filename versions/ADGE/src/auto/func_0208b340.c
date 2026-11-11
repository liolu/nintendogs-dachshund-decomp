/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208b9c8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_02099670(s32, M2C_UNK, M2C_UNK);       /* extern */
M2C_UNK func_020997dc();                            /* extern */
extern M2C_UNK data_02154300;

s32 func_0208b340(M2C_UNK arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(&data_02154300, s32 *, 0x10);
    if (temp_r4 == 0) {
        return 0;
    }
    func_020997dc();
    func_02099670(temp_r4, 0x5A, 0);
    func_0208b9c8(arg0, 7);
    return 1;
}
