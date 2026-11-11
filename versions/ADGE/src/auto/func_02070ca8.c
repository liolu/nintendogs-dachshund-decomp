#include "m2c.h"

void func_02070ca8(void **arg0, s16 arg1, s16 arg2) {
    void *temp_ip;

    temp_ip = *arg0;
    if (temp_ip == NULL) {
        return;
    }
    M2C_FIELD(temp_ip, s16 *, 0x34) = 2;
    M2C_FIELD(*arg0, s16 *, 0x38)   = arg1;
    M2C_FIELD(*arg0, s16 *, 0x3A)   = arg2;
}
