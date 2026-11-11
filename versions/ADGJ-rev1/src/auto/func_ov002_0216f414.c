/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02039764(void *a);
void func_0203e2b8(void *a, s32 b);
void func_02105dc4(s32 a, s8 b);
u8 *func_0210634c(void);
s32 func_ov002_02170528(void *a, s32 b, s32 c, s32 d);

void func_ov002_0216f414(u8 *arg0) {
    s32 temp_r0;
    s16 temp_r1;
    u16 temp_r0_2;
    u8 *p;

    temp_r0 = func_ov002_02170528(arg0, 0x16, -1, 0x0);
    temp_r1 = *(s16 *) (arg0 + 0xE8);
    if (temp_r1 >= 0x10 && temp_r1 <= 0x1E) {
        return;
    }
    if (temp_r0 == 0) {
        return;
    }
    if (func_02039764(arg0) != 0) {
        p                   = func_0210634c() + 0x88;
        *(s32 *) (p + 0x6C) = 0;
        func_02105dc4(2, *(s8 *) (arg0 + 0x88));
    }
    temp_r0_2 = *(u16 *) (arg0 + 0xF4);
    if (temp_r0_2 >= 0x4F && temp_r0_2 < 0x63) {
        func_0203e2b8(arg0, 0x437);
        return;
    }
    func_0203e2b8(arg0, 6);
}
