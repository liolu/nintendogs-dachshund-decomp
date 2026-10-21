#include "m2c.h"
unsigned char *func_01ffdb08(int);
short func_02028120(int);
void func_02007de4(int arg0) {
    unsigned char *p;
    unsigned int *q;
    short v;

    p = func_01ffdb08(2);
    if (p == 0) {
        return;
    }
    q = (unsigned int *) (p + 0x33C);
    if (arg0 == 0) {
        return;
    }
    *(unsigned int *) (arg0 + 0x20) = q[0] + *(unsigned int *) (*(unsigned int *) (*(unsigned int *) (arg0 + 0x18)) + 4);
    *(unsigned int *) (arg0 + 0x24) = q[1] + *(unsigned int *) (*(unsigned int *) (*(unsigned int *) (arg0 + 0x18)) + 8);
    *(unsigned int *) (arg0 + 0x28) = q[2] + *(unsigned int *) (*(unsigned int *) (*(unsigned int *) (arg0 + 0x18)) + 0xC);
    v = func_02028120((int) p);
    *(int *) (arg0 + 0x54) = (v << 16) >> 16;
}
