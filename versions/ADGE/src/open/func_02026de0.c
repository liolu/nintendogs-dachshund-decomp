#include "m2c.h"
extern void *data_0215a04c;
extern u8 *data_0214da84;
extern void *data_0215a034;
s32 func_01ffdb08(s32);
void *func_020038a8(s32 arg0, s32 arg1);
void func_020fdc5c(s32 arg0);
void func_020fd470(void *arg0);
void func_020fdb30(void);
void func_020fe4cc(void);
extern s8 data_0213aa2d[];
s64 func_02080d64();
void func_02080df4();
s32 func_020ce5fc();
void func_020ce618();
void func_020ce1a0();
M2C_UNK func_0202405c(M2C_UNK arg0, M2C_UNK arg1);
extern M2C_UNK data_02138ed4;
extern u8 data_02134fa8[];
s32 func_02026de0(s32 arg0) {
    u16 v;

    v = *(u16 *) data_0215a04c;
    if (v == 1) {
        return 0;
    }
    if (v == 4) {
        return 0;
    }
    if (v == 2) {
        return 0;
    }
    if (*(u8 *) (arg0 + 0xAA) == 0) {
        return 1;
    }
    if (*(s16 *) (arg0 + 0x13E) != 0xA) {
        return 1;
    }
    return (*(s8 *) (data_0214da84 + 4) == 2) ? 1 : 0;
}
