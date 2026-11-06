/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02003980();                                /* extern */
M2C_UNK func_020a43f8();                            /* extern */
M2C_UNK func_020b7ee0();                            /* extern */
s32 func_020b7efc();                                /* extern */

void func_020ff270(void) {
    if (func_020b7efc() == 0) {
        return;
    }
    if (func_02003980() == 0) {
        return;
    }
    func_020a43f8();
    func_020b7ee0();
}
