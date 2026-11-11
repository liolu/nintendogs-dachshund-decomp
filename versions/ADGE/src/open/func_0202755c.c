#include "m2c.h"
void func_0202755c(void *arg0, void *arg1) {
    typedef struct {
        u32 w[12];
    } Copy12;

    *(Copy12 *) arg1 = *(Copy12 *) ((u8 *) arg0 + 0x3c);
}
