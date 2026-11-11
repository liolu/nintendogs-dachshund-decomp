/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02077a28();                            /* extern */
M2C_UNK func_020677d8();              /* extern */
s32 func_0206a6fc();                             /* extern */
s32 func_0206a744();                       /* extern */

void func_02077e78(s32 arg0, s32 arg1) {
    u8 sp0[64];

    func_02077a28();
    *(s32 *) 0x04000440 = 0;
    *(s32 *) 0x04000444 = 0;
    *(s32 *) 0x04000454 = 0;
    if (arg0 != 0) {
        do {

        } while (func_0206a744(sp0) != 0);
        func_020677d8(sp0, arg0);
    }
    if (arg1 != 0) {
        do {

        } while (func_0206a6fc(arg1) != 0);
    }
    *(s32 *) 0x04000448     = 1;
    *(M2C_UNK *) 0x04000440 = 2;
}
