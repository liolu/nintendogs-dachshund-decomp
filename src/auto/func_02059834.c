/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02025700(M2C_UNK);
void func_02026b54(M2C_UNK);

void func_02059834(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x150) = 0xBB;
    func_02026b54(arg0);
    func_02025700(arg0);
}
