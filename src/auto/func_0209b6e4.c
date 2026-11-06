/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02003844(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020929b4();                            /* extern */
extern M2C_UNK func_0209b73c;
extern M2C_UNK func_0209b84c;

void *func_0209b6e4(M2C_UNK arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = func_02003844(arg0, 0x24);
    func_020929b4();
    M2C_FIELD(temp_r4, s16 *, 0)         = 9;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x14) = &func_0209b84c;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x10) = &func_0209b73c;
    M2C_FIELD(temp_r4, s32 *, 0x1C)      = arg1;
    M2C_FIELD(temp_r4, s32 *, 0x20)      = -1;
    return temp_r4;
}
