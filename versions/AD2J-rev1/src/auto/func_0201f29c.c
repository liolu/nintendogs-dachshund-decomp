/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02025a2c(M2C_UNK);
void func_02026bcc(M2C_UNK);

void func_0201f29c(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x150) = 0x209;
    func_02026bcc(arg0);
    func_02025a2c(arg0);
}
