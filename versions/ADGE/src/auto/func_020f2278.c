/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020d6068(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020d6158(M2C_UNK, M2C_UNK *, M2C_UNK *, M2C_UNK *, M2C_UNK *); /* extern */
M2C_UNK func_020dda34();                            /* extern */
M2C_UNK func_020dda80();                            /* extern */
M2C_UNK func_020ddacc();                            /* extern */
extern M2C_UNK data_02146ff4;
extern M2C_UNK data_02147008;
extern M2C_UNK data_0214701c;
extern M2C_UNK data_02147034;
extern M2C_UNK data_0214704c;
extern M2C_UNK data_02147060;
extern M2C_UNK data_02147074;
extern M2C_UNK data_0214708c;
extern M2C_UNK data_021470a4;
extern M2C_UNK data_021470b8;
extern M2C_UNK data_021470cc;
extern M2C_UNK data_021470e4;
extern M2C_UNK data_021470fc;
extern M2C_UNK data_02147110;
extern M2C_UNK data_02147124;
extern M2C_UNK data_0214713c;
extern void *data_02159e70;

void func_020f2278(M2C_UNK arg0, void *arg1) {
    s32 temp_r1;
    u32 temp_r0;

    temp_r1 = M2C_FIELD(arg1, s32 *, 0x14);
    if (temp_r1 > 0) {
        M2C_FIELD(arg1, s32 *, 0x14) = (s32) (temp_r1 - 1);
        if (M2C_FIELD(arg1, s32 *, 0x14) == 0) {
            func_020d6068(0, 4, 1);
        }
    }
    temp_r0 = M2C_FIELD(arg1, u32 *, 0xC);
    switch (temp_r0) {
        case 0:
            break;
        default:
            break;
        case 1:
            if (M2C_FIELD(data_02159e70, s32 *, 0xA8) == 7) {
                func_020d6158(arg0, &data_02146ff4, &data_02147008, &data_0214701c, &data_02147034);
            } else {
                func_020d6158(arg0, &data_0214704c, &data_02147060, &data_02147074, &data_0214708c);
            }
            func_020ddacc();
            M2C_FIELD(arg1, s32 *, 0x10) = 0x1E;
            M2C_FIELD(arg1, s32 *, 0x14) = 2;
            break;
        case 2:
            func_020d6158(arg0, &data_021470a4, &data_021470b8, &data_021470cc, &data_021470e4);
            func_020dda80();
            M2C_FIELD(arg1, s32 *, 0x10) = 0x1E;
            M2C_FIELD(arg1, s32 *, 0x14) = 2;
            break;
        case 3:
            func_020d6158(arg0, &data_021470fc, &data_02147110, &data_02147124, &data_0214713c);
            func_020dda34();
            M2C_FIELD(arg1, s32 *, 0x10) = 0x1E;
            M2C_FIELD(arg1, s32 *, 0x14) = 2;
            break;
    }
    M2C_FIELD(arg1, u32 *, 0xC) = 0U;
}
