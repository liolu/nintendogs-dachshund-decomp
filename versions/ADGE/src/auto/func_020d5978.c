/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020c1b80(M2C_UNK, M2C_UNK, M2C_UNK);   /* extern */
extern void *data_02159e6c;

void func_020d5978(M2C_UNK arg0, M2C_UNK arg1, M2C_UNK arg2) {
    void *temp_r0;

    temp_r0                         = func_020038a8(arg0, 0x14);
    M2C_FIELD(temp_r0, s16 *, 0)    = 0;
    M2C_FIELD(temp_r0, s16 *, 2)    = 0;
    M2C_FIELD(temp_r0, s16 *, 4)    = 0;
    M2C_FIELD(temp_r0, s16 *, 6)    = 0;
    M2C_FIELD(temp_r0, s16 *, 8)    = 0;
    M2C_FIELD(temp_r0, s32 *, 0xC)  = 0;
    M2C_FIELD(temp_r0, s32 *, 0x10) = 0;
    func_020c1b80(arg0, arg1, arg2);
    data_02159e6c = temp_r0;
}
