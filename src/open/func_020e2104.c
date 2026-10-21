#include "m2c.h"
extern void *data_02159e70;
void func_020e3e2c(s32 arg0);
s32 func_01ffdb08(s32 arg0);
s32 func_020b0f74(s32 arg0, s32 arg1);
void func_020afb54(s32 arg0, s32 arg1);
extern void *data_02159e74;
void func_020ec470(s32 arg0, s32 arg1, s32 arg2, s32 arg3);
void func_020e2104(s32 arg0, s32 arg1) {
    s32 *p;

    if (M2C_FIELD(data_02159e70, s32 *, 0xA8) != 5) {
        return;
    }
    func_020e3e2c(2);
    p = (s32 *) ((u8 *) data_02159e70 + 0x53A8);
    p[0] = arg0;
    p[1] = arg1;
    p[2] = 0x5A;
    M2C_FIELD(data_02159e70, s32 *, 0x2FC) = arg1;
}
