/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void *func_020038a8(M2C_UNK, M2C_UNK);              /* extern */
M2C_UNK func_020c9f18(void *);                      /* extern */
extern void *data_ov004_0216e3c4;

void *func_ov004_0216ca44(M2C_UNK arg0) {
    void *temp_r0;

    if (data_ov004_0216e3c4 != NULL) {
        return data_ov004_0216e3c4;
    }
    temp_r0             = func_020038a8(arg0, 0x48);
    data_ov004_0216e3c4 = temp_r0;
    func_020c9f18(temp_r0 + 0x1C);
    M2C_FIELD(data_ov004_0216e3c4, s32 *, 0)    = 0;
    M2C_FIELD(data_ov004_0216e3c4, s32 *, 4)    = 0;
    M2C_FIELD(data_ov004_0216e3c4, s32 *, 8)    = 0;
    M2C_FIELD(data_ov004_0216e3c4, s32 *, 0xC)  = 0;
    M2C_FIELD(data_ov004_0216e3c4, s32 *, 0x40) = 1;
    M2C_FIELD(data_ov004_0216e3c4, s16 *, 0x44) = -1;
    M2C_FIELD(data_ov004_0216e3c4, s16 *, 0x46) = -1;
    return data_ov004_0216e3c4;
}
