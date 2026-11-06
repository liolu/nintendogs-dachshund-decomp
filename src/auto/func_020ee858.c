/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02072214(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_020740fc(u8, s32);                     /* extern */
M2C_UNK func_020747c4(M2C_UNK *, u8);               /* extern */
M2C_UNK func_020e9b9c(M2C_UNK);                     /* extern */
M2C_UNK func_020e9c68(M2C_UNK);                     /* extern */
extern M2C_UNK data_02130733;
extern M2C_UNK data_02154cb8;
extern M2C_UNK data_02154dd8;

s32 func_020ee858(void) {
    u8 temp_r4;

    temp_r4 = *((u8 *) ((s8 *) &data_02130733 + (M2C_FIELD(&data_02154cb8, u16 *, 0x18) * 6)));
    func_020e9b9c(2);
    func_020740fc(temp_r4, M2C_FIELD(&data_02154cb8, s32 *, 0));
    func_020e9c68(3);
    M2C_FIELD(&data_02154dd8, s16 *, 0xC) = 0x5A;
    func_020747c4(&data_02154dd8, temp_r4);
    func_02072214(&data_02154dd8, 0x5A, 0);
    return 1;
}
