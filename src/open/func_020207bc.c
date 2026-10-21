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
s32 func_020207bc(void *arg0) {
    u16 *p;
    s8 v;

    p = M2C_FIELD(arg0, u16 **, 0x9E8);
    v = data_0213aa2d[*p * 100];
    switch (v) {
        case 0:
            return 3;
        case 1:
            return 1;
        case 2:
        case 3:
            return 2;
    }
    return 1;
}
