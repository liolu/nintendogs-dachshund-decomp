/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206e80c();                            /* extern */
s32 func_0206ee8c(M2C_UNK, M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
extern M2C_UNK data_0214eab0;
extern M2C_UNK func_0206e824;

s32 func_0206ee48(M2C_UNK arg0, M2C_UNK arg1) {
    s32 temp_r0;

    temp_r0                                = func_0206ee8c(arg0, arg1, &func_0206e824, 0);
    M2C_FIELD(&data_0214eab0, s32 *, 0x20) = temp_r0;
    if (temp_r0 == 0) {
        func_0206e80c();
    }
    return M2C_FIELD(&data_0214eab0, s32 *, 0x20);
}
