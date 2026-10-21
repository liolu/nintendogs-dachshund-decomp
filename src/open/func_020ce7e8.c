#include "m2c.h"
extern void *data_02159e38;
void func_020ce7e8(unsigned short *arg0) {
    short i;
    unsigned short v;
    char *p;

    p = (char *) (M2C_FIELD(data_02159e38, s32 *, 0x141C) + 4);
    for (i = 0; i < 0xB; i = (short) (i + 1)) {
        *(short *) (p + (i * 2) + 0xC) = 0;
    }
    for (i = 0; i < 0xA; i = (short) (i + 1)) {
        v = *arg0;
        if (v == 0) {
            return;
        }
        *(short *) (p + (i * 2) + 0xC) = v;
        arg0++;
    }
}
