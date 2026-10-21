#include "m2c.h"
s32 func_02089c5c(void *arg0) {
    s32 t;
    s32 x;
    s32 z;

    if (arg0 != NULL) {
        x = M2C_FIELD(arg0, s32 *, 0) >> 12;
        z = M2C_FIELD(arg0, s32 *, 8) >> 12;
        t = x * x + z * z;
        (*(volatile u16 *) 0x040002B0) = 0;
        (*(u32 *) 0x040002B8) = t;
        while ((*(volatile u16 *) 0x040002B0) & 0x8000) {
        }
        while ((*(volatile u16 *) 0x040002B0) & 0x8000) {
        }
        return *(u32 *) 0x040002B4;
    }
    return 0;
}
