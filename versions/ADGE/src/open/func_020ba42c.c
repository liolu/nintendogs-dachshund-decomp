#include "m2c.h"

typedef struct {
    u32 w[10];
} Copy10;

void func_020ba42c(void *arg0, void *arg1) {
    *(Copy10 *) arg1 = *(Copy10 *) ((u8 *) arg0 + 0x10);
}
