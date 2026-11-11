/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02108160(M2C_UNK);                     /* extern */
M2C_UNK func_02121814();                            /* extern */

void func_021217dc(void *arg0) {
    if (M2C_FIELD(arg0, s32 *, 0x6C) == 1) {
        func_02108160(1);
        return;
    }
    func_02121814(arg0);
}
