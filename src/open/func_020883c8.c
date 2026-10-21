#include "m2c.h"
void func_020883c8(s32 arg0) {
    void * volatile *node = (void * volatile *) arg0;
    void *temp_r1;
    void *temp_r2;

    temp_r2 = node[0];
    temp_r1 = node[1];
    if (temp_r2 != NULL) {
        M2C_FIELD(temp_r2, void **, 4) = temp_r1;
    }
    if (temp_r1 != NULL) {
        M2C_FIELD(temp_r1, void **, 0) = temp_r2;
    }
    node[0] = NULL;
    M2C_FIELD(arg0, void **, 4) = node[0];
}
