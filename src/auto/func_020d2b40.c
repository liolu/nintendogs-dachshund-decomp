/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02003844(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_02107ca4(void *, M2C_UNK);             /* extern */
extern s32 *data_02154c9c;
extern M2C_UNK func_020d16f8;
extern M2C_UNK func_020d1744;
extern M2C_UNK func_020d2958;
extern M2C_UNK func_020d2b34;

void func_020d2b40(void *arg0, M2C_UNK arg1) {
    s32 var_r0;
    void *temp_r1;

    func_02107ca4(arg0, 0x31);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = &func_020d2958;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F8) = &func_020d1744;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = &func_020d2b34;
    M2C_FIELD(arg0, M2C_UNK **, 0x200) = &func_020d16f8;
    M2C_FIELD(arg0, void **, 0x214)    = func_02003844(arg1, 0x1C);
    temp_r1                            = M2C_FIELD(arg0, void **, 0x214);
    if (temp_r1 == NULL) {
        return;
    }
    if (data_02154c9c != NULL) {
        var_r0 = *data_02154c9c;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(temp_r1, s32 *, 0x18) = var_r0;
    M2C_FIELD(temp_r1, s16 *, 0x10) = 0;
}
