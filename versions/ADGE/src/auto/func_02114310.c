/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a6b10();                                /* extern */
s32 func_020cf588(M2C_UNK, s16);                    /* extern */
extern void *data_0215a064;

void func_02114310(s16 arg0) {
    s32 temp_r0;

    temp_r0 = func_020a6b10();
    if (((temp_r0 == 2) || (temp_r0 == 7) || (temp_r0 == 0xF)) && (func_020cf588(0, arg0) > 0)) {
        M2C_FIELD(data_0215a064, s16 *, 0x7E) = arg0;
    }
    M2C_FIELD(data_0215a064, s16 *, 0x7C) = -1;
}
