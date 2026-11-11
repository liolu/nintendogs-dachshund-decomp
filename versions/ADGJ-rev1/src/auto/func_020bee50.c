/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b8ab8(M2C_UNK, M2C_UNK *, M2C_UNK); /* extern */
M2C_UNK func_020b8b0c(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
M2C_UNK func_020be07c(void *);                      /* extern */
extern M2C_UNK data_02140c14;
extern M2C_UNK data_02140c24;
extern void *data_02153740;

void func_020bee50(void *arg0) {
    s32 temp_r0;
    s32 temp_r0_2;
    s32 temp_r0_3;

    temp_r0 = M2C_FIELD(arg0, s32 *, 4);
    if (temp_r0 > 0) {
        M2C_FIELD(arg0, s32 *, 4) = (s32) (temp_r0 - 1);
        if (M2C_FIELD(arg0, s32 *, 4) == 0) {
            temp_r0_2 = M2C_FIELD(data_02153740, s32 *, 0xA8);
            if (temp_r0_2 == 7) {
                if (temp_r0_2 == 7) {
                    func_020b8b0c(0, 0, 0);
                }
                func_020be07c(arg0 + 0x124);
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
    if (M2C_FIELD(data_02153740, s32 *, 0xA8) != 7) {
        return;
    }
    func_020b8ab8(0, &data_02140c24, 0);
    func_020b8ab8(0, &data_02140c14, 1);
}
