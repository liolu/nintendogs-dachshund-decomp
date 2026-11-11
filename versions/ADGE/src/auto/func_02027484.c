#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_02027484(void *arg0, void *arg1) {
    void *temp_r3;

    temp_r3                           = arg0 + 0x490;
    *(M2C_S12 *) ((s8 *) arg0 + 1168) = *(M2C_S12 *) ((s8 *) arg1 + 0);
}
