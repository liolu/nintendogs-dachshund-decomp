/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c4eb8(M2C_UNK, M2C_UNK);

extern s32 data_0214fe08;

void func_020703a4(s32 arg0) {
    if (arg0 == 0) {
        return;
    }
    func_020c4eb8(arg0, 0);
    data_0214fe08 &= ~arg0;
}
