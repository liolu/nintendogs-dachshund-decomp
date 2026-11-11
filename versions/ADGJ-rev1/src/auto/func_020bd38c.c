/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a43f8();                            /* extern */
M2C_UNK func_020bd008();                            /* extern */

void func_020bd38c(s32 *arg0) {
    if (*arg0 == 1) {
        func_020bd008();
    }
    *arg0 += 1;
    if ((s32) *arg0 <= 0xA) {
        return;
    }
    func_020a43f8();
}
