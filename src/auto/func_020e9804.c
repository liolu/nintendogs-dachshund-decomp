/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206e124(void *, M2C_UNK, s32);        /* extern */
M2C_UNK func_020f9dbc();                            /* extern */
extern void *data_02154cb4;
extern M2C_UNK data_02154cb8;

void func_020e9804(void) {
    void *temp_r4;

    temp_r4 = data_02154cb4;
    func_0206e124(temp_r4, 0, 0x4E30);
    M2C_FIELD(temp_r4, s16 *, 0x4E30)      = 0;
    M2C_FIELD(&data_02154cb8, s32 *, 0x28) = 0;
    M2C_FIELD(&data_02154cb8, s32 *, 0x2C) = 0;
    M2C_FIELD(&data_02154cb8, s32 *, 0x34) = 1;
    func_020f9dbc();
}
