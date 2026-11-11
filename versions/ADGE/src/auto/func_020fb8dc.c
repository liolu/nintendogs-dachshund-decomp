/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern void *data_0214d750;

s32 func_020fb8dc(s32 arg0) {
    s32 var_r0;
    u32 temp_r1;
    u32 temp_r2;

    temp_r2 = M2C_FIELD(data_0214d750, u32 *, 0x2C);
    temp_r1 = M2C_FIELD(data_0214d750, u32 *, 0x30);
    switch (arg0) {                                 /* irregular */
        case 0:
            if (temp_r2 < 6U) {
                return 3;
            }
            if (temp_r2 < 7U) {
                return 0;
            }
            if (temp_r2 < 0x12U) {
                return 1;
            }
            if (temp_r2 < 0x13U) {
                var_r0 = 2;
            } else {
                var_r0 = 3;
            }
            return var_r0;
        case 1:
            if (temp_r2 < 6U) {
                return 3;
            }
            if ((temp_r2 < 7U) && (temp_r1 < 0x1EU)) {
                return 3;
            }
            if (temp_r2 < 0x12U) {
                return 1;
            }
            if ((temp_r2 < 0x13U) && (temp_r1 < 0x1EU)) {
                return 1;
            }
            return 3;
        case 2:
            return 1;
        default:
            return 1;
    }
}
