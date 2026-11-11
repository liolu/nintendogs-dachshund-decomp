/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0208050c(M2C_UNK);
M2C_UNK func_02080520(M2C_UNK);

void func_02003110(void) {
    s32 var_r4;

    var_r4 = 0;
    do {
        func_0208050c(var_r4);
        func_02080520(var_r4);
        var_r4 += 1;
    } while (var_r4 < 9);
}
