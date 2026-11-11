/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s16 func_0211290c(M2C_UNK);                         /* extern */
M2C_UNK func_02113418(void *, s16);                 /* extern */

void func_0211cecc(void *arg0, s32 arg1) {
    s32 temp_r0;

    M2C_FIELD(arg0, s32 *, 0) = arg1;
    temp_r0                   = M2C_FIELD(arg0, s32 *, 0);
    switch (temp_r0) {                              /* irregular */
        case 0:
            M2C_FIELD(arg0, s16 *, 4) = 0;
            return;
        case 1:
            M2C_FIELD(arg0, s16 *, 0x5C) = func_0211290c(-1);
            return;
        case 2:
            M2C_FIELD(arg0, s16 *, 0x5C) = func_0211290c(-1);
            func_02113418(arg0 + 8, M2C_FIELD(arg0, s16 *, 0x5C));
            M2C_FIELD(arg0, s32 *, 0x58) = 0;
            return;
    }
}
