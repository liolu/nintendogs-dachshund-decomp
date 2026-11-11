/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206cd00(M2C_UNK, M2C_UNK);

s32 func_0206a744(s32 arg0) {
    if (*(s32 *) 0x04000600 & 0x08000000) {
        return -1;
    }
    func_0206cd00(0x04000640, arg0);
    return 0;
}
