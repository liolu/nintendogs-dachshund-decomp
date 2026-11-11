/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02039764(void *);
void func_0203e2b8(void *, s32);
void func_02105dbc(s32, s8);
u8 *func_02106344(void);
s32 func_ov002_02170464(void *, s32, s32, s32, s32, s32, s32);
s32 func_0202373c(void *);
void *func_020240d0(void *, s32);
void func_020290d8(void *, s32, s32);

void func_ov002_0216de30(void *arg0) {
    u8 *temp_r0;

    if (func_ov002_02170464(arg0, 1, 0x49, 0x4A, 0x4B, 0x4C, 0xA) == 0) {
        return;
    }
    if (func_02039764(arg0) != 0) {
        u8 *p               = func_02106344() + 0x88;
        *(s32 *) (p + 0x6C) = 0;
        func_02105dbc(2, *(s8 *) ((u8 *) arg0 + 0x88));
    }
    func_0203e2b8(arg0, 6);
    temp_r0 = func_020240d0(arg0, func_0202373c(arg0));
    if (temp_r0 == 0) {
        return;
    }
    func_020290d8(arg0, (s16) (*(u16 *) temp_r0 + 0xC), *(u8 *) (temp_r0 + 0x28));
}
