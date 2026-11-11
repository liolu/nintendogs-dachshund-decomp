#include "engine.h"
#include "m2c.h"

void func_02068e8c(M2C_UNK);

extern M2C_UNK data_0214f460;

void func_02068e1c(void) {
    *(s32 *) 0x04000000 &= ~0x80000000;
    func_02068e8c((s32) &data_0214f460);
}
