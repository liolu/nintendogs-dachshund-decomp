/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02105c24(M2C_UNK);                     /* extern */
M2C_UNK func_02105cc8();                            /* extern */
M2C_UNK func_02105ce8();                            /* extern */
M2C_UNK func_02105d08(M2C_UNK);                     /* extern */
s32 func_0210614c();                                /* extern */

void func_020acee4(void *arg0) {
    s32 temp_r0;
    u16 temp_r0_2;
    u16 temp_r0_3;
    u16 temp_r0_4;

    temp_r0 = func_0210614c();
    switch (temp_r0) {                              /* switch 1; irregular */
        case 7:                                         /* switch 1 */
            temp_r0_2 = M2C_FIELD(arg0, u16 *, 0x16);
            switch (temp_r0_2) {                        /* switch 2; irregular */
                case 0:                                     /* switch 2 */
                    func_02105d08(0);
                    return;
                case 1:                                     /* switch 2 */
                    func_02105d08(1);
                    return;
            }
            break;
        case 10:                                        /* switch 1 */
            temp_r0_3 = M2C_FIELD(arg0, u16 *, 0x16);
            switch (temp_r0_3) {                        /* switch 3; irregular */
                case 0:                                     /* switch 3 */
                    func_02105ce8();
                    return;
                case 1:                                     /* switch 3 */
                    func_02105cc8();
                    return;
            }
            break;
        case 14:                                        /* switch 1 */
            temp_r0_4 = M2C_FIELD(arg0, u16 *, 0x16);
            switch (temp_r0_4) {                        /* switch 4; irregular */
                case 0:                                     /* switch 4 */
                    func_02105c24(1);
                    return;
                case 2:                                     /* switch 4 */
                    func_02105c24(0);
                    return;
            }
            break;
    }
}
