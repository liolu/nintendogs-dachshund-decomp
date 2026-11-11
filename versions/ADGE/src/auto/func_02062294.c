/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_02062294(s32 arg0) {
    s32 temp_r1;
    s32 var_r0;
    s32 var_r2;

    var_r0 = arg0;
    var_r2 = -1;
    do {
        temp_r1 = *(M2C_UNK *) var_r0;
        var_r0 += 1;
        var_r2 += 1;
    } while ((u8) temp_r1 != 0);
    return var_r2;
}
