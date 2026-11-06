/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02003844(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020929b4();                            /* extern */
extern M2C_UNK func_0209aec0;
extern M2C_UNK func_0209b688;

void *func_0209ae60(M2C_UNK arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = func_02003844(arg0, 0x24);
    func_020929b4();
    M2C_FIELD(temp_r4, s16 *, 0)         = 8;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x14) = &func_0209b688;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x10) = &func_0209aec0;
    M2C_FIELD(temp_r4, s32 *, 0x1C)      = arg1;
    M2C_FIELD(temp_r4, s16 *, 0x20)      = 0;
    M2C_FIELD(temp_r4, s16 *, 4)         = 0x900;
    return temp_r4;
}
