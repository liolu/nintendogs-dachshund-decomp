#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_02039128(void *arg0) {
    void *temp_r1;
    void *temp_r3;

    temp_r1                          = arg0 + 0x2A0;
    temp_r3                          = arg0 + 0x26C;
    *(M2C_S12 *) ((s8 *) arg0 + 620) = *(M2C_S12 *) ((s8 *) arg0 + 672);
}
