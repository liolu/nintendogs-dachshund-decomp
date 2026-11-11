#include "m2c.h"
extern s32 (*data_0213cd70)(M2C_UNK, M2C_UNK, M2C_UNK);
extern s32 (*data_0213cd78)(M2C_UNK, M2C_UNK, M2C_UNK);
extern void *data_0215a030;
void func_020fdb30(void) {
    s32 i;

    for (i = 0; i < 3; i++) {
        ((s32 *) ((u8 *) data_0215a030 + 0x19C))[i] = data_0213cd70(0x800, 0, 0);
        ((s32 *) ((u8 *) data_0215a030 + 0x1A8))[i] = data_0213cd78(0x400, 0, 0);
    }
    M2C_FIELD(data_0215a030, s32 *, 0x1B4) = 1;
}
