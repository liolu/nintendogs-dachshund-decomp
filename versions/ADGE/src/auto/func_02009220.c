/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020092e4(M2C_UNK, M2C_UNK);

void func_02009220(s32 arg0) {
    s32 var_r4;

    var_r4 = 0;
    do {
        func_020092e4(arg0, var_r4);
        var_r4 = (s32) (s16) (var_r4 + 1);
    } while (var_r4 < 7);
}
