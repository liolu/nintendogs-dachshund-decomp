/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02071fd4(s32 *);                           /* extern */
M2C_UNK func_0207472c(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_020ee5e0(M2C_UNK, M2C_UNK);            /* extern */
extern s32 data_02154eec;

s32 func_020f06dc(void) {
    s32 var_r0;

    if (data_02154eec != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if ((var_r0 == 0) || ((var_r0 != 0) && (func_02071fd4(&data_02154eec) != 0x7B))) {
        func_020ee5e0(0, 0);
        func_0207472c(&data_02154eec, 0x13, 0x7B);
        return 1;
    }
    return 0;
}
