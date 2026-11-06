#include "m2c.h"

extern u16 data_021560ec;

void func_02120108(s32 arg0) {
    data_021560ec |= (u16) (1 << arg0);
}
