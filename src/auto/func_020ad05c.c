/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a43f8();                            /* extern */

void func_020ad05c(s32 *arg0) {
    *arg0 += 1;
    if ((s32) *arg0 <= 0x10) {
        return;
    }
    func_020a43f8();
}
