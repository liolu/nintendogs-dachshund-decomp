#include "m2c.h"
M2C_UNK func_020b1bec(M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK, M2C_UNK);
void func_020cfe48(s32 arg0, s32 arg1) {
    s32 i;

    for (i = 0; i < 8; i = (s16) (i + 1)) {
        if (i != arg1) {
            *(u16 *) ((s8 *) arg0 + 0x700 + (i << 1) + 0xE8) = 0;
        }
    }
}
