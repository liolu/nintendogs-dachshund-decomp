/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02025c4c(M2C_UNK);
void func_02025e08(M2C_UNK);

void func_0201dfa4(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x152) = 0xC4;
    func_02025e08(arg0);
    func_02025c4c(arg0);
}
