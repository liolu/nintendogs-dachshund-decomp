#include "m2c.h"

void func_020396cc(void *arg0);
void func_0203968c(void *arg0);
void func_0203964c(void *arg0);
void func_02039600(void *arg0);
void func_020395c4(void *arg0);
void func_02039588(void *arg0);

extern void func_02039588(void *arg0);
extern void func_020395c4(void *arg0);
extern void func_02039600(void *arg0);
extern void func_0203964c(void *arg0);
extern void func_0203968c(void *arg0);
extern void func_020396cc(void *arg0);
void func_020394f8(void *arg0) {
    switch (M2C_FIELD(arg0, s8 *, 0x8B)) {
        case 5:
            func_02039588(arg0);
            break;
        case 4:
            func_020395c4(arg0);
            break;
        case 3:
            func_02039600(arg0);
            break;
        case 2:
            func_0203964c(arg0);
            break;
        case 1:
            func_0203968c(arg0);
            break;
        case 0:
            func_020396cc(arg0);
            break;
    }
}
