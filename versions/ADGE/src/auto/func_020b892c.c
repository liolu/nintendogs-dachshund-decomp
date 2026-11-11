/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020bae1c(M2C_UNK);
void func_020bae2c(M2C_UNK, M2C_UNK);

extern s32 data_0213eec0;

void func_020b892c(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0) = 2;
    func_020bae2c(arg0 + 0x2C, M2C_FIELD(arg0, s32 *, 0x68));
    func_020bae1c(arg0 + 0x2C);
    M2C_FIELD(arg0, s32 *, 0x6C) = (s32) data_0213eec0;
}
