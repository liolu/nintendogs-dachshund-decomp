/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02025ba0(M2C_UNK);
void func_020266e8(M2C_UNK);

void func_02059fcc(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x152) = 0x11;
    func_020266e8(arg0);
    func_02025ba0(arg0);
}
