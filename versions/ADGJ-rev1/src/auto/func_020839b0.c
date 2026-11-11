/* compiler: 1.2/sp2p3 -O4,s */
#include "m2c.h"

s32 func_02083b0c(M2C_UNK);                         /* extern */

void func_020839b0(void *arg0) {
    u16 temp_r2;

    temp_r2                   = *(u16 *) 0x04000204;
    M2C_FIELD(arg0, u16 *, 0) = temp_r2;
    *(u16 *) 0x04000204       = (temp_r2 & 0xFFE3) | 0xF;
    if (func_02083b0c(1) != 0) {
        M2C_FIELD(arg0, s16 *, 4) = 1;
        M2C_FIELD(arg0, u16 *, 2) = (u16) * (u16 *) 0x027FFF72;
        *(s16 *) 0x09FE2FFE       = 0x20;
        *(u16 *) 0x027FFF72       = 0x20;
    }
}
