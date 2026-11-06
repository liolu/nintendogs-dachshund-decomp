#include "m2c.h"

extern void *data_02153740;
extern void *data_02153894;

void func_020aec94(s32 arg0) {
    if (M2C_FIELD(data_02153740, s32 *, 0xB8) == 2) {
        M2C_FIELD(data_02153894, s32 *, 0x48) = arg0;
    }
}
