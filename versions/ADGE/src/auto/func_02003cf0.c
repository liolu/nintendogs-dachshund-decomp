/* compiler: 1.2/sp2p3  */
#include "m2c.h"

extern M2C_UNK data_0214cd9c;
extern M2C_UNK data_0214ce78;
extern M2C_UNK func_02005c84;

void func_02003cf0(s16 arg0) {
    M2C_FIELD(&data_0214ce78, s16 *, 0)         = 0;
    M2C_FIELD(&data_0214ce78, s16 *, 4)         = 3;
    M2C_FIELD(&data_0214ce78, s16 *, 6)         = 0;
    M2C_FIELD(&data_0214ce78, s16 *, 8)         = 0;
    M2C_FIELD(&data_0214ce78, s16 *, 0xA)       = arg0;
    M2C_FIELD(&data_0214ce78, M2C_UNK **, 0x10) = &func_02005c84;
    M2C_FIELD(&data_0214cd9c, s16 *, 0)         = 0;
    M2C_FIELD(&data_0214cd9c, s16 *, 4)         = 3;
    M2C_FIELD(&data_0214cd9c, s16 *, 6)         = 0;
    M2C_FIELD(&data_0214cd9c, s16 *, 8)         = 0;
    M2C_FIELD(&data_0214cd9c, s16 *, 0xA)       = arg0;
    M2C_FIELD(&data_0214cd9c, M2C_UNK **, 0x10) = &func_02005c84;
}
