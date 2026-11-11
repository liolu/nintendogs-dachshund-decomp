/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c4ee4(M2C_UNK, M2C_UNK);

extern s32 data_0214fe08;

s32 func_020703dc(s32 arg0) {
    if (arg0 == 0) {
        return 1;
    }
    if (arg0 & data_0214fe08) {
        return 0;
    }
    func_020c4ee4(arg0, 0);
    data_0214fe08 |= arg0;
    return 1;
}
