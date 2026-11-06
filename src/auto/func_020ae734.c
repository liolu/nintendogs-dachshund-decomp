/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020aa620();                            /* extern */
M2C_UNK func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern s32 data_02153740;

void func_020ae734(void) {
    if (data_02153740 == 0) {
        return;
    }
    func_020aa620();
    func_020b8b0c(3, 0, 0);
}
