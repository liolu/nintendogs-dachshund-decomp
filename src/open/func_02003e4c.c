#include "m2c.h"
extern void *data_0214cd98;
extern u64 func_02080978(void);
extern u64 func_0205dd48(u64, u64);
void func_02003e4c(void) {
    u64 now;
    u8 *p;

    now = func_02080978();
    p = data_0214cd98;
    M2C_FIELD(p, u32 *, 0x28)++;
    p = data_0214cd98;
    M2C_FIELD(p, u32 *, 0xD8) = func_0205dd48((now - M2C_FIELD(p, u64 *, 0xCC)) * 0xFA00, 0x82EA);
    p = data_0214cd98;
    M2C_FIELD(p, u32 *, 0xDC) = func_0205dd48((now - M2C_FIELD(p, u64 *, 0xC4)) * 0xFA00, 0x82EA);
}
