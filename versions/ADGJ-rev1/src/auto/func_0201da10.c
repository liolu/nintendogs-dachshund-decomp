/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020254f0(M2C_UNK);
void func_02026b54(M2C_UNK);

void func_0201da10(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x150) = 0;
    func_02026b54(arg0);
    func_020254f0(arg0);
}
