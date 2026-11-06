/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207fb04();                            /* extern */
s32 func_0208120c();                                /* extern */
M2C_UNK func_02081220(s32);                         /* extern */

void func_0207fc10(void *arg0) {
    s32 temp_r4;

    temp_r4                      = func_0208120c();
    M2C_FIELD(arg0, s32 *, 0x64) = 1;
    func_0207fb04();
    func_02081220(temp_r4);
}
