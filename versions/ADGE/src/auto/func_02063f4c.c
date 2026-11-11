/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020638f4();                            /* extern */
s32 func_02063cb0(M2C_UNK, M2C_UNK);                /* extern */
s32 func_02063db4();                                /* extern */
M2C_UNK func_0206d29c(M2C_UNK, M2C_UNK);            /* extern */
extern s16 data_0214dfd0;
extern s32 data_0214dfd4;

s32 func_02063f4c(void) {
    s32 temp_r0;

    if (func_02063db4() != 0) {
        return 3;
    }
    temp_r0 = func_02063cb0(1, 0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020638f4();
    func_0206d29c(0xA, 0);
    data_0214dfd4 = 0;
    data_0214dfd0 = 0;
    return 0;
}
