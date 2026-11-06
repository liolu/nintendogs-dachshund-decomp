/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02006fdc();                            /* extern */
M2C_UNK func_02067920();                            /* extern */
s32 func_02067960();                                /* extern */
M2C_UNK func_0207f1c8(M2C_UNK, M2C_UNK);            /* extern */
M2C_UNK func_020c1130();                            /* extern */
M2C_UNK func_020c117c();                            /* extern */
s32 func_0211f078();                                /* extern */
s32 func_0211f094();                                /* extern */

void func_0208c7e0(void) {
    s32 var_r5;

    if (func_02067960() != 0) {
        var_r5 = 0;
    loop_2:
        if ((var_r5 == 0) && (func_0211f094() != 0)) {
            var_r5 = 1;
        }
        if ((var_r5 != 0) && (func_0211f078() != 0)) {
            func_02067920();
        }
        func_0207f1c8(1, 1);
        goto loop_2;
    }
    func_02006fdc();
    func_020c1130();
    func_020c117c();
}
