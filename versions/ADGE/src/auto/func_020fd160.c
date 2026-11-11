/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b1428(void *, M2C_UNK, M2C_UNK, s32, s32); /* extern */

void func_020fd160(void *arg0, M2C_UNK arg1) {
    s32 var_r2;

    var_r2 = M2C_FIELD(arg0, s32 *, 0xB4);
    if (var_r2 <= 0) {
        var_r2 = 0 - var_r2;
    }
    if (var_r2 < 0xA4) {
        func_020b1428(arg0, arg1, 0xC00, 0xFAE, 0);
        return;
    }
    func_020b1428(arg0, arg1, 0xC00, 0xE66, 0);
}
