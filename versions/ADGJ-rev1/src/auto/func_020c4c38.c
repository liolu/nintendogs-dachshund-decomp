/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_02003844(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_02006518(void *);                      /* extern */
void *func_02078be4(s32);                           /* extern */
extern M2C_UNK data_02143120;

void *func_020c4c38(M2C_UNK arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0                           = func_02003844(arg0, 0x18);
    M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_02143120;
    M2C_FIELD(temp_r0, s16 *, 4)      = 0;
    M2C_FIELD(temp_r0, s16 *, 6)      = 0;
    M2C_FIELD(temp_r0, s32 *, 8)      = 0;
    M2C_FIELD(temp_r0, void **, 0xC)  = NULL;
    func_02006518(temp_r0 + 0x10);
    M2C_FIELD(temp_r0, s32 *, 8)     = arg1;
    M2C_FIELD(temp_r0, void **, 0xC) = NULL;
    if (arg1 != 0) {
        temp_r0_2 = func_02078be4(arg1);
        M2C_FIELD(temp_r0, void **, 0xC) =
            (void *) (temp_r0_2 + M2C_FIELD((temp_r0_2 + M2C_FIELD(temp_r0_2, u16 *, 0xE)), s32 *, 0xC));
    }
    return temp_r0;
}
