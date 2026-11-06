/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_01ffe67c();                            /* extern */
M2C_UNK func_02068bd0();              /* extern */
s32 func_0206baf4();                             /* extern */
s32 func_0206bb3c();                       /* extern */

void func_020786f0(s32 arg0, s32 arg1) {
    u8 sp0[64];

    func_01ffe67c();
    *(s32 *) 0x04000440 = 0;
    *(s32 *) 0x04000444 = 0;
    *(s32 *) 0x04000454 = 0;
    if (arg0 != 0) {
        do {

        } while (func_0206bb3c(sp0) != 0);
        func_02068bd0(sp0, arg0);
    }
    if (arg1 != 0) {
        do {

        } while (func_0206baf4(arg1) != 0);
    }
    *(s32 *) 0x04000448     = 1;
    *(M2C_UNK *) 0x04000440 = 2;
}
