#include "m2c.h"

extern void **data_ov004_0216e3c4;

void func_ov004_0216c78c(void) {
    void *p;

    p                          = data_ov004_0216e3c4[0];
    *(u16 *) ((u8 *) p + 0x20) = (u16) (*(u16 *) ((u8 *) p + 0x20) | 1);
    p                          = data_ov004_0216e3c4[1];
    *(u16 *) ((u8 *) p + 0x20) = (u16) (*(u16 *) ((u8 *) p + 0x20) | 1);
    p                          = data_ov004_0216e3c4[2];
    *(u16 *) ((u8 *) p + 0x20) = (u16) (*(u16 *) ((u8 *) p + 0x20) | 1);
    p                          = data_ov004_0216e3c4[3];
    *(u16 *) ((u8 *) p + 0x20) = (u16) (*(u16 *) ((u8 *) p + 0x20) | 1);
}
