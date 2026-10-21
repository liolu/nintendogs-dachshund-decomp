/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_01ffe490(M2C_UNK, void *, M2C_UNK);        /* extern */

s32 func_0207b270(s32 *arg0) {
    s32 temp_r0;
    s32 temp_r1;

    temp_r1 = *arg0;
    if (!(temp_r1 & 4)) {
        if (!(temp_r1 & 2)) {
            func_01ffe490(0x19, ((s8 *) arg0 + 0x28), 0xC);
        } else {
            func_01ffe490(0x1C, ((s8 *) arg0 + 0x4C), 3);
        }
    } else if (!(temp_r1 & 2)) {
        func_01ffe490(0x1A, ((s8 *) arg0 + 0x28), 9);
    }
    temp_r0 = *arg0 & 1;
    if (temp_r0 != 0) {
        return temp_r0;
    }
    return func_01ffe490(0x1B, ((s8 *) arg0 + 4), 3);
}
