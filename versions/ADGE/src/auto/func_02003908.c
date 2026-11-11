/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0207e2f4();                            /* extern */
M2C_UNK func_0207e314();                            /* extern */

void func_02003908(s32 arg0, s32 *arg1, s32 arg2) {
    s32 temp_ip;

    temp_ip = *arg1;
    switch (temp_ip) {                              /* irregular */
        case 0x45585048:
            func_0207e314(arg0, arg1, arg2);
            return;
        case 0x46524D48:
            func_0207e2f4(arg0, arg1, arg2);
            return;
    }
}
