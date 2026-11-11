#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_020bd018(void *arg0, s32 arg1, void *arg2) {
    s32 temp_r3;

    temp_r3                           = (arg1 * 0xC) + M2C_FIELD(arg0, s32 *, 8);
    *(M2C_S12 *) ((s8 *) temp_r3 + 0) = *(M2C_S12 *) ((s8 *) arg2 + 0);
}
