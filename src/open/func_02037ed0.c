#include "m2c.h"

extern M2C_UNK (*data_02139cb4[])(M2C_UNK);

extern s32 data_0215a03c;
extern void *data_0215a04c;
void func_02111b88(void *p, s32 v);
void func_02037ed0(M2C_UNK arg0) {
    s16 temp_r2;
    s16 temp_r1;

    temp_r2 = M2C_FIELD(arg0, s16 *, 0x148);
    if (temp_r2 < 0x11 || temp_r2 > 0x16) {
        return;
    }
    M2C_FIELD(arg0, s16 *, 0x152) = temp_r2;
    temp_r1 = M2C_FIELD(arg0, s16 *, 0x148);
    data_02139cb4[temp_r1 - 0x11](arg0);
}
