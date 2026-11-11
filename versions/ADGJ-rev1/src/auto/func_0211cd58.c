/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_0210614c();                                /* extern */
s16 func_0211290c(M2C_UNK);                         /* extern */
M2C_UNK func_02113418(void *, s16);                 /* extern */

void func_0211cd58(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;

    if (func_0210614c() == 0xA) {
        M2C_FIELD(arg0, s32 *, 0) = 0;
        temp_r0                   = M2C_FIELD(arg0, s32 *, 0);
        switch (temp_r0) {                          /* switch 1; irregular */
            case 0:                                     /* switch 1 */
                M2C_FIELD(arg0, s16 *, 4) = 0;
                return;
            case 1:                                     /* switch 1 */
                M2C_FIELD(arg0, s16 *, 0x5C) = func_0211290c(-1);
                return;
            case 2:                                     /* switch 1 */
                M2C_FIELD(arg0, s16 *, 0x5C) = func_0211290c(-1);
                func_02113418(arg0 + 8, M2C_FIELD(arg0, s16 *, 0x5C));
                M2C_FIELD(arg0, s32 *, 0x58) = 0;
                return;
        }
    } else {
        if (func_0210614c() != 0xB) {
            return;
        }
        M2C_FIELD(arg0, s32 *, 0) = 2;
        temp_r0_2                 = M2C_FIELD(arg0, s32 *, 0);
        switch (temp_r0_2) {                        /* switch 2; irregular */
            case 0:                                     /* switch 2 */
                M2C_FIELD(arg0, s16 *, 4) = 0;
                return;
            case 1:                                     /* switch 2 */
                M2C_FIELD(arg0, s16 *, 0x5C) = func_0211290c(-1);
                return;
            case 2:                                     /* switch 2 */
                M2C_FIELD(arg0, s16 *, 0x5C) = func_0211290c(-1);
                func_02113418(arg0 + 8, M2C_FIELD(arg0, s16 *, 0x5C));
                M2C_FIELD(arg0, s32 *, 0x58) = 0;
                return;
        }
    }
}
