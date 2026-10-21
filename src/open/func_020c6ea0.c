#include "m2c.h"
extern s8 data_02140ec4[];
void func_0205ece8();
M2C_UNK func_0207e0d0();
void *func_02078714();
void func_020c6ea0(M2C_UNK arg0) {
    s8 buf[0x40];

    func_0205ece8(buf, 0x40, data_02140ec4, arg0);
    func_02078714(func_0207e0d0(buf), 0);
}
