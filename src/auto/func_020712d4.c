/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_0207145c();                              /* extern */

s32 func_020712d4(void) {
    s32 var_r4;
    void *var_r0;

    var_r4 = 0;
    var_r0 = func_0207145c();
    if (var_r0 != NULL) {
        do {
            var_r0 = M2C_FIELD(var_r0, void **, 0x28);
            var_r4 += 1;
        } while (var_r0 != NULL);
    }
    return var_r4;
}
