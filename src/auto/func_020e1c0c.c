/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020e1c60();                            /* extern */
M2C_UNK func_020e1ff8();                            /* extern */
extern void *data_02154cac;

void func_020e1c0c(void) {
    if (M2C_FIELD(data_02154cac, s32 *, 0) == 0) {
        return;
    }
    if (M2C_FIELD(data_02154cac, s32 *, 8) != 0) {
        M2C_FIELD(data_02154cac, s32 *, 4) = (s32) (M2C_FIELD(data_02154cac, s32 *, 4) + M2C_FIELD(data_02154cac, s32 *, 0xC));
    }
    func_020e1ff8();
    func_020e1c60();
}
