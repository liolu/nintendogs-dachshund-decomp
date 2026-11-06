/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_021199f0();                             /* extern */
M2C_UNK func_02119ca4();                  /* extern */
M2C_UNK func_0211a528();                       /* extern */

void func_0211bbac(s32 *arg0) {
    func_02119ca4(arg0, func_021199f0(((s8 *) arg0 + 0x10)));
    if (*arg0 == 0) {
        return;
    }
    func_0211a528(arg0);
}
