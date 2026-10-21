#include "m2c.h"
extern void *data_02159e38;
void func_020ce748(unsigned short *arg0) {
    short i;
    unsigned short v;
    char *p;

    p = (char *) (M2C_FIELD(data_02159e38, s32 *, 0x141C) + 4);
    for (i = 0; i < 0x1B; i = (short) (i + 1)) {
        *(short *) (p + (i * 2) + 0x22) = 0;
    }
    for (i = 0; i < 0x1A; i = (short) (i + 1)) {
        v = *arg0;
        if (v == 0) {
            return;
        }
        *(short *) (p + (i * 2) + 0x22) = v;
        arg0++;
    }
}
