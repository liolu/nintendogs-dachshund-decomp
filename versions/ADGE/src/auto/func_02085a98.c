/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02085a98(void *arg0, void *arg1) {
    void *temp_r3;

    temp_r3 = M2C_FIELD(arg1, void **, 0);
    if (temp_r3 == NULL) {
        if (M2C_FIELD(arg0, void **, 0) == arg1) {
            M2C_FIELD(arg0, void **, 0) = NULL;
        } else {
            *M2C_FIELD(arg1, void ***, 4) = NULL;
        }
    } else if (M2C_FIELD(arg0, void **, 0) == arg1) {
        M2C_FIELD(arg0, void **, 0)                      = temp_r3;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), s32 *, 4) = 0;
    } else {
        M2C_FIELD(temp_r3, void ***, 4) = (void **) M2C_FIELD(arg1, void ***, 4);
        *M2C_FIELD(arg1, void ***, 4)   = M2C_FIELD(arg1, void **, 0);
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) - 1);
    return arg1;
}
