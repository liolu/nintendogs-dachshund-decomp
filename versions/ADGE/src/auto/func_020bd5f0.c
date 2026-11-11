/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020b33ac(M2C_UNK, M2C_UNK);

void func_020bd5f0(s32 arg0) {
    s16 temp_r1;

    if (M2C_FIELD(arg0, s32 *, 0) != 2) {
        return;
    }
    temp_r1 = M2C_FIELD(arg0, s16 *, 0x5C);
    if (temp_r1 == -1) {
        return;
    }
    func_020b33ac(arg0 + 0x30, (s32) temp_r1);
    M2C_FIELD(arg0, s32 *, 0x58) = 1;
}
