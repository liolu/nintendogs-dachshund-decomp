/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020aa6e4();                            /* extern */
M2C_UNK func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
s32 func_020c9798();                                /* extern */
extern void *data_02153740;

void func_020ae778(void) {
    if (data_02153740 == NULL) {
        return;
    }
    func_020b8b0c(3, 0, 1);
    M2C_FIELD(data_02153740, s32 *, 0xFDC8) = func_020c9798();
    func_020aa6e4();
}
