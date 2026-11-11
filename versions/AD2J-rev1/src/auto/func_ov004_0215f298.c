/* compiler: 1.2/b56 -O4,s */
#include "m2c.h"

void *func_02003844(M2C_UNK, M2C_UNK);              /* extern */
extern void *data_ov004_02163cc0;

void func_ov004_0215f298(M2C_UNK arg0) {
    s16 var_r3;
    s16 var_ip;

    data_ov004_02163cc0 = func_02003844(arg0, 0x84);
    var_r3              = 0;
    var_ip              = 0;
    do {
        M2C_FIELD(data_ov004_02163cc0 + (var_r3 * 4), s32 *, 0xC) = var_ip;
        var_r3 += 1;
    } while ((s32) var_r3 < 0xB);
    var_r3 = 0;
    do {
        M2C_FIELD(data_ov004_02163cc0 + (var_r3 * 4), s32 *, 0x38) = 0;
        var_r3 += 1;
    } while ((s32) var_r3 < 4);
    M2C_FIELD(data_ov004_02163cc0, s32 *, 0x48) = 0;
    M2C_FIELD(data_ov004_02163cc0, s32 *, 0x4C) = 0;
    M2C_FIELD(data_ov004_02163cc0, s32 *, 0x50) = 0;
    M2C_FIELD(data_ov004_02163cc0, s16 *, 0x70) = 0;
}
