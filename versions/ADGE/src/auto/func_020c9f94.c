/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_0200657c(M2C_UNK);
void func_020c9f64(M2C_UNK);
void func_020ca530(M2C_UNK, M2C_UNK);

void func_020c9f94(s32 arg0, s32 arg1) {
    func_020ca530(arg0, 2);
    M2C_FIELD(arg0, void (**)(s32), 0x14) = func_020c9f64;
    M2C_FIELD(arg0, s32 *, 0x18)          = 0;
    func_0200657c(arg0 + 0x1C);
    M2C_FIELD(arg0, s32 *, 0x24) = arg1;
    M2C_FIELD(arg0, s16 *, 0x28) = 0x7FFF;
    M2C_FIELD(arg0, s16 *, 0x2A) = 0;
    M2C_FIELD(arg0, s16 *, 0x2C) = -0x1000;
    M2C_FIELD(arg0, s16 *, 0x2E) = 0;
}
