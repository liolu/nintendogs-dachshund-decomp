/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02039764(void *);
void func_0203e2b8(void *, s32);
void func_02105dbc(s32, s8);
void *func_02106344(void);
s32 func_ov002_02170464(void *, s32, s32, s32, s32, s32, s32);

void func_ov002_0216e600(void *arg0) {
    u8 *p;
    u16 f4;

    p = (u8 *) arg0;
    if (func_ov002_02170464(arg0, 1, 0x51, 0x52, 0x53, 0x54, 0x64) == 0) {
        return;
    }
    if (func_02039764(arg0) != 0) {
        u8 *x               = (u8 *) func_02106344() + 0x88;
        *(s32 *) (x + 0x6C) = 0;
        func_02105dbc(2, *(s8 *) (p + 0x88));
    }
    f4 = *(u16 *) (p + 0xF4);
    if (f4 >= 0x4F && f4 < 0x63) {
        func_0203e2b8(arg0, 0x437);
        return;
    }
    func_0203e2b8(arg0, 11);
}
