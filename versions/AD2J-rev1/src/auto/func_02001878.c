/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206e488();                            /* extern */
s32 func_0206e66c(M2C_UNK, M2C_UNK);                /* extern */
M2C_UNK func_0206e694(M2C_UNK, M2C_UNK *);          /* extern */
extern u16 data_0214a6a0;
extern M2C_UNK data_0214a6a4;
extern M2C_UNK func_02001908;

void func_02001878(void) {
    if (data_0214a6a0 != 0) {
        return;
    }
    data_0214a6a0 = 1;
    func_0206e488();
    M2C_FIELD(&data_0214a6a4, s16 *, 0x32) = 0;
    M2C_FIELD(&data_0214a6a4, s16 *, 0x36) = 0;
    M2C_FIELD(&data_0214a6a4, s16 *, 0xC)  = 0;
    M2C_FIELD(&data_0214a6a4, s32 *, 0)    = 0;
    M2C_FIELD(&data_0214a6a4, s32 *, 0x10) = 0;
    M2C_FIELD(&data_0214a6a4, s16 *, 0x30) = 0;
    M2C_FIELD(&data_0214a6a4, s16 *, 0x34) = 0;
    do {

    } while (func_0206e66c(6, 1) == 0);
    func_0206e694(6, &func_02001908);
}
