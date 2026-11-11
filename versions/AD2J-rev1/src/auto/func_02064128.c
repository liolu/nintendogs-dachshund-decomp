/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02063bc4();                                /* extern */
M2C_UNK func_02063c1c();                            /* extern */
s32 func_02063cec();                                /* extern */
M2C_UNK func_02063f40(M2C_UNK);                     /* extern */
s32 func_020641c4(M2C_UNK);                         /* extern */
s32 func_02080358();                                /* extern */

s32 func_02064128(s32 arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    if (func_02080358() != 0) {
        return 0;
    }
    temp_r0_3 = func_02063bc4();
    if (temp_r0_3 != 0) {
        return temp_r0_3;
    }
    if (arg0 == 0) {
        return 0;
    }
    if (func_02063cec() > 0) {
        do {

        } while (func_020641c4(0) != 0);
        temp_r0_2 = func_02063bc4();
        if (temp_r0_2 != 0) {
            return temp_r0_2;
        }
        goto block_12;
    }
    func_02063f40(1);
block_12:
    func_02063c1c();
    do {
        func_020641c4(1);
        temp_r0 = func_02063bc4();
    } while (temp_r0 == 0);
    return temp_r0;
}
