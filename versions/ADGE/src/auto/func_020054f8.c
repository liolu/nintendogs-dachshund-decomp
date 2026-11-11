#include "engine.h"
#include "m2c.h"

void func_020054f8(s32 arg0, s32 arg1) {
    *M2C_FIELD(arg0, s16 **, 0x74) = (s16) arg1;
}
