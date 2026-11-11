/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02003844(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020929b4();                            /* extern */
extern M2C_UNK func_020991ac;
extern M2C_UNK func_0209941c;

void *func_02099164(M2C_UNK arg0) {
    void *temp_r4;

    temp_r4 = func_02003844(arg0, 0x20);
    func_020929b4();
    M2C_FIELD(temp_r4, s16 *, 0)         = 3;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x10) = &func_020991ac;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x14) = &func_0209941c;
    M2C_FIELD(temp_r4, s16 *, 0x1C)      = -1;
    return temp_r4;
}
