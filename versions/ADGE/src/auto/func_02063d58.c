/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02063db4();                                /* extern */
M2C_UNK func_020801f4(u16 *, M2C_UNK);              /* extern */
extern void *data_0214dfd4;

s32 func_02063d58(void) {
    s32 temp_r0;

    temp_r0 = func_02063db4();
    if (temp_r0 != 0) {
        return temp_r0;
    }
    func_020801f4(M2C_FIELD(data_0214dfd4, u16 **, 4), 2);
    if ((u32) *M2C_FIELD(data_0214dfd4, u16 **, 4) <= 1U) {
        return 3;
    }
    return 0;
}
