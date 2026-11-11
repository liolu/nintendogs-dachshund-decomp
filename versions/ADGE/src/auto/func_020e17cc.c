#include "engine.h"
#include "m2c.h"

void func_020d8280(void);

extern void *data_02159e70;

void func_020e17cc(void) {
    M2C_FIELD(data_02159e70, s32 *, 0x48C4) = 0;
    func_020d8280();
}
