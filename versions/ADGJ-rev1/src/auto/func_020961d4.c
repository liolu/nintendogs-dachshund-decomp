/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02092b94();                            /* extern */

void func_020961d4(void *arg0) {
    if (M2C_FIELD(arg0, s16 *, 0x7C) == -1) {
        return;
    }
    if (M2C_FIELD(arg0, s16 *, 0x76) == 0) {
        M2C_FIELD(arg0, s16 *, 0x76) = 1;
        return;
    }
    func_02092b94();
}
