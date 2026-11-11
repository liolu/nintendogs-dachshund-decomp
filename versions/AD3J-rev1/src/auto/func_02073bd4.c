/* compiler: 1.2/sp2p3 */
#include "m2c.h"

M2C_UNK func_02072e4c(M2C_UNK, M2C_UNK);            /* extern */
s32 func_02072e68(M2C_UNK);                         /* extern */
s32 func_020731a4(s32);                             /* extern */
s32 func_0208120c();                                /* extern */
M2C_UNK func_02081220(s32);                         /* extern */

void func_02073bd4(s32 arg0, s32 arg1, M2C_UNK arg2) {
    s32 temp_r5;
    s32 temp_r4;

    temp_r4 = func_0208120c();
    temp_r5 = func_020731a4(arg1);
    if (arg0 == func_02072e68(arg2)) {
        func_02072e4c(arg2, 0);
    }
    func_020731a4(temp_r5);
    func_02081220(temp_r4);
}
