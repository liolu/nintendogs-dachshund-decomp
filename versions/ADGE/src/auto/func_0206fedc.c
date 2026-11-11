/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02070064(void);

s32 func_0206fedc(void) {
    s32 var_r0;
    s32 var_r4;

    var_r4 = 0;
    var_r0 = func_02070064();
    if (var_r0 != 0) {
        do {
            var_r0 = M2C_FIELD(var_r0, s32 *, 0x28);
            var_r4 += 1;
        } while (var_r0 != 0);
    }
    return var_r4;
}
