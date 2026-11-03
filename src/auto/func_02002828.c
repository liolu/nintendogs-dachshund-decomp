/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02002d74();                            /* extern */
s32 func_02002864(M2C_UNK, M2C_UNK *, s32 *);       /* extern */
extern M2C_UNK func_02002d6c;

s32 func_02002828(M2C_UNK arg0) {
    s32 sp0;
    s32 temp_r0;

    temp_r0 = func_02002864(arg0, &func_02002d6c, &sp0);
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02002d74();
    return sp0;
}
