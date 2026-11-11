/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02070cd0(void **arg0, s16 arg1) {
    void *temp_r3;

    temp_r3 = *arg0;
    if (temp_r3 != NULL) {
        M2C_FIELD(temp_r3, s16 *, 0x34) = 1;
        M2C_FIELD(*arg0, s16 *, 0x38)   = arg1;
    }
}
