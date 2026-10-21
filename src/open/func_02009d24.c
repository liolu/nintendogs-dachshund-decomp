#include "m2c.h"
extern s8 data_0213aa2d[];
s64 func_02080d64();
void func_02080df4();
s32 func_020ce5fc();
void func_020ce618();
void func_020ce1a0();
M2C_UNK func_0202405c(M2C_UNK arg0, M2C_UNK arg1);
extern void *data_0215a04c;
extern u8 *data_0214da84;
extern void *data_0215a034;
s32 func_01ffdb08(s32);
void *func_020038a8(s32 arg0, s32 arg1);
void func_020fdc5c(s32 arg0);
void func_020fd470(void *arg0);
void func_020fdb30(void);
void func_020fe4cc(void);
extern M2C_UNK data_02138ed4;
extern u8 data_02134fa8[];
s32 func_02009d24(s32 *arg0, s32 *arg1, s32 *arg2) {
    s32 x = (s32) (((s64) arg0[0] * arg1[0] + 0x800) >> 12)
          + (s32) (((s64) arg0[2] * arg1[2] + 0x800) >> 12);
    s32 y = (s32) (((s64) arg0[0] * arg2[0] + 0x800) >> 12)
          + (s32) (((s64) arg0[2] * arg2[2] + 0x800) >> 12);
    s32 px = 0;
    s32 py;

    if (x > 0) {
        px = 1;
    } else {
        x = -x;
    }
    if (y > 0) {
        py = 1;
    } else {
        py = 0;
        y = -y;
    }
    if (x > y) {
        return px ? 0 : 3;
    }
    return py ? 1 : 2;
}
