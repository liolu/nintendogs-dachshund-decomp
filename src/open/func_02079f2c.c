#include "m2c.h"
extern void func_0206cbc4();
extern s32 func_0207837c();
extern u32 data_0213cb08;
void func_02079f2c(s32 arg0, u8 *arg1, s32 arg2) {
    volatile u16 pad;
    s32 base;
    s32 tbl;
    u32 i;
    s32 ret;
    s32 cnt;

    base = arg2 + *(u32 *) (arg2 + 8);
    *(u32 *) (arg0 + 0xC) = data_0213cb08;
    *(u8 *) (arg0 + 0x19) = *(u8 *) (arg2 + 0x18);
    pad = 0;
    cnt = *(volatile u8 *) (arg0 + 0x19);
    func_0206cbc4(pad, arg0 + 0x1A, cnt * 2, cnt);
    for (i = 0; i < arg1[9]; i++) {
        tbl = (s32) (arg1 + 8) + *(u16 *) (arg1 + 0xE);
        ret = func_0207837c(base + 4, tbl + *(u16 *) (tbl + 2) + i * 0x10);
        if (ret >= 0) {
            *(u16 *) (arg0 + ret * 2 + 0x1A) = i | 0x100;
        }
    }
}
