#include "m2c.h"
extern void *data_0215a048;
extern char data_02130fb4[];
s8 func_021106b0(void) {
    s32 idx = *(u16 *) ((s8 *) data_0215a048 + 6);
    char *entry = data_02130fb4 + idx * 0x1C;
    return entry[0x18];
}
