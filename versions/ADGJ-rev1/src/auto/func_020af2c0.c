/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b1108(M2C_UNK);                     /* extern */
extern void *data_02153740;

void func_020af2c0(void) {
    s32 temp_r0;

    temp_r0 = M2C_FIELD(data_02153740, s32 *, 0xA8);
    if ((temp_r0 != 7) && (temp_r0 != 8)) {
        return;
    }
    func_020b1108(0xC);
}
