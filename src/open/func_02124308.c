#include "m2c.h"

typedef struct {
    s16 a;
    s16 b;
} Msg;

#include "m2c.h"
extern void *data_0215a064;
M2C_UNK func_01ffdb08();
M2C_UNK func_0202816c();
M2C_UNK func_020cf19c();

void func_02124308(void) {
    u8 *p;
    s16 buf[2];

    p = (u8 *) func_0202816c(func_01ffdb08(M2C_FIELD(data_0215a064, s16 *, 0x11C)));
    buf[0] = 0;
    buf[1] = 0x64;
    func_020cf19c(buf, 1);
    buf[0] = 0;
    buf[1] = 0x65;
    func_020cf19c(buf, 1);
    buf[0] = 0;
    buf[1] = 0x66;
    func_020cf19c(buf, 1);
    buf[0] = 0;
    buf[1] = 0x67;
    func_020cf19c(buf, 1);
    buf[0] = 0;
    buf[1] = 0x68;
    func_020cf19c(buf, 1);
    buf[0] = 0;
    buf[1] = 0x69;
    func_020cf19c(buf, 1);
    buf[0] = 0;
    buf[1] = 0x6A;
    func_020cf19c(buf, 1);
    buf[0] = 0;
    buf[1] = 0x38;
    func_020cf19c(buf, 1);
    buf[0] = 0;
    buf[1] = 0x35;
    func_020cf19c(buf, 1);
    buf[0] = 0;
    buf[1] = 0;
    func_020cf19c(buf, 1);
    switch (p[3]) {
    case 1:
        buf[0] = 1;
        buf[1] = 5;
        break;
    default:
        buf[0] = 1;
        buf[1] = 4;
        break;
    }
    func_020cf19c(buf, 1);
    buf[0] = 0;
    buf[1] = 0x45;
    func_020cf19c(buf, 1);
}
