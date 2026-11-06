/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020ea640(void *, s16, M2C_UNK);        /* extern */
M2C_UNK func_020f9f7c(s32);                         /* extern */
extern M2C_UNK data_02154d88;

s32 func_020ebca4(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(&data_02154d88, s32 *, 0x10);
    if (temp_r4 == 0) {
        return 0;
    }
    func_020ea640(arg0, M2C_FIELD(arg0, s16 *, 0xC), 7);
    func_020f9f7c(temp_r4);
    return 1;
}
