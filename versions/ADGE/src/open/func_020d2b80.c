#include "m2c.h"
extern void *data_02143c6c;
extern void *data_02143c64;
extern void *data_02143c74;
extern s8 data_02143cc4[];
extern void *data_02159e5c;
void *func_020038a8();
M2C_UNK func_020c78f4();
s32 func_0205ece8(s8 *buffer, s32 bufsz, const s8 *format, ...);
M2C_UNK func_0207e0d0();
void func_02086548();
void func_020d2b80(M2C_UNK arg0) {
    s8 buf[0x40];
    void *temp = func_020038a8(arg0, 0x20);

    func_020c78f4(arg0, data_02143c6c, data_02143c64);
    func_0205ece8(buf, 0x40, data_02143cc4, data_02143c6c, data_02143c74);
    func_02086548(temp, func_0207e0d0(buf));
    data_02159e5c = temp;
}
