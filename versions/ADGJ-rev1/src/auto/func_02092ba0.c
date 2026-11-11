/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020c9d30(M2C_UNK, s16);                    /* extern */
s32 func_02106e90();                                /* extern */
extern void *data_02153720;

void func_02092ba0(s16 arg0) {
    s32 temp_r0;

    temp_r0 = func_02106e90();
    if (((temp_r0 == 2) || (temp_r0 == 7) || (temp_r0 == 0xF)) && (func_020c9d30(0, arg0) > 0)) {
        M2C_FIELD(data_02153720, s16 *, 0x7E) = arg0;
    }
    M2C_FIELD(data_02153720, s16 *, 0x7C) = -1;
}
