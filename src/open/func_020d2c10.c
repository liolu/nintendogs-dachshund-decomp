#include "m2c.h"
#include "engine.h"
extern void *data_02159e64;
extern void *data_02159e38;
void func_020d2c10(void) {
    M2C_FIELD(data_02159e64, u16 *, 0x6C) = 0;
    M2C_FIELD(data_02159e64, u16 *, 0x7A) = 0xFFFF;
}
