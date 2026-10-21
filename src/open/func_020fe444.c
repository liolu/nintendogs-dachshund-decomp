#include "m2c.h"
extern void *data_0215a034;
void *func_020038a8(s32 arg0, s32 arg1);
void func_020fdc5c(s32 arg0);
void func_020fd470(void *arg0);
void func_020fdb30(void);
void func_020fe4cc(void);
extern void *data_0215a04c;
extern u8 *data_0214da84;
s32 func_01ffdb08(s32);
extern u8 *data_02159e70;
s32 func_020ec050(s32, u16);
void func_020eb9fc(s32, u16, s32);
void func_020d5a60(s32, s32);
void *func_020fe444(s32 arg0) {
    s16 i;

    data_0215a034 = func_020038a8(arg0, 0x14);
#pragma opt_strength_reduction off
    for (i = 0; i < 3; i++) {
        *(u16 *) ((u8 *) data_0215a034 + i * 2) = 0;
        *(s32 *) ((u8 *) data_0215a034 + i * 4 + 8) = 0;
    }
    func_020fdc5c(arg0);
    func_020fd470((void *) func_020fe4cc);
    func_020fdb30();
    return data_0215a034;
}
