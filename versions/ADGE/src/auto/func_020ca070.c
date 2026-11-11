/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020036c0();           /* extern */
M2C_UNK func_02077ac8();                            /* extern */
void *func_0207832c();                           /* extern */

void func_020ca070(s32 arg0, M2C_UNK arg1) {
    void *temp_r0;

    func_02077ac8();
    temp_r0 = func_0207832c(arg0);
    func_020036c0(arg1, arg0, (temp_r0 + M2C_FIELD(temp_r0, s32 *, 0x14)) - arg0);
}
