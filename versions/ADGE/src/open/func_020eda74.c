#include "m2c.h"
extern void *data_02159e70;
void func_020d5a60(void *arg0, s32 arg1);
void func_020e5064(s32, s32, s32, s32);
void func_020ec2f4(s32, s32);
void func_020ec328(s32, s32);
void func_020ec134(s32, s32);
void func_020ec0d8(s32, s32);
void func_020d5bb4(void *, s32, s32, s32, s32, s32, s32, s32);
void func_020eda74(u8 *arg0) {
    s32 flag;
    s32 *p;
    s32 *q;

    flag = ((*(volatile u16 *) 0x4000304 & 0x8000) >> 15) == 0;
    if (flag == 0) {
        q = (s32 *) ((u8 *) data_02159e70 + 0x53f4);
        if (q[0xA] != 0) {
            func_020d5a60(arg0 + 8, q[1]);
            func_020d5a60(arg0 + 0x30, q[2]);
        }
        func_020e5064(0, 1, 2, 0xFFFF);
        if (*(s32 *) (arg0 + 4) == 1) {
            p = (s32 *) ((u8 *) data_02159e70 + 0x1113c);
            func_020ec2f4(0, 0);
            func_020ec328(0, p[1]);
            func_020ec134(0, p[2]);
            func_020ec0d8(0, p[3]);
            q = (s32 *) ((u8 *) data_02159e70 + 0x53f4);
            func_020d5bb4(arg0 + 8, 0, 4, 0xF, 2, q[1], 0, 0xC);
            func_020d5bb4(arg0 + 0x30, 0, 4, 0x12, 2, q[2], 0, 0xC);
        }
    }
    *(s32 *) (arg0 + 4) = flag;
}
