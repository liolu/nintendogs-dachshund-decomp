/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020a61c0();                                /* extern */
M2C_UNK func_020a6200(M2C_UNK, s16);                /* extern */
u32 func_020a6d78(s16);                             /* extern */
M2C_UNK func_02114218();                            /* extern */

void func_02114190(void *arg0) {
    s16 temp_r1;
    u32 temp_r0;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x76);
    switch (temp_r1) {                              /* switch 1; irregular */
        case 1:                                         /* switch 1 */
            if (func_020a61c0() == 0) {
                return;
            }
            func_020a6200(0, M2C_FIELD(arg0, s16 *, 0x7C));
            temp_r0 = func_020a6d78(M2C_FIELD(arg0, s16 *, 0x7C));
            switch (temp_r0) {                          /* switch 2 */
                default:                                    /* switch 2 */
                    break;
                case 0:                                     /* switch 2 */
                case 1:                                     /* switch 2 */
                case 2:                                     /* switch 2 */
                case 3:                                     /* switch 2 */
                    M2C_FIELD(arg0, s16 *, 0x78) = 1;
                    break;
            }
            M2C_FIELD(arg0, s16 *, 0x76) = 2;
            return;
        case 2:                                         /* switch 1 */
            func_02114218(arg0);
            return;
    }
}
