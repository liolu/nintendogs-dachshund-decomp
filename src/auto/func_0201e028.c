/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02025c04(M2C_UNK);
void func_02025dc0(M2C_UNK);

void func_0201e028(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x150) = 0xB1;
    func_02025dc0(arg0);
    func_02025c04(arg0);
}
