#include "m2c.h"
extern void *data_02159e68;
void func_0200718c(void *, void *);
void func_020cd01c(void *, void *, void *);
void func_020d5068(void) {
    u8 buf[0x1c];

    func_0200718c(buf, buf + 0x10);
    func_020cd01c((u8 *) data_02159e68 + 0x10, buf, buf + 0x10);
}
