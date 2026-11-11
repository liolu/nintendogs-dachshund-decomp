/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02000e2c();                            /* extern */
M2C_UNK func_02081288();                            /* extern */
extern s32 (*data_0214a5cc)();

void func_02000e4c(s32 arg0, s32 arg1) {
    s32 var_r0;

    if ((arg1 & 0x3F) == 0x11) {
        var_r0 = 0;
        if (data_0214a5cc != NULL) {
            var_r0 = data_0214a5cc();
        }
        if (var_r0 == 0) {
            return;
        }
        func_02000e2c();
        return;
    }
    func_02081288();
}
