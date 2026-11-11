#include "m2c.h"

extern void *data_02156080;

void func_02106b40(void *arg0) {
    M2C_FIELD(arg0, s16 *, 0x88) = (s16) M2C_FIELD(data_02156080, s16 *, 0x20);
    M2C_FIELD((data_02156080 + (M2C_FIELD(data_02156080, s16 *, 0x20) * 4)), void **, 4) = arg0;
    M2C_FIELD(data_02156080, s16 *, 0x20) = (s16) (M2C_FIELD(data_02156080, s16 *, 0x20) + 1);
}
