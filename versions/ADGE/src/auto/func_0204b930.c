/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_02036258();                                /* extern */
M2C_UNK func_0204bb68(M2C_UNK, s32, M2C_UNK);       /* extern */
M2C_UNK func_0204dd00(M2C_UNK, s32, M2C_UNK, M2C_UNK, s32); /* extern */

void func_0204b930(M2C_UNK arg0) {
    s32 temp_r0;

    temp_r0 = func_02036258();
    func_0204dd00(arg0, temp_r0, 1, 1, 1);
    func_0204bb68(arg0, temp_r0, 1);
}
