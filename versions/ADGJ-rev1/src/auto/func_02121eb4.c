/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0211290c(M2C_UNK);                         /* extern */
M2C_UNK func_02118e50(M2C_UNK);                     /* extern */
M2C_UNK func_02118e5c(M2C_UNK, M2C_UNK, s32, M2C_UNK); /* extern */

void func_02121eb4(M2C_UNK arg0, s32 arg1) {
    switch (arg1) {                                 /* irregular */
        case 0:
            func_02118e5c(arg0, 0x16, -1, 0);
            func_02118e50(arg0);
            return;
        case 1:
            func_02118e5c(arg0, 4, func_0211290c(-1), 0);
            func_02118e50(arg0);
            return;
        case 2:
            func_02118e5c(arg0, 0xE, -1, 0);
            func_02118e50(arg0);
            return;
    }
}
