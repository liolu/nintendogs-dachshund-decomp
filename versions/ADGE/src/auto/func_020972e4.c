/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0200273c(M2C_UNK);

extern s32 data_0213d1a4;

void func_020972e4(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (data_0213d1a4 == var_r4) {
        return;
    }
    if ((u32) (u8) var_r4 > 3U) {
        var_r4 = 3;
    }
    func_0200273c(var_r4);
    data_0213d1a4 = var_r4;
}
