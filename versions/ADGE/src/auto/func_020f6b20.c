/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020a7924(void *, M2C_UNK);             /* extern */
extern s32 *data_0215a02c;
extern M2C_UNK func_020f56d8;
extern M2C_UNK func_020f5724;
extern M2C_UNK func_020f6938;
extern M2C_UNK func_020f6b14;

void func_020f6b20(void *arg0, M2C_UNK arg1) {
    s32 var_r0;
    void *temp_r1;

    func_020a7924(arg0, 0x31);
    M2C_FIELD(arg0, M2C_UNK **, 0x1F4) = &func_020f6938;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F8) = &func_020f5724;
    M2C_FIELD(arg0, M2C_UNK **, 0x1F0) = &func_020f6b14;
    M2C_FIELD(arg0, M2C_UNK **, 0x200) = &func_020f56d8;
    M2C_FIELD(arg0, void **, 0x214)    = func_020038a8(arg1, 0x1C);
    temp_r1                            = M2C_FIELD(arg0, void **, 0x214);
    if (temp_r1 == NULL) {
        return;
    }
    if (data_0215a02c != NULL) {
        var_r0 = *data_0215a02c;
    } else {
        var_r0 = 0;
    }
    M2C_FIELD(temp_r1, s32 *, 0x18) = var_r0;
    M2C_FIELD(temp_r1, s16 *, 0x10) = 0;
}
