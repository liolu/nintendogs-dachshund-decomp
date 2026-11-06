/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020a3a70(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020a3b60(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020ab228();                            /* extern */
M2C_UNK func_020ab274();                            /* extern */
M2C_UNK func_020ab2c0();                            /* extern */
extern M2C_UNK data_02140cc4;
extern M2C_UNK data_02140cd8;
extern M2C_UNK data_02140cec;
extern M2C_UNK data_02140d04;
extern M2C_UNK data_02140d1c;
extern M2C_UNK data_02140d30;
extern M2C_UNK data_02140d44;
extern M2C_UNK data_02140d5c;
extern M2C_UNK data_02140d74;
extern M2C_UNK data_02140d88;
extern M2C_UNK data_02140d9c;
extern M2C_UNK data_02140db4;
extern M2C_UNK data_02140dcc;
extern M2C_UNK data_02140de0;
extern M2C_UNK data_02140df4;
extern M2C_UNK data_02140e0c;
extern void *data_02153740;

void func_020bf318(M2C_UNK arg0, void *arg1) {
    s32 temp_r1;
    u32 temp_r0;

    temp_r1 = M2C_FIELD(arg1, s32 *, 0x14);
    if (temp_r1 > 0) {
        M2C_FIELD(arg1, s32 *, 0x14) = (s32) (temp_r1 - 1);
        if (M2C_FIELD(arg1, s32 *, 0x14) == 0) {
            func_020a3a70(0, 4, 1);
        }
    }
    temp_r0 = M2C_FIELD(arg1, u32 *, 0xC);
    switch (temp_r0) {
        case 0:
            break;
        default:
            break;
        case 1:
            if (M2C_FIELD(data_02153740, s32 *, 0xA8) == 7) {
                func_020a3b60(arg0, &data_02140cc4, &data_02140cd8, &data_02140cec, &data_02140d04);
            } else {
                func_020a3b60(arg0, &data_02140d1c, &data_02140d30, &data_02140d44, &data_02140d5c);
            }
            func_020ab2c0();
            M2C_FIELD(arg1, s32 *, 0x10) = 0x1E;
            M2C_FIELD(arg1, s32 *, 0x14) = 2;
            break;
        case 2:
            func_020a3b60(arg0, &data_02140d74, &data_02140d88, &data_02140d9c, &data_02140db4);
            func_020ab274();
            M2C_FIELD(arg1, s32 *, 0x10) = 0x1E;
            M2C_FIELD(arg1, s32 *, 0x14) = 2;
            break;
        case 3:
            func_020a3b60(arg0, &data_02140dcc, &data_02140de0, &data_02140df4, &data_02140e0c);
            func_020ab228();
            M2C_FIELD(arg1, s32 *, 0x10) = 0x1E;
            M2C_FIELD(arg1, s32 *, 0x14) = 2;
            break;
    }
    M2C_FIELD(arg1, u32 *, 0xC) = 0U;
}
