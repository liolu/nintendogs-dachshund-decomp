/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207efd0();                            /* extern */
M2C_UNK func_02080c3c(s32);                         /* extern */

void func_02000bac(s32 arg0, void *arg1) {
    if (M2C_FIELD(arg1, s32 *, 0) == 0) {
        func_0207efd0(arg0);
    }
    func_02080c3c(M2C_FIELD(arg1, s32 *, 4));
}
