/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02065320();                                /* extern */
M2C_UNK func_02080820(u16 *, M2C_UNK);              /* extern */
extern void *data_0214d528;

s32 func_020652c4(void) {
    s32 temp_r0;

    temp_r0 = func_02065320();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_02080820(M2C_FIELD(data_0214d528, u16 **, 4), 2);
    if ((u32) *M2C_FIELD(data_0214d528, u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
