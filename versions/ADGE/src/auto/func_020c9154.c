#include "engine.h"
#include "m2c.h"

void func_020c9dfc(void);
void func_020c9ffc(M2C_UNK, M2C_UNK);

void func_020c9154(s32 arg0) {
    M2C_FIELD(arg0, s16 *, 0)               = 1;
    M2C_FIELD(arg0, s16 *, 2)               = 0;
    M2C_FIELD(arg0, void (**)(), 4)         = func_020c9dfc;
    M2C_FIELD(arg0, void (**)(s32, s32), 8) = func_020c9ffc;
}
