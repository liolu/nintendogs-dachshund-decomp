/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0206cdc0(M2C_UNK, M2C_UNK, M2C_UNK);

s32 func_02080f80(s32 arg0, s32 arg1, s32 arg2) {
    s32 sp0;

    func_0206cdc0(arg0 + 8, (s32) &sp0, 4);
    if (sp0 != arg1) {
        return 0;
    }
    if (arg2 != 0) {
        func_0206cdc0(arg0 + 0xC, arg2, 0x1C);
    }
    return 1;
}
