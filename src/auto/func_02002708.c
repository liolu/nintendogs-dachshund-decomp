/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02002744(M2C_UNK *, s32 *);                /* extern */
M2C_UNK func_02002d74();                            /* extern */
extern M2C_UNK func_02002d6c;

s32 func_02002708(void) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02002744(&func_02002d6c, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02002d74();
    return sp0;
}
