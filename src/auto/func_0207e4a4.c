/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207e584(M2C_UNK);
void func_0207e5b4(M2C_UNK);

void func_0207e4a4(s32 arg0, s32 arg1) {
    if (arg1 & 1) {
        func_0207e5b4(arg0);
    }
    if (!(arg1 & 2)) {
        return;
    }
    func_0207e584(arg0);
}
