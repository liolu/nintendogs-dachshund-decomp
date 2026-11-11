/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020722b0(u8, M2C_UNK, M2C_UNK);        /* extern */
extern M2C_UNK data_02130731;
extern M2C_UNK data_02154cb8;

void func_020efa80(M2C_UNK arg0, M2C_UNK arg1) {
    u8 temp_r0;

    temp_r0 = *((u8 *) ((s8 *) &data_02130731 + (M2C_FIELD(&data_02154cb8, u16 *, 0x18) * 6)));
    if (temp_r0 == 0xFF) {
        return;
    }
    func_020722b0(temp_r0, arg0, arg1);
}
