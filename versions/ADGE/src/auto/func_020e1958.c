#include "engine.h"
#include "m2c.h"

extern void *data_02159e70;
extern void *data_02159fc4;

void func_020e1958(s32 arg0) {
    if (M2C_FIELD(data_02159e70, s32 *, 0xB8) == 2) {
        M2C_FIELD(data_02159fc4, s32 *, 0x48) = arg0;
    }
}
