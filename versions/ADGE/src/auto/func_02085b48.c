/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void func_02085b48(void *arg0, void *arg1) {
    void *temp_r2;

    temp_r2 = M2C_FIELD(arg0, void **, 0);
    if (temp_r2 == NULL) {
        M2C_FIELD(arg0, void **, 0) = arg1;
        M2C_FIELD(arg1, void **, 0) = NULL;
        M2C_FIELD(arg1, void **, 4) = (void *) M2C_FIELD(arg1, void **, 0);
    } else {
        M2C_FIELD(arg1, void **, 0)                        = temp_r2;
        M2C_FIELD(arg1, void **, 4)                        = NULL;
        M2C_FIELD(M2C_FIELD(arg0, void **, 0), void **, 4) = arg1;
        M2C_FIELD(arg0, void **, 0)                        = arg1;
    }
    M2C_FIELD(arg0, s32 *, 4) = (s32) (M2C_FIELD(arg0, s32 *, 4) + 1);
}
