/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020256ec(M2C_UNK);
void func_02026c14(M2C_UNK);

void func_02059834(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x152) = 0xD3;
    func_02026c14(arg0);
    func_020256ec(arg0);
}
