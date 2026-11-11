/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_02114124();                            /* extern */
extern M2C_UNK func_02124894;
extern M2C_UNK func_02124904;

void *func_0212484c(M2C_UNK arg0) {
    void *temp_r4;

    temp_r4 = func_020038a8(arg0, 0x1C);
    func_02114124();
    M2C_FIELD(temp_r4, s16 *, 0)         = 0x10;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x10) = &func_02124894;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x14) = &func_02124904;
    M2C_FIELD(temp_r4, s16 *, 2)         = 0;
    return temp_r4;
}
