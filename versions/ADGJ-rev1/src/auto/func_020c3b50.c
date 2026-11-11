#include "m2c.h"

extern M2C_UNK func_020c47f8;
extern M2C_UNK func_020c49f8;

void func_020c3b50(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0)      = 1;
    M2C_FIELD(arg0, s16 *, 2)      = 0;
    M2C_FIELD(arg0, M2C_UNK **, 4) = &func_020c47f8;
    M2C_FIELD(arg0, M2C_UNK **, 8) = &func_020c49f8;
}
