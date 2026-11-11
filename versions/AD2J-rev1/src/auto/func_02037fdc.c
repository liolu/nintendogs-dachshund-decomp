/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_021388f0;
extern void *data_02153704;

s32 func_02037fdc(void *arg0) {
    s32 var_r0;
    s32 var_r0_2;
    s8 temp_r0;
    s8 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s8 *, 0xA4);
    switch (temp_r1) {                              /* switch 1; irregular */
        case 4:                                         /* switch 1 */
        case 5:                                         /* switch 1 */
            return 1;
        case 1:                                         /* switch 1 */
            if (*((M2C_UNK *) ((s8 *) &data_021388f0 + (M2C_FIELD(data_02153704, u16 *, 6) * 4))) == 0) {
                var_r0 = 2;
            } else {
                var_r0 = 3;
            }
            return var_r0;
        default:                                        /* switch 1 */
            temp_r0 = M2C_FIELD(arg0, s8 *, 0xA6);
            switch (temp_r0) {                          /* switch 2 */
                default:                                    /* switch 2 */
            /* fallthrough */
                case 0:                                     /* switch 2 */
                case 1:                                     /* switch 2 */
                case 2:                                     /* switch 2 */
                case 5:                                     /* switch 2 */
                case 6:                                     /* switch 2 */
                    if (*((M2C_UNK *) ((s8 *) &data_021388f0 + (M2C_FIELD(data_02153704, u16 *, 6) * 4))) == 0) {
                        var_r0_2 = 2;
                    } else {
                        var_r0_2 = 3;
                    }
                    return var_r0_2;
                case 3:                                     /* switch 2 */
                    return 2;
                case 4:                                     /* switch 2 */
                case 7:                                     /* switch 2 */
                case 8:                                     /* switch 2 */
                    return 1;
            }
            break;
    }
}
