#include "m2c.h"
extern M2C_UNK data_02153e78[];
s32 func_0207fa6c(void) {
    s32 i;

    for (i = 0; i < 16; i++) {
        if (data_02153e78[i + 5] == 0) {
            return i;
        }
    }
    return -1;
}
