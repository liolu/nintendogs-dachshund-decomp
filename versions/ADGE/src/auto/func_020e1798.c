#include "engine.h"
#include "m2c.h"

void func_020ed418(void);

extern void *data_02159e70;

void func_020e1798(void) {
    M2C_FIELD(data_02159e70, s32 *, 0x1D70) = -1;
    func_020ed418();
}
