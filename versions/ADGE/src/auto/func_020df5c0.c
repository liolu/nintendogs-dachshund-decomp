/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0208de24(u16);                         /* extern */
M2C_UNK func_0208fd08(u16);                         /* extern */
M2C_UNK func_020df6f0(void *);                      /* extern */
M2C_UNK func_020e097c();                            /* extern */
s32 func_020e2990();                                /* extern */
M2C_UNK func_020e29bc(M2C_UNK);                     /* extern */
M2C_UNK func_020e3098(s32);                         /* extern */
M2C_UNK func_020e3128();                            /* extern */

void func_020df5c0(void *arg0, void *arg1) {
    u16 temp_r1;
    u16 temp_r1_2;

    temp_r1 = M2C_FIELD(arg1, u16 *, 2);
    switch (temp_r1) {                              /* switch 1 */
        default:                                        /* switch 1 */
            break;
        case 2:                                         /* switch 1 */
        case 3:                                         /* switch 1 */
            func_020e3128();
            break;
        case 4:                                         /* switch 1 */
            temp_r1_2 = M2C_FIELD(arg1, u16 *, 0x12);
            switch (temp_r1_2) {                        /* switch 2; irregular */
                case 1:                                     /* switch 2 */
                    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
                    break;
                case 3:                                     /* switch 2 */
                    M2C_FIELD(arg0, s32 *, 0x1C) = 2;
                    break;
                case 4:                                     /* switch 2 */
                    M2C_FIELD(arg0, s32 *, 0x1C) = 1;
                    break;
                default:                                    /* switch 2 */
                    M2C_FIELD(arg0, s32 *, 0x1C) = 0;
                    break;
            }
            func_020e3098(M2C_FIELD(arg0, s32 *, 0x1C));
            break;
        case 6:                                         /* switch 1 */
            M2C_FIELD(arg0, s32 *, 0x10) = 1;
            break;
        case 8:                                         /* switch 1 */
            M2C_FIELD(arg0, s32 *, 0x14) = 1;
            break;
        case 9:                                         /* switch 1 */
            func_0208fd08(M2C_FIELD(arg1, u16 *, 0x1C));
            break;
        case 10:                                        /* switch 1 */
            func_0208de24(M2C_FIELD(arg1, u16 *, 0x1C));
            break;
        case 11:                                        /* switch 1 */
            M2C_FIELD(arg0, s32 *, 0x18) = 1;
            break;
        case 1:                                         /* switch 1 */
            func_020e097c();
            break;
        case 12:                                        /* switch 1 */
            func_020df6f0(arg1);
            break;
    }
    if (M2C_FIELD(arg1, s16 *, 0) != 3) {
        return;
    }
    if (func_020e2990() == 0) {
        return;
    }
    M2C_FIELD(arg1, s16 *, 0x44) = 1;
    func_020e29bc(0);
}
