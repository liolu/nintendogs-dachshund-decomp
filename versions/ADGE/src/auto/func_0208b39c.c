/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02089d38(void *, s16, M2C_UNK);        /* extern */
M2C_UNK func_020997f0(s32);                         /* extern */
extern M2C_UNK data_02154300;

s32 func_0208b39c(void *arg0) {
    s32 temp_r4;

    temp_r4 = M2C_FIELD(&data_02154300, s32 *, 0x10);
    if (temp_r4 == 0) {
        return 0;
    }
    func_02089d38(arg0, M2C_FIELD(arg0, s16 *, 0xC), 7);
    func_020997f0(temp_r4);
    return 1;
}
