#include "engine.h"
#include "m2c.h"

void func_0200657c(M2C_UNK);

extern M2C_UNK data_02142bf8;

void func_020ca2bc(s32 arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02142bf8;
    M2C_FIELD(arg0, s16 *, 4)      = 0;
    M2C_FIELD(arg0, s16 *, 6)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    func_0200657c(arg0 + 0x10);
}
