/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206cbdc();       /* extern */
extern void *data_02159e38;

void func_020cef98(M2C_UNK arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(data_02159e38, void **, 0x141C);
    func_0206cbdc(arg0, temp_r4 + 0x60, 0x54);
    M2C_FIELD(temp_r4, u16 *, 0x6AE) = (u16) (M2C_FIELD(temp_r4, u16 *, 0x6AE) | 1);
}
