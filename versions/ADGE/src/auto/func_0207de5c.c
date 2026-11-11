/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207df3c(M2C_UNK);
void func_0207df6c(M2C_UNK);

void func_0207de5c(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_0207df6c(arg0);
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_0207df3c(arg0);
}
