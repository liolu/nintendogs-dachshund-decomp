/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

s32 func_0206ffd0(s32 arg0) {
    s32 var_r2;

    var_r2 = 0;
loop_1:
    if ((arg0 >> var_r2) & 1) {
        return var_r2;
    }
    var_r2 += 1;
    if (var_r2 >= 0x10) {
        return -1;
    }
    goto loop_1;
}
