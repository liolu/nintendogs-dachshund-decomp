/* compiler: 1.2/sp2p3  */
#include "m2c.h"

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_0200657c(void *);                      /* extern */
void *func_0207836c(s32);                           /* extern */
extern M2C_UNK data_02142bf0;

void *func_020ca23c(M2C_UNK arg0, s32 arg1) {
    void *temp_r0;
    void *temp_r0_2;

    temp_r0                           = func_020038a8(arg0, 0x18);
    M2C_FIELD(temp_r0, M2C_UNK **, 0) = &data_02142bf0;
    M2C_FIELD(temp_r0, s16 *, 4)      = 0;
    M2C_FIELD(temp_r0, s16 *, 6)      = 0;
    M2C_FIELD(temp_r0, s32 *, 8)      = 0;
    M2C_FIELD(temp_r0, void **, 0xC)  = NULL;
    func_0200657c(temp_r0 + 0x10);
    M2C_FIELD(temp_r0, s32 *, 8)     = arg1;
    M2C_FIELD(temp_r0, void **, 0xC) = NULL;
    if (arg1 != 0) {
        temp_r0_2 = func_0207836c(arg1);
        M2C_FIELD(temp_r0, void **, 0xC) =
            (void *) (temp_r0_2 + M2C_FIELD((temp_r0_2 + M2C_FIELD(temp_r0_2, u16 *, 0xE)), s32 *, 0xC));
    }
    return temp_r0;
}
