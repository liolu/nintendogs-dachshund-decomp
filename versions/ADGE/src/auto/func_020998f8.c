/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_0207fdcc(M2C_UNK, M2C_UNK, M2C_UNK);
void func_0209649c(void);

extern M2C_UNK data_02154f18;

void func_020998f8(void) {
    s32 sp0;

    func_0207fdcc((s32) &data_02154f18, (s32) &sp0, 0);
    if (sp0 != 0x504C4159) {
        return;
    }
    func_0209649c();
}
