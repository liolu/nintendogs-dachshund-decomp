/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d6158(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020dd9f4();                            /* extern */
M2C_UNK func_020dda04();                            /* extern */
M2C_UNK func_020dda14();                            /* extern */
M2C_UNK func_020dda24();                            /* extern */
s32 func_020e3b08();                                /* extern */
extern M2C_UNK data_02146d2c;
extern M2C_UNK data_02146d40;
extern M2C_UNK data_02146d54;
extern M2C_UNK data_02146d6c;
extern M2C_UNK data_02146d84;
extern M2C_UNK data_02146d98;
extern M2C_UNK data_02146dac;
extern M2C_UNK data_02146dc4;
extern M2C_UNK data_02146ddc;
extern M2C_UNK data_02146df0;
extern M2C_UNK data_02146e04;
extern M2C_UNK data_02146e1c;

void func_020f1644(M2C_UNK arg0, void *arg1) {
    s32 temp_r0;
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg1, u32 *, 0x38);
    switch (temp_r1) {                              /* switch 1 */
        case 0:                                         /* switch 1 */
            break;
        default:                                        /* switch 1 */
            break;
        case 1:                                         /* switch 1 */
            func_020d6158(arg0, &data_02146d2c, &data_02146d40, &data_02146d54, &data_02146d6c);
            func_020dda24();
            M2C_FIELD(arg1, s32 *, 0x3C) = 0x78;
            break;
        case 2:                                         /* switch 1 */
            func_020d6158(arg0, &data_02146d84, &data_02146d98, &data_02146dac, &data_02146dc4);
            func_020dda14();
            M2C_FIELD(arg1, s32 *, 0x3C) = 0x78;
            break;
        case 3:                                         /* switch 1 */
            func_020d6158(arg0, &data_02146ddc, &data_02146df0, &data_02146e04, &data_02146e1c);
            temp_r0 = func_020e3b08();
            switch (temp_r0) {                          /* switch 2; irregular */
                case 1:                                     /* switch 2 */
                case 2:                                     /* switch 2 */
                    func_020dda04();
                    break;
                case 3:                                     /* switch 2 */
                    func_020dd9f4();
                    break;
            }
            M2C_FIELD(arg1, s32 *, 0x3C) = 0x78;
            break;
    }
    M2C_FIELD(arg1, u32 *, 0x38) = 0U;
}
