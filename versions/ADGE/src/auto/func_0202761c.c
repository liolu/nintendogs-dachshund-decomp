#include "m2c.h"

typedef struct {
    s32 f0;
    s32 f1;
    s32 f2;
} M2C_S12;

void func_0202761c(void *arg0, void *arg1) {
    void *temp_r0;

    temp_r0                        = arg0 + 0x2D0;
    *(M2C_S12 *) ((s8 *) arg1 + 0) = *(M2C_S12 *) ((s8 *) arg0 + 720);
}
