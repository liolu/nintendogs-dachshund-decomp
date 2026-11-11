#include "m2c.h"

extern u16 data_02153620;

void func_02080f40(s32 arg0) {
    data_02153620 |= 1 << arg0;
}
