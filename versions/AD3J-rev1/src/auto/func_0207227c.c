#include "m2c.h"

void func_0207227c(void **arg0) {
    void *temp_r2;

    temp_r2 = *arg0;
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, s32 *, 0x0) = 0;
        *arg0                          = NULL;
    }
}
