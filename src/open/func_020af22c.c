#include "m2c.h"

void func_020a7460(void *arg0);
void func_020af294(void *arg0);
void func_01ffdb08(s32 arg0);

extern void *data_021510bc;
extern void *data_0215a030;
void func_020af22c(void *arg0) {
    switch (M2C_FIELD(arg0, s16 *, 0x90)) {
    case 0:
        func_020a7460(arg0);
        break;
    case 1:
        break;
    case 2:
        func_020af294(arg0);
        break;
    case 3:
    case 4:
    case 5:
        break;
    case 6:
        func_01ffdb08(M2C_FIELD(arg0, s16 *, 0x98));
        break;
    }
}
