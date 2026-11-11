/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02070c3c(s32 *);                           /* extern */
M2C_UNK func_02073328(s32 *, M2C_UNK, M2C_UNK);     /* extern */
M2C_UNK func_0208dd94(M2C_UNK, M2C_UNK);            /* extern */
extern s32 data_02154464;

s32 func_0208feac(void) {
    s32 var_r0;

    if (data_02154464 != 0) {
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if ((var_r0 == 0) || ((var_r0 != 0) && (func_02070c3c(&data_02154464) != 0x7B))) {
        func_0208dd94(0, 0);
        func_02073328(&data_02154464, 0x13, 0x7B);
        return 1;
    }
    return 0;
}
