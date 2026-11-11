/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

M2C_UNK func_020039c8(void);
void func_020d6a1c(void);

void func_020d87b4(s32 arg0) {
    *(M2C_UNK *) arg0 = (s32) (*(M2C_UNK *) arg0 + 1);
    if (func_020039c8() == 0) {
        return;
    }
    func_020d6a1c();
}
