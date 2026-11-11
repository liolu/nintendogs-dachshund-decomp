#include "m2c.h"

void func_0207226c(void *arg0, s8 arg1) {
    void *temp_r0;

    temp_r0 = M2C_FIELD(arg0, void **, 0x0);
    if (temp_r0 != NULL) {
        M2C_FIELD(temp_r0, s8 *, 0x41) = arg1;
    }
}
