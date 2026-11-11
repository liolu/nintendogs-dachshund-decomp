/* compiler: 1.2/sp2p3 */
#include "engine.h"
#include "m2c.h"

void func_020026d8(M2C_UNK);

extern s32 data_021473f8;

void func_020f7a68(s32 arg0) {
    s32 var_r4;

    var_r4 = arg0;
    if (data_021473f8 == var_r4) {
        return;
    }
    if ((u32) (u8) var_r4 > 3U) {
        var_r4 = 3;
    }
    func_020026d8(var_r4);
    data_021473f8 = var_r4;
}
