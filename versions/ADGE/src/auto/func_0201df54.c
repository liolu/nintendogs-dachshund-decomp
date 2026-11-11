/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02025a18(M2C_UNK);
void func_02025e08(M2C_UNK);

void func_0201df54(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x152) = 0xCE;
    func_02025e08(arg0);
    func_02025a18(arg0);
}
