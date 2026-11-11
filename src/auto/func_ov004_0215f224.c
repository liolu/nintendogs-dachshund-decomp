/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern void *data_ov004_02163cc0;

void func_ov004_0215f224(void *arg0) {
    void *temp_ip;

    temp_ip = data_ov004_02163cc0 + 0x74;
    M2C_FIELD(arg0, s32 *, 0x20) =
        (s32) (M2C_FIELD(data_ov004_02163cc0, s32 *, 0x74) + M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x18), s32 *, 4));
    M2C_FIELD(arg0, s32 *, 0x24) =
        (s32) (M2C_FIELD(temp_ip, s32 *, 4) + M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x18), s32 *, 8));
    M2C_FIELD(arg0, s32 *, 0x28) =
        (s32) (M2C_FIELD(temp_ip, s32 *, 8) + M2C_FIELD(*M2C_FIELD(arg0, void ***, 0x18), s32 *, 0xC));
    M2C_FIELD(arg0, s32 *, 0x54) = (s32) M2C_FIELD(data_ov004_02163cc0, s16 *, 8);
    M2C_FIELD(arg0, u16 *, 0x5A) = (u16) M2C_FIELD(data_ov004_02163cc0, u16 *, 0x80);
}
