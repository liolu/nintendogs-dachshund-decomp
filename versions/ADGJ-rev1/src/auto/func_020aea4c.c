#include "m2c.h"

extern void *data_02153740;

void func_020aea4c(s16 arg0, s16 arg1) {
    M2C_FIELD(data_02153740, s16 *, 0x3524) = arg0;
    M2C_FIELD(data_02153740, s16 *, 0x3526) = arg1;
}
