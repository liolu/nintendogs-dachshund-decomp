#include "m2c.h"
extern s8 *data_02159e38;
void func_0206cbdc(s32, void *, s32);
void func_0206cbc4(M2C_UNK, M2C_UNK, M2C_UNK);
u32 func_02080978(void);
s32 func_020d0248(void) {
    s16 i;
    s32 result;
    s8 *p = data_02159e38;

    result = -1;
    for (i = 0; i < 3; i++) {
        if (*(u16 *) (*(u32 *) (p + 0x144C) + 4) == 0xFFFF) {
            result = i;
            break;
        }
        p += 0x18;
    }
    return result;
}
