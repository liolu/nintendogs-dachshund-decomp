#include "m2c.h"

void func_020ca4b8(void *arg0, void *arg1) {
    void *temp_r2;

    M2C_FIELD(M2C_FIELD(arg1, void **, 8), void **, 0xC) = (void *) M2C_FIELD(arg1, void **, 0xC);
    M2C_FIELD(M2C_FIELD(arg1, void **, 0xC), void **, 8) = (void *) M2C_FIELD(arg1, void **, 8);
    if (arg1 != M2C_FIELD(arg0, void **, 0x10)) {
        return;
    }
    temp_r2 = M2C_FIELD(arg1, void **, 0xC);
    if (temp_r2 == arg1) {
        M2C_FIELD(arg0, void **, 0x10) = NULL;
        return;
    }
    M2C_FIELD(arg0, void **, 0x10) = temp_r2;
}
