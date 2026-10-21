#include "m2c.h"
extern s32 *data_0215a070;
extern void *data_0214d750;
extern void func_0211c228(void);
s32 *func_020038a8(s32 *, s32);
void func_0211be1c(s32 *, s32 *, s32);
void func_020066f0(s32, void *);
void func_0211bd8c(s32 arg0) {
    data_0215a070 = func_020038a8((s32 *) arg0, 0x14);
    data_0215a070[0] = 0xC000;
    *(u16 *) ((u8 *) data_0215a070 + 0x10) = 0xFFFF;
    *(u16 *) ((u8 *) data_0215a070 + 4) = 0;
    *(u16 *) ((u8 *) data_0215a070 + 6) = 0;
    *(s32 *) ((u8 *) data_0215a070 + 8) = 0;
    *(s32 *) ((u8 *) data_0215a070 + 0xC) = 0;
    func_0211be1c(data_0215a070, (s32 *) ((u8 *) data_0214d750 + 0x2C), 1);
    func_020066f0(0xD, func_0211c228);
}
