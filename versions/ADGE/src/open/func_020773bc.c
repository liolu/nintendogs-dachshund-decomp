#include "m2c.h"
void func_020773bc(M2C_UNK arg0, M2C_UNK arg1) {
    s32 i;
    u32 temp_r2;

    while (arg1 != 0) {
        for (i = 0; i < M2C_FIELD(arg1, u8 *, 0x19); i++) {
            temp_r2 = M2C_FIELD(arg1, u16 *, 0x1a + i * 2) & 0x100;
            if (temp_r2 != 0) {
                M2C_FIELD(arg0, u32 *, (i >> 5) * 4) |= 1 << (i & 0x1f);
            }
        }
        arg1 = (M2C_UNK) M2C_FIELD(arg1, M2C_UNK **, 0x10);
    }
}
