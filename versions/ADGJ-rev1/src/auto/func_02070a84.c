/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02070ea4(M2C_UNK, M2C_UNK);

s32 func_02070a84(s32 arg0, s32 arg1) {
    u16 var_r2;

    var_r2 = 0;
    if ((arg1 > 0) && (arg0 != 0)) {
        var_r2 = (u16) func_02070ea4(arg0, arg1);
    }
    return (s32) var_r2;
}
