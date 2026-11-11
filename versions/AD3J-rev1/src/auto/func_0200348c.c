/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0207dcec(s32 *, M2C_UNK, M2C_UNK);         /* extern */
s32 func_0207e4e4(s32 *, M2C_UNK, M2C_UNK);         /* extern */
M2C_UNK func_0207e538(s32, M2C_UNK, M2C_UNK);       /* extern */

void func_0200348c(s32 *arg0, M2C_UNK arg1) {
    s32 temp_r3;
    s32 var_ip;

    temp_r3 = *arg0;
    var_ip  = 0;
    switch (temp_r3) {                              /* irregular */
        case 0x45585048:
            var_ip = func_0207dcec(arg0, arg1, 4);
            break;
        case 0x46524D48:
            var_ip = func_0207e4e4(arg0, arg1, 4);
            break;
    }
    func_0207e538(var_ip, arg1, 1);
}
