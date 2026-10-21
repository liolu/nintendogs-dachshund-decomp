#include "engine.h"
#include "m2c.h"
void *func_0207ff40(s32 arg0) {
    void *temp_r2;
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg0, void **, 0x7C);
    temp_r2 = M2C_FIELD(temp_r3, void **, 0x10);
    if (temp_r2 == NULL) {
        M2C_FIELD(arg0, void **, 0x80) = temp_r2;
    } else {
        M2C_FIELD(temp_r2, void **, 0xC) = NULL;
    }
    M2C_FIELD(arg0, void **, 0x7C) = temp_r2;
    return temp_r3;
}
