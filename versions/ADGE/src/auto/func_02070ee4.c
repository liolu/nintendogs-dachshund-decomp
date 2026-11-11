#include "engine.h"
#include "m2c.h"

void func_02070ee4(s32 arg0) {
    s32 *temp_r2;

    temp_r2 = *(M2C_UNK *) arg0;
    if (temp_r2 != NULL) {
        *temp_r2          = 0;
        *(M2C_UNK *) arg0 = NULL;
    }
}
