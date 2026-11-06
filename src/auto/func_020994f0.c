/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02003844(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020929b4();                            /* extern */
extern M2C_UNK func_02099530;
extern M2C_UNK func_02099740;

void *func_020994f0(M2C_UNK arg0) {
    void *temp_r4;

    temp_r4 = func_02003844(arg0, 0x20);
    func_020929b4();
    M2C_FIELD(temp_r4, s16 *, 0)         = 4;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x10) = &func_02099530;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x14) = &func_02099740;
    return temp_r4;
}
