#include "m2c.h"
#include "engine.h"
extern void *data_02159e38;
extern void *data_02159e64;
void func_02110ef0(s32 arg0) {
    M2C_FIELD(arg0, volatile s16 *, 0) = 0;
    M2C_FIELD(arg0, volatile u16 *, 2) = 0xffff;
    M2C_FIELD(arg0, volatile s32 *, 4) = 0;
    M2C_FIELD(arg0, volatile s32 *, 8) = 0;
    M2C_FIELD(arg0, volatile s32 *, 0xC) = 0;
    M2C_FIELD(arg0, volatile s16 *, 0x10) = 1;
}
