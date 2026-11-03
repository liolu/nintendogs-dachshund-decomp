#include "m2c.h"

void *func_0207e254(void *arg0, void *arg1, void *arg2) {
    void *var_r3;

    M2C_FIELD(arg1, void **, 8) = arg2;
    if (arg2 != NULL) {
        var_r3                        = M2C_FIELD(arg2, void **, 0xC);
        M2C_FIELD(arg2, void **, 0xC) = arg1;
    } else {
        var_r3                      = M2C_FIELD(arg0, void **, 0);
        M2C_FIELD(arg0, void **, 0) = arg1;
    }
    M2C_FIELD(arg1, void **, 0xC) = var_r3;
    if (var_r3 != NULL) {
        M2C_FIELD(var_r3, void **, 8) = arg1;
    } else {
        M2C_FIELD(arg0, void **, 4) = arg1;
    }
    return arg1;
}
