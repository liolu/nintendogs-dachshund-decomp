#include "m2c.h"
extern u8 *data_02159e70;
void func_020d5a60();
void func_020ec2f4();
void func_020ec328();
void func_020ec134();
void func_020ec0d8();
void func_020d5bb4();
void func_020f3028(s32 *arg0) {
    s32 *p;
    s32 *q;
    s32 v;

    v = ((M2C_FIELD(0x4000304, u16 *, 0) & 0x8000) >> 15) == 0;
    if (v == 0) {
        q = (s32 *) ((u8 *) data_02159e70 + 0x53f4);
        if (q[10] != 0) {
            func_020d5a60(arg0 + 2, q[1]);
            func_020d5a60(arg0 + 0xC, q[2]);
            func_020d5a60(arg0 + 0x16, q[3]);
            func_020d5a60(arg0 + 0x20, q[4]);
        }
        if (arg0[1] == 1) {
            p = (s32 *) ((u8 *) data_02159e70 + 0x1113c);
            func_020ec2f4(0, 0);
            func_020ec328(0, p[1]);
            func_020ec134(0, p[2]);
            func_020ec0d8(0, p[3]);
            q = (s32 *) ((u8 *) data_02159e70 + 0x53f4);
            func_020d5bb4((s8 *) arg0 + 8, 0, 2, 0xe, 2, q[1], 0, 0);
            func_020d5bb4((s8 *) arg0 + 0x30, 0, 2, 0x11, 2, q[2], 0, 0);
            func_020d5bb4((s8 *) arg0 + 0x58, 0, 2, 0x13, 2, q[3], 0, 0);
            func_020d5bb4((s8 *) arg0 + 0x80, 0, 2, 0x16, 2, q[4], 0, 0);
        }
    }
    arg0[1] = v;
}
