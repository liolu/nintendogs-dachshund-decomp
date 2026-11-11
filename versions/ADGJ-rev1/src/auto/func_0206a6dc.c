#include "engine.h"
#include "m2c.h"

void func_0206b1dc(M2C_UNK);

extern u16 data_0214e9b0;

void func_0206a6dc(s32 arg0) {
    data_0214e9b0 |= arg0;
    func_0206b1dc(arg0);
}
