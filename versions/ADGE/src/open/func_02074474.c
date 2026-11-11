#include "m2c.h"
void func_02074474(M2C_UNK arg0, M2C_UNK arg1) {
    u32 temp_r2;
    s32 i;

    if (arg1 == 0) {
        return;
    }
    do {
        for (i = 0; i < M2C_FIELD(arg1, u8 *, 0x19); i++) {
            temp_r2 = ((u16 *) arg1)[i + 13] & 0x100;
            if (temp_r2 != 0) {
                M2C_FIELD(arg0, u32 *, (i >> 5) * 4) |= 1 << (i & 0x1f);
            }
        }
        arg1 = (M2C_UNK) M2C_FIELD(arg1, M2C_UNK *, 0x10);
    } while (arg1 != 0);
}
