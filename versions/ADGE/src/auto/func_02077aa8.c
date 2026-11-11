#include "engine.h"
#include "m2c.h"

extern s32 data_02153dc0;

void func_02077aa8(s32 arg0) {
    if (data_02153dc0 == 0) {
        *(M2C_UNK *) arg0 = 0;
        data_02153dc0     = arg0;
    }
}
