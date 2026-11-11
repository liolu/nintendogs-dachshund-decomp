/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02025538(M2C_UNK);
void func_02026c14(M2C_UNK);
M2C_UNK func_02034e44(M2C_UNK);

void func_0201ff80(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x152) = 0x119;
    M2C_FIELD(arg0, s16 *, 0x158) = (s16) func_02034e44(arg0);
    func_02026c14(arg0);
    func_02025538(arg0);
}
