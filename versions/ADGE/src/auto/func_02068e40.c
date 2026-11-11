#include "engine.h"
#include "m2c.h"

void func_02068e8c(M2C_UNK);

extern M2C_UNK data_0214f45e;

void func_02068e40(void) {
    *(s32 *) 0x04000000 &= ~0x40000000;
    func_02068e8c((s32) &data_0214f45e);
}
