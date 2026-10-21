#include "m2c.h"
extern void func_020f0fd8(void *arg0);
extern void func_02003c00(s32 arg0);
void func_020d872c(s32 arg0) {
    *(s32 *) arg0 = 0;
    switch (*(s32 *) (arg0 + 0x1C1C)) {
        case 2:
        case 3:
        case 5:
            func_02003c00(0x10);
            break;
        case 0:
        case 6:
            func_020f0fd8((void *) (arg0 + 0x130));
            func_020f0fd8((void *) (arg0 + 0x150));
            func_020f0fd8((void *) (arg0 + 0x170));
            func_020f0fd8((void *) (arg0 + 0x190));
            func_020f0fd8((void *) (arg0 + 0x1B0));
            func_02003c00(0x10);
            break;
    }
}
