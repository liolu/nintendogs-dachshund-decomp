#include "m2c.h"

extern void **data_ov003_0216be24;

void func_ov003_0216a208(void) {
    void *p;

    p                          = data_ov003_0216be24[0];
    *(u16 *) ((u8 *) p + 0x20) = (u16) (*(u16 *) ((u8 *) p + 0x20) | 1);
    p                          = data_ov003_0216be24[1];
    *(u16 *) ((u8 *) p + 0x20) = (u16) (*(u16 *) ((u8 *) p + 0x20) | 1);
    p                          = data_ov003_0216be24[2];
    *(u16 *) ((u8 *) p + 0x20) = (u16) (*(u16 *) ((u8 *) p + 0x20) | 1);
    p                          = data_ov003_0216be24[3];
    *(u16 *) ((u8 *) p + 0x20) = (u16) (*(u16 *) ((u8 *) p + 0x20) | 1);
}
