#include "m2c.h"
extern s8 *data_02159e38;
void func_0206cbdc(s32, void *, s32);
void func_0206cbc4(M2C_UNK, M2C_UNK, M2C_UNK);
u32 func_02080978(void);
s32 func_020d04f8(void) {
    s16 i;
    s16 count = 0;
    s8 *p = data_02159e38;

    for (i = 0; i < 3; i++) {
        if (*(u16 *) (*(u32 *) (p + 0x144C) + 4) != 0xFFFF) {
            count++;
        }
        p += 0x18;
    }
    return count;
}
