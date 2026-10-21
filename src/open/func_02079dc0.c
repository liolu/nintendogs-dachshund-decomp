#include "m2c.h"
extern void func_0206cbc4();
extern u32 data_0213cafc;
void func_02079dc0(s32 arg0, u8 *arg1, s32 arg2) {
    volatile u16 pad;
    u32 i;
    u16 *list;
    u32 idx;
    u32 val;
    s32 cnt;

    *(u32 *)(arg0 + 8) = (u32) arg1;
    *(u32 *)(arg0 + 0xC) = data_0213cafc;
    *(u8 *)(arg0 + 0x19) = *(u8 *)(arg2 + 0x17);
    pad = 0;
    cnt = *(volatile u8 *)(arg0 + 0x19);
    func_0206cbc4(pad, arg0 + 0x1A, cnt * 2);
    list = (u16 *) (arg1 + 0x14);
    for (i = 0; i < *(u16 *)(arg1 + 6); i++) {
        idx = list[i];
        val = *(u32 *)(arg1 + idx) >> 24;
        ((u16 *) arg0)[i + 0xD] = val | 0x100;
    }
}
