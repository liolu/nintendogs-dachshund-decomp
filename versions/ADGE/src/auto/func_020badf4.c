/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020badf4(s32 arg0) {
    s32 *temp_r1;

    temp_r1 = M2C_FIELD(arg0, s32 **, 0);
    if (temp_r1 != NULL) {
        M2C_FIELD(arg0, s32 *, 8) = (s32) (*temp_r1 - 1);
    } else {
        M2C_FIELD(arg0, s32 *, 8) = 0;
    }
    M2C_FIELD(arg0, s32 *, 4) = 0;
}
