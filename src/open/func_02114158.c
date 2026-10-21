#include "m2c.h"
typedef void (*Fn)(void *);

extern void *data_0215a05c;
void func_02114158(void) {
    void *base = data_0215a05c;
    Fn fn = M2C_FIELD(base, Fn *, 0x14);

    if (fn != NULL) {
        fn(base);
    }
}
