/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020d6a1c(void);
void func_020eff64(void);

void func_020f02e8(s32 arg0) {
    if (*(M2C_UNK *) arg0 == 1) {
        func_020eff64();
    }
    *(M2C_UNK *) arg0 = (s32) (*(M2C_UNK *) arg0 + 1);
    if ((s32) * (M2C_UNK *) arg0 <= 0xA) {
        return;
    }
    func_020d6a1c();
}
