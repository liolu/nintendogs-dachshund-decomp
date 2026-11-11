/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020256a4(M2C_UNK);
void func_02026bcc(M2C_UNK);

void func_0205967c(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x150) = 0xC7;
    func_02026bcc(arg0);
    func_020256a4(arg0);
}
