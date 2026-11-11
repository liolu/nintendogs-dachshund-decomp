/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02039764(void *);
void func_0203e2b8(void *, s32);
void func_02105dc4(s32, s8);
u8 *func_0210634c(void);
s32 func_ov002_02170464(void *, s32, s32, s32, s32, s32, s32);

void func_ov002_0216e480(void *arg0) {
    u16 v;

    if (func_ov002_02170464(arg0, 0, 0x1F5, 0x1F6, 0x201, 0x202, 0x64) == 0) {
        return;
    }
    if (func_02039764(arg0) != 0) {
        u8 *p               = func_0210634c() + 0x88;
        *(s32 *) (p + 0x6C) = 0;
        func_02105dc4(2, *(s8 *) ((u8 *) arg0 + 0x88));
    }
    v = *(u16 *) ((u8 *) arg0 + 0xF4);
    if (v >= 0x4F && v < 0x63) {
        func_0203e2b8(arg0, 0x437);
        return;
    }
    func_0203e2b8(arg0, 0xD);
}
