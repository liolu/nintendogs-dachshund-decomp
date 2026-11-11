/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02035264(u8 *, s32);                 /* extern */
s32 func_0203535c();                                /* extern */
s32 func_0203e5ac(u8 *, s32, s32);        /* extern */

void func_ov003_0218414c(u8 *arg0) {
    s16 temp_r0;
    s16 temp_r1;

    if (func_0203535c() != 0) {
        temp_r1 = (*(s16 *) ((u8 *) (arg0) + 0x152));
        switch (temp_r1) {                          /* switch 1; irregular */
            case 0x15C:                                 /* switch 1 */
                func_0203e5ac(arg0, 0, 0x15D);
                break;
            case 0x15E:                                 /* switch 1 */
                func_0203e5ac(arg0, 0, 0x15F);
                break;
            case 0x160:                                 /* switch 1 */
                func_0203e5ac(arg0, 0, 0x161);
                break;
        }
    }
    if (func_02035264(arg0, 1) == 0) {
        return;
    }
    temp_r0 = (*(s16 *) ((u8 *) (arg0) + 0x154));
    switch (temp_r0) {                              /* switch 2; irregular */
        case 24:                                        /* switch 2 */
            func_0203e5ac(arg0, 1, 0x19);
            return;
        case 26:                                        /* switch 2 */
            func_0203e5ac(arg0, 1, 0x1B);
            return;
        case 28:                                        /* switch 2 */
            func_0203e5ac(arg0, 1, 0x1D);
            return;
    }
}
