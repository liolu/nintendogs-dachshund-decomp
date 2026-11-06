/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a3b60(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020ab1e8();                            /* extern */
M2C_UNK func_020ab1f8();                            /* extern */
M2C_UNK func_020ab208();                            /* extern */
M2C_UNK func_020ab218();                            /* extern */
s32 func_020b0dec();                                /* extern */
extern M2C_UNK data_021409fc;
extern M2C_UNK data_02140a10;
extern M2C_UNK data_02140a24;
extern M2C_UNK data_02140a3c;
extern M2C_UNK data_02140a54;
extern M2C_UNK data_02140a68;
extern M2C_UNK data_02140a7c;
extern M2C_UNK data_02140a94;
extern M2C_UNK data_02140aac;
extern M2C_UNK data_02140ac0;
extern M2C_UNK data_02140ad4;
extern M2C_UNK data_02140aec;

void func_020be6e4(M2C_UNK arg0, void *arg1) {
    s32 temp_r0;
    u32 temp_r1;

    temp_r1 = M2C_FIELD(arg1, u32 *, 0x38);
    switch (temp_r1) {                              /* switch 1 */
        case 0:                                         /* switch 1 */
            break;
        default:                                        /* switch 1 */
            break;
        case 1:                                         /* switch 1 */
            func_020a3b60(arg0, &data_021409fc, &data_02140a10, &data_02140a24, &data_02140a3c);
            func_020ab218();
            M2C_FIELD(arg1, s32 *, 0x3C) = 0x78;
            break;
        case 2:                                         /* switch 1 */
            func_020a3b60(arg0, &data_02140a54, &data_02140a68, &data_02140a7c, &data_02140a94);
            func_020ab208();
            M2C_FIELD(arg1, s32 *, 0x3C) = 0x78;
            break;
        case 3:                                         /* switch 1 */
            func_020a3b60(arg0, &data_02140aac, &data_02140ac0, &data_02140ad4, &data_02140aec);
            temp_r0 = func_020b0dec();
            switch (temp_r0) {                          /* switch 2; irregular */
                case 1:                                     /* switch 2 */
                case 2:                                     /* switch 2 */
                    func_020ab1f8();
                    break;
                case 3:                                     /* switch 2 */
                    func_020ab1e8();
                    break;
            }
            M2C_FIELD(arg1, s32 *, 0x3C) = 0x78;
            break;
    }
    M2C_FIELD(arg1, u32 *, 0x38) = 0U;
}
