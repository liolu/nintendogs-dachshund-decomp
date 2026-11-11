/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02027530();                              /* extern */
s32 func_020276f8(M2C_UNK);                         /* extern */
s32 func_0204474c(s32, s16);                        /* extern */
extern s32 data_021544d8;

s32 func_020914bc(M2C_UNK arg0, s16 arg1) {
    void *temp_r4;

    temp_r4                         = func_02027530();
    data_021544d8                   = func_0204474c(func_020276f8(arg0), arg1);
    M2C_FIELD(temp_r4, s16 *, 0x80) = arg1;
    M2C_FIELD(temp_r4, s32 *, 0x84) = 0;
    M2C_FIELD(temp_r4, s16 *, 0x8A) = 0x10;
    return 1;
}
