/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02023674();                            /* extern */

void func_02023644(void *arg0, s32 arg1, s32 arg2) {
    if (M2C_FIELD(M2C_FIELD(arg0, void **, 0x9E8), u8 *, 0x72) != 5) {
        return;
    }
    func_02023674(arg0, arg1, arg2);
}
