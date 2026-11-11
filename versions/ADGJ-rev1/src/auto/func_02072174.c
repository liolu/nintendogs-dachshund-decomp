/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020639f4(u8, M2C_UNK, s16);            /* extern */
extern M2C_UNK data_0212470c;

void func_02072174(void **arg0, M2C_UNK arg1, s32 arg2) {
    void *temp_r0;

    temp_r0 = *arg0;
    if (temp_r0 == NULL) {
        return;
    }
    func_020639f4(M2C_FIELD(temp_r0, u8 *, 0x3C), arg1, *((u16 *) ((s8 *) &data_0212470c + (arg2 * 2))));
}
