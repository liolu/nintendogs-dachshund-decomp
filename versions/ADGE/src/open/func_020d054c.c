#include "m2c.h"
void func_020d054c(s32 arg0) {
    volatile u16 var = 0;

    func_0206cbc4(var, arg0, 0x85C);
    M2C_FIELD(arg0, u16 *, 0) = 0xFFFF;
}
