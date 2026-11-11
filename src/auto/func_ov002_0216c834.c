/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_0202373c(void *);
void *func_020240d0(void *, s32);
void func_02028f90(void *, s16, u8);
void func_0203e2b8(void *, s32);
s32 func_ov002_02170464(void *, s32, s32, s32, s32, s32, s32);

void func_ov002_0216c834(void *arg0) {
    u8 *q;

    if (func_ov002_02170464(arg0, 0, 0x1ED, 0x1EE, 0x1F9, 0x1FA, 0xA) == 0) {
        return;
    }
    func_0203e2b8(arg0, 0xEC);
    q = func_020240d0(arg0, func_0202373c(arg0));
    if (q == NULL) {
        return;
    }
    func_02028f90(arg0, (s16) (*(u16 *) q + 0xC), *(u8 *) (q + 0x28));
}
