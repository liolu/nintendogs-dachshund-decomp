/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0206e2f8(s16, void *);                     /* extern */
s32 func_0208120c();                                /* extern */
M2C_UNK func_02081220(s32);                         /* extern */
s32 func_02081238();                                /* extern */
M2C_UNK func_0208124c(s32);                         /* extern */

s32 func_0207f76c(s16 arg0, void *arg1, M2C_UNK (*arg2)(), s32 arg3) {
    s32 temp_r0;
    s32 var_r5;

    if (arg3 != 0) {
        var_r5 = func_02081238();
    } else {
        var_r5 = func_0208120c();
    }
    temp_r0 = func_0206e2f8(arg0, arg1);
    if (temp_r0 == 0) {
        if (arg2 != NULL) {
            arg2();
        }
        M2C_FIELD(arg1, s16 *, 4) = arg0;
    }
    if (arg3 != 0) {
        func_0208124c(var_r5);
    } else {
        func_02081220(var_r5);
    }
    return temp_r0;
}
