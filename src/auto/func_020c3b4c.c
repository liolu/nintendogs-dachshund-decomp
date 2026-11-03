#include "engine.h"
#include "m2c.h"

void func_020c47f4(void);
void func_020c49f4(M2C_UNK, M2C_UNK);

void func_020c3b4c(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0)               = 1;
    M2C_FIELD(arg0, s16 *, 2)               = 0;
    M2C_FIELD(arg0, void (**)(), 4)         = func_020c47f4;
    M2C_FIELD(arg0, void (**)(s32, s32), 8) = func_020c49f4;
}
