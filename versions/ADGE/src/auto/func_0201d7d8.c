/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02025538(M2C_UNK);
void func_02026c14(M2C_UNK);

void func_0201d7d8(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x152) = 0;
    M2C_FIELD(arg0, s16 *, 0x156) = 6;
    func_02026c14(arg0);
    func_02025538(arg0);
}
