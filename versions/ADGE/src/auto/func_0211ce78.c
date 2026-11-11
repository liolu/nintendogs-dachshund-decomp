/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_02114124();                            /* extern */
extern M2C_UNK func_0211ced0;
extern M2C_UNK func_0211cfe0;

void *func_0211ce78(M2C_UNK arg0, s32 arg1) {
    void *temp_r4;

    temp_r4 = func_020038a8(arg0, 0x24);
    func_02114124();
    M2C_FIELD(temp_r4, s16 *, 0)         = 9;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x14) = &func_0211cfe0;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x10) = &func_0211ced0;
    M2C_FIELD(temp_r4, s32 *, 0x1C)      = arg1;
    M2C_FIELD(temp_r4, s32 *, 0x20)      = -1;
    return temp_r4;
}
