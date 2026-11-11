/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02003a00(void);

s32 func_02116da0(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    if (func_02003a00() != 0) {
        var_r4                       = 1;
        M2C_FIELD(arg0, s16 *, 0x2E) = 1;
        M2C_FIELD(arg0, s16 *, 0x30) = 0;
    }
    return var_r4;
}
