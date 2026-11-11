/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

extern void *data_02155660;

void func_020bd758(s32 arg0) {
    M2C_UNK (*temp_r3)(u16, s32, u16);
    M2C_UNK (*temp_r3_2)(u16, s32, u16);
    M2C_UNK (*temp_r3_3)(u16, s32, u16);
    M2C_UNK (*temp_r3_4)(u16, s32, u16);
    s32 temp_r0_2;
    s32 temp_r0_3;
    u16 temp_r0;

    if (M2C_FIELD(arg0, u16 *, 2) != 0) {
        return;
    }
    temp_r0 = M2C_FIELD(arg0, u16 *, 4);
    switch (temp_r0) {                              /* switch 1; irregular */
        case 7:                                         /* switch 1 */
            return;
        case 21:                                        /* switch 1 */
            temp_r0_2 = M2C_FIELD(data_02155660, s32 *, 0x20);
            switch (temp_r0_2) {                        /* switch 2; irregular */
                case 2:                                     /* switch 2 */
                    temp_r3 = M2C_FIELD(data_02155660, M2C_UNK(**)(u16, s32, u16), 0x14);
                    if (temp_r3 == NULL) {
                        return;
                    }
                    temp_r3(M2C_FIELD(arg0, u16 *, 0x12), M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, u16 *, 0x10));
                    return;
                case 3:                                     /* switch 2 */
                    temp_r3_2 = M2C_FIELD(data_02155660, M2C_UNK(**)(u16, s32, u16), 0x14);
                    if (temp_r3_2 == NULL) {
                        return;
                    }
                    temp_r3_2(0U, M2C_FIELD(arg0, s32 *, 0xC), M2C_FIELD(arg0, u16 *, 0x10));
                    return;
            }
            break;
        case 9:                                         /* switch 1 */
            temp_r0_3 = M2C_FIELD(data_02155660, s32 *, 0x20);
            switch (temp_r0_3) {                        /* switch 3; irregular */
                case 2:                                     /* switch 3 */
                    temp_r3_3 = M2C_FIELD(data_02155660, M2C_UNK(**)(u16, s32, u16), 0x14);
                    if (temp_r3_3 == NULL) {
                        return;
                    }
                    temp_r3_3(M2C_FIELD(arg0, u16 *, 0x12), 0, 0U);
                    return;
                case 3:                                     /* switch 3 */
                    temp_r3_4 = M2C_FIELD(data_02155660, M2C_UNK(**)(u16, s32, u16), 0x14);
                    if (temp_r3_4 == NULL) {
                        return;
                    }
                    temp_r3_4(0U, 0, 0U);
                    return;
            }
            break;
    }
}
