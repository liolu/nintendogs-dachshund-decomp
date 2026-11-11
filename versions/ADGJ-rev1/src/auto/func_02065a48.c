/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02065320();                                /* extern */
void *func_0206533c();                              /* extern */
M2C_UNK func_0206e080(s32, s32, s32);               /* extern */
M2C_UNK func_02080820(s32, s32);                    /* extern */

s32 func_02065a48(s32 arg0) {
    s32 temp_r0;
    void *temp_r4;

    temp_r4 = func_0206533c();
    temp_r0 = func_02065320();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    if (arg0 == 0) {
        return 6;
    }
    func_02080820(M2C_FIELD(temp_r4, s32 *, 4), 0x9B8);
    func_0206e080(M2C_FIELD(temp_r4, s32 *, 4), arg0, 0x9B8);
    return 0;
}
