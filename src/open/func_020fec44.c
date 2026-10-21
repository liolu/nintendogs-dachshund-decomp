#include "m2c.h"

void func_020ff9cc(void *arg0);
void func_020fec8c(void *arg0);

void func_020fec44(void *arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
    case 0:
    case 1:
        break;
    case 2:
        func_020ff9cc(arg0);
        break;
    case 3:
        func_020fec8c(arg0);
        break;
    }
}
