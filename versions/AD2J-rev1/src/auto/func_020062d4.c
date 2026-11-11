#include "m2c.h"

extern M2C_UNK data_0214affc;

void func_020062d4(s16 arg0, s16 arg1, s16 arg2) {
    M2C_FIELD(&data_0214affc, s16 *, 0xC)  = arg0;
    M2C_FIELD(&data_0214affc, s16 *, 0xE)  = arg1;
    M2C_FIELD(&data_0214affc, s16 *, 0x10) = arg2;
}
