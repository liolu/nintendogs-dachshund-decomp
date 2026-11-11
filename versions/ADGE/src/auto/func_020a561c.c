/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b83ec(void *, void *);              /* extern */
M2C_UNK func_020b86d8(void *, void *);              /* extern */
M2C_UNK func_020b8774(void *, void *);              /* extern */
M2C_UNK func_020b88b4(void *, void *);              /* extern */
M2C_UNK func_020b89fc(void *, void *);              /* extern */
M2C_UNK func_020b970c(void *, void *);              /* extern */
M2C_UNK func_020b993c(void *, void *);              /* extern */
M2C_UNK func_020ba058(void *, void *);              /* extern */
M2C_UNK func_020bc364(void *, void *);              /* extern */
M2C_UNK func_020bc3a4(void *, void *);              /* extern */
M2C_UNK func_020bc45c(void *, void *);              /* extern */
M2C_UNK func_020bc574(void *, void *);              /* extern */
M2C_UNK func_020bd200(void *, void *);              /* extern */
M2C_UNK func_020bd4d4(void *, void *);              /* extern */
M2C_UNK func_020c1d04(void *, void *);              /* extern */
M2C_UNK func_020c1de0(void *, void *);              /* extern */
M2C_UNK func_020c1e3c(void *, void *);              /* extern */
M2C_UNK func_020c1e9c(void *, void *);              /* extern */
M2C_UNK func_020c2ce4(void *, void *);              /* extern */
M2C_UNK func_020c2d10(void *, void *);              /* extern */
M2C_UNK func_020c2d2c(void *, void *);              /* extern */
M2C_UNK func_020c348c(void *, void *);              /* extern */
M2C_UNK func_020c9c4c(void *);                      /* extern */

void func_020a561c(void *arg0) {
    s16 temp_r0;
    s16 temp_r0_2;
    s16 temp_r1;

    temp_r1 = M2C_FIELD(arg0, s16 *, 0x84);
    if (temp_r1 != M2C_FIELD(arg0, s16 *, 0x82)) {
        M2C_FIELD(arg0, s16 *, 0x86) = temp_r1;
        M2C_FIELD(arg0, s16 *, 0x84) = (s16) M2C_FIELD(arg0, s16 *, 0x82);
        temp_r0                      = M2C_FIELD(arg0, s16 *, 0x84);
        switch (temp_r0) {                          /* switch 1 */
            default:                                    /* switch 1 */
                break;
            case 1:                                     /* switch 1 */
                func_020b970c(arg0 + 0x88, arg0);
                break;
            case 2:                                     /* switch 1 */
                func_020b86d8(arg0 + 0x100, arg0);
                break;
            case 3:                                     /* switch 1 */
                func_020ba058(arg0 + 0x108, arg0);
                break;
            case 4:                                     /* switch 1 */
                func_020b88b4(arg0 + 0x144, arg0);
                break;
            case 5:                                     /* switch 1 */
                func_020bc3a4(arg0 + 0x1B4, arg0);
                break;
            case 6:                                     /* switch 1 */
                func_020bc574(arg0 + 0x1F0, arg0);
                break;
            case 7:                                     /* switch 1 */
                func_020bd4d4(arg0 + 0x21C, arg0);
                break;
            case 8:                                     /* switch 1 */
                func_020c348c(arg0 + 0x27C, arg0);
                break;
            case 9:                                     /* switch 1 */
                func_020c1de0(arg0 + 0x2C4, arg0);
                break;
            case 10:                                    /* switch 1 */
                func_020c2d10(arg0 + 0x2F0, arg0);
                break;
            case 11:                                    /* switch 1 */
                func_020c1e9c(arg0 + 0x318, arg0);
                break;
        }
    }
    temp_r0_2 = M2C_FIELD(arg0, s16 *, 0x84);
    switch (temp_r0_2) {                            /* switch 2 */
        default:                                        /* switch 2 */
            break;
        case 1:                                         /* switch 2 */
            func_020b89fc(arg0 + 0x88, arg0);
            break;
        case 2:                                         /* switch 2 */
            func_020b83ec(arg0 + 0x100, arg0);
            break;
        case 3:                                         /* switch 2 */
            func_020b993c(arg0 + 0x108, arg0);
            break;
        case 4:                                         /* switch 2 */
            func_020b8774(arg0 + 0x144, arg0);
            break;
        case 5:                                         /* switch 2 */
            func_020bc364(arg0 + 0x1B4, arg0);
            break;
        case 6:                                         /* switch 2 */
            func_020bc45c(arg0 + 0x1F0, arg0);
            break;
        case 7:                                         /* switch 2 */
            func_020bd200(arg0 + 0x21C, arg0);
            break;
        case 8:                                         /* switch 2 */
            func_020c2d2c(arg0 + 0x27C, arg0);
            break;
        case 9:                                         /* switch 2 */
            func_020c1d04(arg0 + 0x2C4, arg0);
            break;
        case 10:                                        /* switch 2 */
            func_020c2ce4(arg0 + 0x2F0, arg0);
            break;
        case 11:                                        /* switch 2 */
            func_020c1e3c(arg0 + 0x318, arg0);
            break;
    }
    func_020c9c4c(arg0);
}
