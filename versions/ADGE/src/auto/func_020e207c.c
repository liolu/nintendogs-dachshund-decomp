/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020e3e2c(M2C_UNK);
void func_020e4a98(M2C_UNK, M2C_UNK);

extern void *data_02159e70;

void func_020e207c(s32 arg0) {
    s32 var_r0;

    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) != 5) {
        return;
    }
    func_020e3e2c(5);
    var_r0 = 0;
    switch (arg0) {
        default:
            break;
        case 0:
            var_r0 = 1;
            break;
        case 1:
            var_r0 = 2;
            break;
        case 2:
            var_r0 = 3;
            break;
        case 3:
            var_r0 = 4;
            break;
    }
    func_020e4a98(var_r0, (s32) (data_02159e70 + 0x5264));
}
