#include "engine.h"
#include "m2c.h"

extern u16 data_02154150;

void func_0208095c(s32 arg0) {
    data_02154150 |= 1 << arg0;
}
