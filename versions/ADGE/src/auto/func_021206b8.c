/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_02114124();                            /* extern */
extern M2C_UNK func_02120710;
extern M2C_UNK func_021207cc;

void *func_021206b8(M2C_UNK arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = func_020038a8(arg0, 0x20);
    func_02114124();
    M2C_FIELD(temp_r4, s16 *, 0)         = 0xD;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x10) = &func_02120710;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x14) = &func_021207cc;
    M2C_FIELD(temp_r4, s16 *, 2)         = 0;
    M2C_FIELD(temp_r4, s32 *, 0x1C)      = arg1;
    return temp_r4;
}
