#include "m2c.h"
extern M2C_UNK data_02153e78;
void func_0207f59c(void) {
    M2C_UNK p = M2C_FIELD(&data_02153e78, M2C_UNK *, 0xc);

    while (p != 0 && M2C_FIELD(p, s32 *, 0x64) != 1) {
        p = M2C_FIELD(p, M2C_UNK *, 0x68);
    }
}
