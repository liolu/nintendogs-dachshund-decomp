#include "m2c.h"

M2C_UNK func_02006518(void *);                      /* extern */
extern M2C_UNK data_02143128;

void func_020c4cb8(void *arg0) {
    M2C_FIELD(arg0, M2C_UNK **, 0) = &data_02143128;
    M2C_FIELD(arg0, s16 *, 4)      = 0;
    M2C_FIELD(arg0, s16 *, 6)      = 0;
    M2C_FIELD(arg0, s32 *, 8)      = 0;
    M2C_FIELD(arg0, s32 *, 0xC)    = 0;
    func_02006518(arg0 + 0x10);
}
