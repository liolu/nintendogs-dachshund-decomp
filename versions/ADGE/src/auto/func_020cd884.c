/* compiler: 1.2/sp2p3  */
#include "m2c.h"

s32 func_020cd884(void *arg0, s32 arg1, s32 arg2, s32 arg3, s16 arg4) {
    s16 temp_ip;
    s16 temp_r1;
    s32 var_r4;

    var_r4 = 0;
    if ((M2C_FIELD(arg0, u16 *, 0) == 0xFFFF) || (temp_ip = M2C_FIELD(arg0, s16 *, 0x14), (arg2 < (s32) temp_ip))) {
        var_r4 = 1;
    } else if (arg2 == temp_ip) {
        switch (arg1) {                             /* irregular */
            case 0:
                if (arg3 > (s32) M2C_FIELD(arg0, s16 *, 0x16)) {
                    var_r4 = 1;
                }
                break;
            case 1:
                temp_r1 = M2C_FIELD(arg0, s16 *, 0x16);
                if (arg3 > (s32) temp_r1) {
                    var_r4 = 1;
                } else if (arg3 == temp_r1) {
                    if ((s32) arg4 < (s32) M2C_FIELD(arg0, s16 *, 0x18)) {
                        var_r4 = 1;
                    }
                }
                break;
            case 2:
                if (arg3 > (s32) M2C_FIELD(arg0, s16 *, 0x16)) {
                    var_r4 = 1;
                }
                break;
        }
    }
    return var_r4;
}
