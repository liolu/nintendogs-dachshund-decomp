/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020eb9a8(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020eb9fc(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020f0fd8(void *);                      /* extern */
extern M2C_UNK data_02146f44;
extern M2C_UNK data_02146f54;
extern void *data_02159e70;

void func_020f1db0(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 > 0) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_r0 - 1);
        if (M2C_FIELD(arg0, s32 *, 4) == 0) {
            temp_r0_2 = M2C_FIELD(data_02159e70, s32 *, 0xA8);
            if (temp_r0_2 == 7) {
                if (temp_r0_2 == 7) {
                    func_020eb9fc(0, 0, 0);
                }
                func_020f0fd8(arg0 + 0x124);
            }
        }
    }
    temp_r0_3 = M2C_FIELD(arg0, s32 *, 8);
    if (temp_r0_3 <= 0) {
        return;
    }
    M2C_FIELD(arg0, s32 *, 8) = (s32) (temp_r0_3 - 1);
    if (M2C_FIELD(arg0, s32 *, 8) != 0) {
        return;
    }
    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) != 7) {
        return;
    }
    func_020eb9a8(0, &data_02146f54, 0);
    func_020eb9a8(0, &data_02146f44, 1);
}
