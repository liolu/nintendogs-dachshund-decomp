#include "m2c.h"
extern s32 data_02159e70;
void func_020d6068(M2C_UNK, M2C_UNK, M2C_UNK);
s32 func_01ffdb08(s32);
extern void *data_0215a034;
extern void *data_0215a04c;
extern u8 *data_0214da84;
void *func_020038a8(s32 arg0, s32 arg1);
void func_020fdc5c(s32 arg0);
void func_020fd470(void *arg0);
void func_020fdb30(void);
void func_020fe4cc(void);
void func_020eae18(u16 arg0, u16 arg1, u16 arg2) {
    u8 *p = (u8 *) data_02159e70 + 0xC840;

    *(s32 *) (p + 4) = 3;
    *(u16 *) (p + 8) = arg0;
    *(u16 *) (p + 0xA) = arg1;
    *(u16 *) (p + 0xC) = arg2;
    func_020d6068(2, 8, 1);
}
