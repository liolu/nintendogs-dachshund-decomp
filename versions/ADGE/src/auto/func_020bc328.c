/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020ba164();                             /* extern */
M2C_UNK func_020ba418();                  /* extern */
M2C_UNK func_020bac9c();                       /* extern */

void func_020bc328(s32 *arg0) {
    func_020ba418(arg0, func_020ba164(((s8 *) arg0 + 0x10)));
    if (*arg0 == 0) {
        return;
    }
    func_020bac9c(arg0);
}
