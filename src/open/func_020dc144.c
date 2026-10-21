#include "m2c.h"
extern void *data_02159e70;
extern void func_020eb9fc(s32 arg0, s32 arg1, s32 arg2);
void func_020dc144(s32 arg0) {
    s32 a;
    s32 b;
    s32 c;
    u8 *p;

    p = (u8 *) data_02159e70 + 0x5028;
    M2C_FIELD(p, s32 *, 0x218) = arg0;
    M2C_FIELD(p, s32 *, 0x21C) = 0;
    a = 0;
    b = 3;
    c = 0xFFFF;
    switch (arg0) {
    case 1:
        a = 1;
        c = 0x25;
        break;
    case 2:
        a = 1;
        b = 1;
        c = 0x24;
        break;
    }
    M2C_FIELD(p, s32 *, 0x220) = a;
    M2C_FIELD(p, s32 *, 0x224) = b;
    M2C_FIELD(p, u16 *, 0x228) = c;
    func_020eb9fc(3, 0x24, 0);
    func_020eb9fc(1, 0x24, 0);
    func_020eb9fc(3, 0x25, 0);
    func_020eb9fc(1, 0x25, 0);
}
