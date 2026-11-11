/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_02072100(M2C_UNK);
void func_0207d234(M2C_UNK, M2C_UNK);

s32 func_02072150(s32 arg0, s32 arg1) {
    func_0207d234(arg0 + 4, 0xC);
    *(M2C_UNK *) arg0 = arg1;
    if (func_02072100(arg0) != 0) {
        return 1;
    }
    return 0;
}
