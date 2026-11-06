/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020b1f04(s32, s32, s32, void *, s32);  /* extern */
extern void *data_02153700;

void func_020dabc0(void *arg0) {
    void *temp_r3;

    if (M2C_FIELD(arg0, s16 *, 0x90) != 3) {
        return;
    }
    temp_r3 = M2C_FIELD(arg0, void **, 0x214);
    func_020b1f04(M2C_FIELD(temp_r3, s32 *, 0x68), M2C_FIELD(temp_r3, s32 *, 0x64), M2C_FIELD(data_02153700, s32 *, 0x10),
                  temp_r3 + 0xA4, 0);
}
