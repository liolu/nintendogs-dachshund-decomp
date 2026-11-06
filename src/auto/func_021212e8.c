/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0211ec28();                            /* extern */
extern void *data_02157b60;

void func_021212e8(void) {
    s16 temp_r1;

    if (data_02157b60 == NULL) {
        return;
    }
    temp_r1 = M2C_FIELD(data_02157b60, s16 *, 0x12C);
    if ((s32) temp_r1 > 0) {
        M2C_FIELD(data_02157b60, s16 *, 0x12C) = (s16) (temp_r1 - 1);
    }
    func_0211ec28();
}
