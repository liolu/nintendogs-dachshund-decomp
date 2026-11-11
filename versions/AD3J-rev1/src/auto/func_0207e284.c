#include "m2c.h"

void *func_0207e284(void *arg0, void *arg1) {
    void *temp_r1;
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg1, void **, 8);
    temp_r1 = M2C_FIELD(arg1, void **, 0xC);
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 0xC) = temp_r1;
    } else {
        M2C_FIELD(arg0, void **, 0) = temp_r1;
    }
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void **, 8) = temp_r2;
    } else {
        M2C_FIELD(arg0, void **, 4) = temp_r2;
    }
    return temp_r2;
}
