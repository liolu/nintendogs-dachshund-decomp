#include "engine.h"
#include "m2c.h"

extern s32 data_027c00a0;

void func_01ffe6fc(s32 arg0) {
    if (data_027c00a0 == 0) {
        *(M2C_UNK *) arg0 = 0;
        data_027c00a0     = arg0;
    }
}
