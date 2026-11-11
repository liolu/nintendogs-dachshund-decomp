/* compiler: 1.2/sp2p3  */
#include "engine.h"
#include "m2c.h"

void func_02005c84(M2C_UNK);

extern M2C_UNK data_0214ce78;

void func_02003db4(s32 arg0) {
    M2C_FIELD(&data_0214ce78, s16 *, 0)             = 0;
    M2C_FIELD(&data_0214ce78, s16 *, 4)             = 1;
    M2C_FIELD(&data_0214ce78, s16 *, 8)             = 0;
    M2C_FIELD(&data_0214ce78, s16 *, 0xA)           = (s16) arg0;
    M2C_FIELD(&data_0214ce78, void (**)(s32), 0x10) = func_02005c84;
    M2C_FIELD(&data_0214ce78, s16 *, 0xE)           = 0;
}
