/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_020bec94(void);
void func_020bf8c0(void);
M2C_UNK func_020c04f0(M2C_UNK, M2C_UNK);
M2C_UNK func_020c080c(void);

extern void *data_02155660;

void func_020bf3e0(void) {
    M2C_UNK sp0;
    u32 temp_r0;
    u32 temp_r0_2;
    u32 temp_r0_3;

    if (M2C_FIELD(data_02155660, s32 *, 0x2C) != 0) {
        M2C_FIELD(data_02155660, s32 *, 0x2C) = 0;
        M2C_FIELD(data_02155660, s16 *, 0x28) = 0;
        M2C_FIELD(data_02155660, s16 *, 0x2A) = 0;
    }
    temp_r0 = M2C_FIELD(data_02155660, u32 *, 0x20);
    switch (temp_r0) {                              /* switch 1 */
        case 0:                                         /* switch 1 */
        case 1:                                         /* switch 1 */
            break;
        default:                                        /* switch 1 */
            break;
        case 4:                                         /* switch 1 */
            func_020bf8c0();
            temp_r0_2 = (u32) func_020c080c();
            switch (temp_r0_2) {                        /* switch 2 */
                default:                                    /* switch 2 */
                    break;
                case 3:                                     /* switch 2 */
                case 4:                                     /* switch 2 */
                case 5:                                     /* switch 2 */
                case 6:                                     /* switch 2 */
                case 7:                                     /* switch 2 */
                case 8:                                     /* switch 2 */
                case 9:                                     /* switch 2 */
                case 10:                                    /* switch 2 */
                case 11:                                    /* switch 2 */
                    M2C_FIELD(data_02155660, u32 *, 0x20) = 4U;
                    M2C_FIELD(data_02155660, s32 *, 0x24) = 1;
                    if (M2C_FIELD(data_02155660, s16 *, 0x30) == 0) {
                        M2C_FIELD(data_02155660, s16 *, 0x30) = 1;
                    }
                    break;
            }
            break;
        case 2:                                         /* switch 1 */
        case 3:                                         /* switch 1 */
            func_020bf8c0();
            temp_r0_3 = (u32) func_020c080c();
            switch (temp_r0_3) {                        /* switch 3 */
                default:                                    /* switch 3 */
                    break;
                case 3:                                     /* switch 3 */
                case 4:                                     /* switch 3 */
                case 5:                                     /* switch 3 */
                case 6:                                     /* switch 3 */
                case 7:                                     /* switch 3 */
                case 8:                                     /* switch 3 */
                case 9:                                     /* switch 3 */
                case 10:                                    /* switch 3 */
                case 11:                                    /* switch 3 */
                    M2C_FIELD(data_02155660, u32 *, 0x20) = 4U;
                    M2C_FIELD(data_02155660, s32 *, 0x24) = 1;
                    if (M2C_FIELD(data_02155660, s16 *, 0x30) == 0) {
                        M2C_FIELD(data_02155660, s16 *, 0x30) = 1;
                    }
                    break;
            }
            break;
    }
    if (M2C_FIELD(data_02155660, u32 *, 0x20) != 1) {
        return;
    }
    M2C_FIELD(data_02155660, u32 *, 0x20) = 4U;
    if (func_020c04f0((s32) func_020bec94, (s32) &sp0) != 0) {
        M2C_FIELD(data_02155660, s32 *, 0x24) = 0;
    }
}
