#include "engine.h"
#include "m2c.h"

void func_0208aa80(s32 arg0, s32 arg1, s32 arg2, s32 arg3) {
    void *temp_r1;

    temp_r1                         = arg0 + (arg1 * 4);
    M2C_FIELD(temp_r1, s32 *, 0x50) = arg2;
    M2C_FIELD(temp_r1, s32 *, 0x68) = 0x7FFFFFFF;
    M2C_FIELD(temp_r1, s32 *, 0x74) = arg3;
}
