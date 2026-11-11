/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02003844(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020929b4();                            /* extern */
extern M2C_UNK func_0209ef24;
extern M2C_UNK func_0209efe0;

void *func_0209eecc(M2C_UNK arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = func_02003844(arg0, 0x20);
    func_020929b4();
    M2C_FIELD(temp_r4, s16 *, 0)         = 0xD;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x10) = &func_0209ef24;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x14) = &func_0209efe0;
    M2C_FIELD(temp_r4, s16 *, 2)         = 0;
    M2C_FIELD(temp_r4, s32 *, 0x1C)      = arg1;
    return temp_r4;
}
