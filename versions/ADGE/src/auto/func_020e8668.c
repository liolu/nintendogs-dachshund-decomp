/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020e8384(void);

s32 func_020e8668(void) {
    s32 temp_r0;
    s32 var_r4;

    var_r4  = 0;
    temp_r0 = func_020e8384();
    if (temp_r0 != 0) {
        var_r4 = M2C_FIELD(temp_r0, s32 *, 8);
    }
    return var_r4;
}
