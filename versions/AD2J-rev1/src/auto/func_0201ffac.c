/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020254f0(M2C_UNK);
void func_02026bcc(M2C_UNK);
M2C_UNK func_02034c88(M2C_UNK);

void func_0201ffac(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x150) = 0x119;
    M2C_FIELD(arg0, s16 *, 0x156) = (s16) func_02034c88(arg0);
    func_02026bcc(arg0);
    func_020254f0(arg0);
}
