/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02025c04(M2C_UNK);
void func_02025ddc(M2C_UNK);

void func_02058bcc(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x150) = 0x166;
    func_02025ddc(arg0);
    func_02025c04(arg0);
}
