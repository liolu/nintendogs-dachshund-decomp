#include "engine.h"
#include "m2c.h"

void func_02070ec4(s32 arg0, s32 arg1) {
    void *temp_r0;

    temp_r0 = *(M2C_UNK *) arg0;
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s8 *, 0x40) = (s8) arg1;
    }
}
