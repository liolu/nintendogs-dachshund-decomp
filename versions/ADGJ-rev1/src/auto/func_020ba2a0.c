/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02003964();                                /* extern */
M2C_UNK func_020a43f8();                            /* extern */

void func_020ba2a0(s32 *arg0) {
    *arg0 += 1;
    if (func_02003964() == 0) {
        return;
    }
    func_020a43f8();
}
