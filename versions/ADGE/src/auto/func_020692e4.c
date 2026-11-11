#include "engine.h"
#include "m2c.h"

void func_02069de4(M2C_UNK);

extern u16 data_0214f450;

void func_020692e4(s32 arg0) {
    data_0214f450 |= arg0;
    func_02069de4(arg0);
}
