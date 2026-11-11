/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_020443d4(M2C_UNK, void *);             /* extern */
s32 func_02044670(M2C_UNK);                         /* extern */
M2C_UNK func_0206dfd4(s32, void *, s32);            /* extern */
M2C_UNK func_020c2558(s32, u16, u8);                /* extern */
s32 func_020c88ec(M2C_UNK);                         /* extern */
extern void *data_02153700;

void func_0208c8c8(M2C_UNK arg0) {
    s32 temp_r4;
    void *temp_r5;

    temp_r5 = M2C_FIELD(data_02153700, void **, 0x24);
    temp_r4 = func_02044670(0);
    func_0206dfd4(func_020c88ec(arg0), temp_r5, 0x85C);
    func_020443d4(0, temp_r5);
    if (temp_r4 == 0) {
        return;
    }
    func_020c2558(temp_r4, M2C_FIELD(temp_r5, u16 *, 0), M2C_FIELD(temp_r5, u8 *, 2));
}
