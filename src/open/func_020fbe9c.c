#include "m2c.h"

void func_020a7460(void *arg0);
void func_020a7470(void *arg0);
void func_020a8df4(void *arg0);

void func_020fbe9c(void *arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
    case 0:
        func_020a7460(arg0);
        break;
    case 1:
        func_020a7470(arg0);
        M2C_FIELD(arg0, u32 *, 0xc0) = 0x1806;
        M2C_FIELD(arg0, u16 *, 0xa6) = 1;
        break;
    case 2:
        break;
    case 3:
        break;
    case 4:
        func_020a8df4(arg0);
        break;
    case 5:
        break;
    case 6:
        break;
    case 7:
        break;
    case 8:
        break;
    }
}
