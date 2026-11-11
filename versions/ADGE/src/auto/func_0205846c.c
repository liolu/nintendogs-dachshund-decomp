/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020254dc(M2C_UNK);
void func_02026b9c(M2C_UNK);

void func_0205846c(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0x152) = 0;
    func_02026b9c(arg0);
    func_020254dc(arg0);
}
