/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020cece8();                                /* extern */
s32 func_02110d88(M2C_UNK);                         /* extern */
s32 func_02110de8(M2C_UNK);                         /* extern */
s32 func_02110e48(M2C_UNK);                         /* extern */

s32 func_02110cc0(u32 arg0, M2C_UNK arg1) {
    s32 var_r2;

    var_r2 = 0xFFFF;
    switch (arg0) {
        default:
            break;
        case 0:
            var_r2 = func_020cece8();
            break;
        case 1:
            var_r2 = func_02110e48(arg1);
            break;
        case 2:
            var_r2 = func_02110de8(arg1);
            break;
        case 3:
            var_r2 = func_02110d88(arg1);
            break;
        case 4:
            var_r2 = 0x18;
            break;
        case 5:
            var_r2 = 0x19;
            break;
        case 6:
            var_r2 = 0x1A;
            break;
        case 7:
            var_r2 = 0x1C;
            break;
        case 8:
            var_r2 = 0x1D;
            break;
        case 9:
            var_r2 = 0x1B;
            break;
        case 10:
            var_r2 = 0x1E;
            break;
    }
    return var_r2;
}
