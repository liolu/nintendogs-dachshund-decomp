/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02073468();                           /* extern */
M2C_UNK func_0207d87c();                /* extern */

s32 func_020734b8(s32 *arg0, s32 arg1) {
    func_0207d87c(((s8 *) arg0 + 4), 0xC);
    *arg0 = arg1;
    if (func_02073468(arg0) != 0) {
        return 1;
    }
    return 0;
}
