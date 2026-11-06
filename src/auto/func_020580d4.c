/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02025494(M2C_UNK);
void func_02026b54(M2C_UNK);

void func_020580d4(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x150) = 0;
    func_02026b54(arg0);
    func_02025494(arg0);
}
