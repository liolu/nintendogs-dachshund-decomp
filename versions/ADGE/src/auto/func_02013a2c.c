/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02027f30(M2C_UNK, M2C_UNK, M2C_UNK);
M2C_UNK func_0203535c(M2C_UNK);
void func_ov003_0218c730(M2C_UNK);

void func_02013a2c(s32 arg0) {
    if (func_0203535c(arg0) == 0) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x104) = 0;
    func_02027f30(arg0, 2, 0);
    func_ov003_0218c730(arg0);
}
