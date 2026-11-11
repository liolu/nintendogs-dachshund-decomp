/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0214a79c;
extern M2C_UNK func_02005c20;

void func_02003b9c(s16 arg0) {
    M2C_FIELD(&data_0214a79c, s16 *, 0)         = 0;
    M2C_FIELD(&data_0214a79c, s16 *, 4)         = 3;
    M2C_FIELD(&data_0214a79c, s16 *, 6)         = 1;
    M2C_FIELD(&data_0214a79c, s16 *, 8)         = 0;
    M2C_FIELD(&data_0214a79c, s16 *, 0xA)       = arg0;
    M2C_FIELD(&data_0214a79c, M2C_UNK **, 0x10) = &func_02005c20;
}
