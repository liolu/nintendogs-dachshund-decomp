#include "m2c.h"

typedef struct {
    s32 x[10];
} S40;

extern void func_020baa2c(void *arg0);
extern void func_020ba7b0(void *arg0);
extern void func_020ba65c(void *arg0);
extern void func_020ba508(void *arg0);
void func_020ba460(s32 arg0) {
    register u32 off;

    switch (*(s32 *) (arg0 + 0xC)) {
        case 0:
            off = *(s32 *) arg0 + *(s32 *) (arg0 + 8) * 0x2C;
            *(S40 *) (arg0 + (unsigned)0x10) = *(S40 *) (off + 0x20);
            break;
        case 1:
            func_020baa2c((void *) arg0);
            break;
        case 2:
            func_020ba7b0((void *) arg0);
            break;
        case 3:
            func_020ba65c((void *) arg0);
            break;
        case 4:
            func_020ba508((void *) arg0);
            break;
    }
}
