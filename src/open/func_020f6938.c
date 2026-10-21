#include "m2c.h"

void func_020a7460(void *arg0);
void func_020f69a0(void *arg0);

extern void func_020a7460(void *);
extern void func_020f69a0(void *);
void func_020f6938(void *arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
    case 0:
        func_020a7460(arg0);
        break;
    case 2:
        func_020f69a0(arg0);
        break;
    case 1:
        M2C_FIELD(M2C_FIELD(arg0, u32 *, 0x214), u16 *, 0x10) = 0;
        M2C_FIELD(arg0, u16 *, 0xa6) = 2;
        break;
    case 3:
        break;
    }
}
