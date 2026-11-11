#include "m2c.h"

extern void *data_02153740;

void func_020fe544(void *arg0) {
    if ((M2C_FIELD(arg0, s32 *, 0x930) == 1) && (M2C_FIELD(data_02153740, s32 *, 0xBC) == 0)) {
        M2C_FIELD(arg0, s32 *, 0x758) = 0;
    } else {
        M2C_FIELD(arg0, s32 *, 0x758) = 5;
    }
    M2C_FIELD(arg0, s32 *, 0x74C) = 0;
}
