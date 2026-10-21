/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02027f08(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_020351a0(M2C_UNK);
void func_ov002_0218a430(M2C_UNK);

void func_02013a80(s32 arg0) {
    if (func_020351a0(arg0) == 0) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x112) = 0;
    func_02027f08(arg0, 2, 0);
    func_ov002_0218a430(arg0);
}
