#include "m2c.h"

typedef struct {
    s32 x, y, z;
} Vec;

extern s32 data_02150e58[];
s32 func_02028120(s32 arg0);
void func_01ff832c(s32 v, void *m, void *in, void *out);

void func_020090bc(s32 arg0, u8 *arg1, s32 *arg2, s32 *arg3) {
    s32 buf[9];
    s32 a;
    s32 b;
    s32 c;
    s32 v;

    buf[3] = ((s32 *) data_02150e58)[0x14];
    buf[4] = ((s32 *) data_02150e58)[0x17];
    buf[5] = ((s32 *) data_02150e58)[0x1a];
    buf[6] = ((s32 *) data_02150e58)[0x15];
    buf[7] = ((s32 *) data_02150e58)[0x18];
    buf[8] = ((s32 *) data_02150e58)[0x1b];

    v = arg3[0];
    a = ((s32 *) data_02150e58)[0x13];
    b = ((s32 *) data_02150e58)[0x16];
    c = ((s32 *) data_02150e58)[0x19];

    buf[0] = (s32) ((((s64) a) * v + 0x800) >> 12);
    buf[1] = (s32) ((((s64) b) * v + 0x800) >> 12);
    buf[2] = (s32) ((((s64) c) * v + 0x800) >> 12);

    func_01ff832c(arg3[1], buf + 3, buf, buf);
    func_01ff832c(arg3[2], buf + 6, buf, buf);
    func_01ff832c(func_02028120(arg0), buf, arg2, buf);

    if (arg1 != 0) {
        *(s32 *) (arg1 + 0x20) = buf[0] + (*(s32 **) (*(s32 **) (arg1 + 0x18)))[1];
        *(s32 *) (arg1 + 0x24) = buf[1] + (*(s32 **) (*(s32 **) (arg1 + 0x18)))[2];
        *(s32 *) (arg1 + 0x28) = buf[2] + (*(s32 **) (*(s32 **) (arg1 + 0x18)))[3];
        *(s32 *) (arg1 + 0x54) = (s16) func_02028120(arg0);
    }
}
