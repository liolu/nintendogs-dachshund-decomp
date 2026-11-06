/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02106b40(void *);                      /* extern */
M2C_UNK func_021077e0(void *);                      /* extern */
M2C_UNK func_0210bce8(void *, s32);                 /* extern */

void func_0210bef0(void *arg0) {
    void **temp_r2;
    void *temp_r2_2;
    void *temp_r4;

    temp_r4                         = M2C_FIELD(arg0, void **, 0x1B0);
    M2C_FIELD(temp_r4, s16 *, 0x9C) = 0;
    func_0210bce8(temp_r4, M2C_FIELD(arg0, s32 *, 0x28));
    temp_r2                           = M2C_FIELD(temp_r4, void ***, 0x214);
    *temp_r2                          = M2C_FIELD(arg0, void **, 0x1BC);
    temp_r2_2                         = *temp_r2;
    M2C_FIELD(temp_r2_2, u16 *, 0x20) = (u16) (M2C_FIELD(temp_r2_2, u16 *, 0x20) | 1);
    func_021077e0(temp_r4);
    func_02106b40(temp_r4);
}
