/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_020ca4f4(void *arg0, void *arg1) {
    void *temp_r0;
    void *temp_r2;

    if (arg0 == NULL) {
        return;
    }
    if (arg1 == NULL) {
        return;
    }
    temp_r2 = M2C_FIELD(arg0, void **, 0x10);
    if (temp_r2 == NULL) {
        M2C_FIELD(arg0, void **, 0x10) = arg1;
        M2C_FIELD(arg1, void **, 8)    = arg1;
        M2C_FIELD(arg1, void **, 0xC)  = arg1;
        return;
    }
    temp_r0                          = M2C_FIELD(temp_r2, void **, 8);
    M2C_FIELD(arg1, void **, 8)      = temp_r0;
    M2C_FIELD(arg1, void **, 0xC)    = temp_r2;
    M2C_FIELD(temp_r2, void **, 8)   = arg1;
    M2C_FIELD(temp_r0, void **, 0xC) = arg1;
}
