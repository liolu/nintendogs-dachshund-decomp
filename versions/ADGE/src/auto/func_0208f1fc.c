/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0209032c(u8, M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern M2C_UNK data_02129429;
extern M2C_UNK data_0215422c;

s32 func_0208f1fc(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    u8 temp_r0;

    temp_r0 = *((u8 *) ((s8 *) &data_02129429 + (M2C_FIELD(&data_0215422c, u16 *, 0x18) * 6)));
    if (temp_r0 == 0xFF) {
        return -1;
    }
    return func_0209032c(temp_r0, arg0, arg1, arg2);
}
