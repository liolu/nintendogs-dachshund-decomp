/* compiler: 1.2/sp2p3  */
#include "m2c.h"

M2C_UNK func_02005d04(M2C_UNK *, M2C_UNK);          /* extern */
M2C_UNK func_02007b9c();                            /* extern */
M2C_UNK func_02069b3c(s32, s16);                    /* extern */
extern M2C_UNK data_0214a79c;
extern M2C_UNK data_0214a878;

void func_020058c4(void) {
    func_02005d04(&data_0214a878, 0);
    func_02005d04(&data_0214a79c, 1);
    func_02007b9c();
    func_02069b3c(0x0400006C, M2C_FIELD(&data_0214a878, s16 *, 0x18));
    func_02069b3c(0x0400106C, M2C_FIELD(&data_0214a79c, s16 *, 0x18));
}
