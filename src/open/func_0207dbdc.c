#include "m2c.h"
void *func_0207dbdc(void *arg0, s16 arg1) {
    volatile s8 *ptr = *(volatile s8 **) arg0;
    *(volatile s16 *) ptr = arg1;
    *(volatile s16 *) (ptr + 2) = 0;
    *(volatile s32 *) (ptr + 4) = *(volatile s32 *) ((volatile s8 *) arg0 + 4) - (s32) (ptr + 0x10);
    *(volatile s32 *) (ptr + 8) = 0;
    *(volatile s32 *) (ptr + 0xC) = 0;
    return (void *) ptr;
}
