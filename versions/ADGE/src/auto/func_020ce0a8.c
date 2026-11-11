/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_0206cbdc();           /* extern */
extern void *data_02159e38;

void func_020ce0a8(M2C_UNK arg0) {
    void *temp_r4;

    temp_r4 = M2C_FIELD(data_02159e38, void **, 0x14DC);
    func_0206cbdc(arg0, temp_r4 + 4, 0x4E38);
    M2C_FIELD(temp_r4, u16 *, 0x4E42) = (u16) (M2C_FIELD(temp_r4, u16 *, 0x4E42) | 1);
}
