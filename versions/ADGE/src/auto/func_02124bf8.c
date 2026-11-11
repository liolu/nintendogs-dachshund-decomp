/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_02114124();                            /* extern */
extern M2C_UNK func_02124c44;
extern M2C_UNK func_02124d10;

void *func_02124bf8(M2C_UNK arg0) {
    void *temp_r4;

    temp_r4 = func_020038a8(arg0, 0x20);
    func_02114124();
    M2C_FIELD(temp_r4, s16 *, 0)         = 0x11;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x10) = &func_02124c44;
    M2C_FIELD(temp_r4, M2C_UNK **, 0x14) = &func_02124d10;
    M2C_FIELD(temp_r4, s16 *, 2)         = 0;
    M2C_FIELD(temp_r4, s16 *, 0x1C)      = 0;
    return temp_r4;
}
