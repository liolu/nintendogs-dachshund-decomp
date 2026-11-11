/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02070e7c(M2C_UNK *, M2C_UNK, M2C_UNK); /* extern */
M2C_UNK func_02073034(u8, s32);                     /* extern */
M2C_UNK func_020733c0(M2C_UNK *, u8);               /* extern */
M2C_UNK func_0208927c(M2C_UNK);                     /* extern */
M2C_UNK func_02089348(M2C_UNK);                     /* extern */
extern M2C_UNK data_0212942b;
extern M2C_UNK data_0215422c;
extern M2C_UNK data_02154350;

s32 func_0208e00c(void) {
    u8 temp_r4;

    temp_r4 = *((u8 *) ((s8 *) &data_0212942b + (M2C_FIELD(&data_0215422c, u16 *, 0x18) * 6)));
    func_0208927c(2);
    func_02073034(temp_r4, M2C_FIELD(&data_0215422c, s32 *, 0));
    func_02089348(3);
    M2C_FIELD(&data_02154350, s16 *, 0xC) = 0x5A;
    func_020733c0(&data_02154350, temp_r4);
    func_02070e7c(&data_02154350, 0x5A, 0);
    return 1;
}
