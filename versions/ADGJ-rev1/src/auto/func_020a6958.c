/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b9120(M2C_UNK, s32, s32);           /* extern */
s32 func_020b9144(M2C_UNK, M2C_UNK);                /* extern */
extern void *data_02153740;

void func_020a6958(void) {
    s32 var_r6;

    if (M2C_FIELD(data_02153740, s32 *, 0xB8) != 7) {
        return;
    }
    var_r6 = 0;
    do {
        func_020b9120(2, var_r6 + 7, func_020b9144(2, 0xE));
        var_r6 += 1;
    } while (var_r6 < 6);
    M2C_FIELD(data_02153740, s32 *, 0x830) = 0;
}
