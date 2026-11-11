/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020360a0();                                /* extern */
M2C_UNK func_0204b7a8(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_0204d950(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */

void func_0204b5b4(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_020360a0();
    func_0204d950(arg0, temp_r0, 0, 0, 0);
    func_0204b7a8(arg0, temp_r0, 1);
}
