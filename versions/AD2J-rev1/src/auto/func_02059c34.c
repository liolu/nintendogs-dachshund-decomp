/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02025b58(M2C_UNK);
void func_020266a0(M2C_UNK);

void func_02059c34(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x150) = 0x11;
    func_020266a0(arg0);
    func_02025b58(arg0);
}
