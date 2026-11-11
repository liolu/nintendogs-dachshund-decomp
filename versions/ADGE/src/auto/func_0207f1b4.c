/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02080c28();                                /* extern */
M2C_UNK func_02080c3c(s32);                         /* extern */
s32 func_02080c54();                                /* extern */
M2C_UNK func_02080c68(s32);                         /* extern */

s32 func_0207f1b4(s32 arg0, void *arg1, M2C_UNK (*arg2)(), s32 arg3) {
    s32 var_r4;

    if (arg0 != M2C_FIELD(arg1, u16 *, 4)) {
        return -2;
    }
    if (arg3 != 0) {
        var_r4 = func_02080c54();
    } else {
        var_r4 = func_02080c28();
    }
    M2C_FIELD(arg1, u16 *, 4) = 0U;
    if (arg2 != NULL) {
        arg2();
    }
    M2C_FIELD(arg1, s32 *, 0) = 0;
    if (arg3 != 0) {
        func_02080c68(var_r4);
    } else {
        func_02080c3c(var_r4);
    }
    return 0;
}
