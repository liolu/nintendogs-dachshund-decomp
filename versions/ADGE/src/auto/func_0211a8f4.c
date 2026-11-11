/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_02114124();                            /* extern */
extern M2C_UNK func_0211a93c;
extern M2C_UNK func_0211abac;

void *func_0211a8f4(M2C_UNK arg0) {
    void *temp_r4;

    temp_r4 = func_020038a8(arg0, 0x20);
    func_02114124();
    M2C_FIELD(temp_r4, s16 *, 0)         = 3;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x10) = &func_0211a93c;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x14) = &func_0211abac;
    M2C_FIELD(temp_r4, s16 *, 0x1C)      = -1;
    return temp_r4;
}
