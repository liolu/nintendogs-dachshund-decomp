#include "engine.h"
#include "m2c.h"

s32 func_02070c84(s32 arg0) {
    void *temp_r1;

    temp_r1 = *(M2C_UNK *) arg0;
    if (temp_r1 == NULL) {
        return -1;
    }
    if (M2C_FIELD(temp_r1, u16 *, 0x34) != 1) {
        return -1;
    }
    return (s32) M2C_FIELD(temp_r1, u16 *, 0x38);
}
