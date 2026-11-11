/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020c521c(M2C_UNK, M2C_UNK);

void func_02070798(s32 arg0, s32 arg1) {
    if (arg0 == 0) {
        return;
    }
    if (arg1 == M2C_FIELD(arg0, u8 *, 0x2E)) {
        return;
    }
    func_020c521c((s32) M2C_FIELD(arg0, u8 *, 0x3C), arg1);
    M2C_FIELD(arg0, u8 *, 0x2E) = (u8) arg1;
}
