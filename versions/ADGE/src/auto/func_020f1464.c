#include "engine.h"
#include "m2c.h"

void func_020e1958(M2C_UNK);

extern void *data_02159e70;

void func_020f1464(void) {
    M2C_FIELD(data_02159e70, s32 *, 0x1D1C) = 0x11;
    func_020e1958(1);
}
