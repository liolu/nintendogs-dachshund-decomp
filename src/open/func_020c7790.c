#include "m2c.h"
extern s8 *data_02158ac8;
extern s8 data_02140ff8[];
extern void *data_02140d40[];
void func_0205ece8();
M2C_UNK func_0207e0d0();
void func_020c7790(M2C_UNK arg0) {
    s8 buf[0x40];

    func_0205ece8(buf, 0x40, data_02140ff8, data_02140d40[M2C_FIELD(data_02158ac8, u16 *, 8)], arg0);
    func_0207e0d0(buf);
}
