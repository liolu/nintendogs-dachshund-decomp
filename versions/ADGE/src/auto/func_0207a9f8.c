/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0207782c(M2C_UNK, M2C_UNK, M2C_UNK);

void func_0207a9f8(s32 arg0) {
    s32 temp_r1;

    temp_r1 = *(M2C_UNK *) arg0;
    if (!(temp_r1 & 4)) {
        if (!(temp_r1 & 2)) {
            func_0207782c(0x19, arg0 + 0x28, 0xC);
        } else {
            func_0207782c(0x1C, arg0 + 0x4C, 3);
        }
    } else if (!(temp_r1 & 2)) {
        func_0207782c(0x1A, arg0 + 0x28, 9);
    }
    if (*(M2C_UNK *) arg0 & 1) {
        return;
    }
    func_0207782c(0x1B, arg0 + 4, 3);
}
