/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020259d0(M2C_UNK);
void func_02025dc0(M2C_UNK);

void func_0201dfb0(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x150) = 0xCD;
    func_02025dc0(arg0);
    func_020259d0(arg0);
}
