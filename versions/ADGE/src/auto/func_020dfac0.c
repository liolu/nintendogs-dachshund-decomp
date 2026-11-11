/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020cce14(M2C_UNK);
void func_020dfb1c(M2C_UNK, M2C_UNK);
void func_020e047c(M2C_UNK, M2C_UNK);

extern void *data_02159e70;

void func_020dfac0(void) {
    func_020cce14((s32) (data_02159e70 + 0x4CC8));
    M2C_FIELD(data_02159e70, void (**)(s32, s32), 0x4CEC) = func_020e047c;
    M2C_FIELD(data_02159e70, void (**)(s32, s32), 0x4CF0) = func_020dfb1c;
}
