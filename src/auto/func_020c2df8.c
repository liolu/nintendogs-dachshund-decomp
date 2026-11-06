#include "m2c.h"

void func_020c2df8(void *arg0) {
    M2C_FIELD(arg0, u16 *, 2) = (u16) (M2C_FIELD(arg0, u16 *, 2) & ~2);
    M2C_FIELD(arg0, s16 *, 0) = 1;
}
