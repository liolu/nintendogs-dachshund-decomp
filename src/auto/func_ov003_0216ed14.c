/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02023770(void *);
void *func_02024104(void *, s32);
void func_02028fd4(void *, s16, u8);
void func_0203e5e8(void *, s32);
s32 func_ov003_021728e4(void *, s32, s32, s32, s32, s32, s32);

void func_ov003_0216ed14(void *arg0) {
    u8 *q;

    if (func_ov003_021728e4(arg0, 0, 0x1EE, 0x1EF, 0x1FA, 0x1FB, 0xA) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0xEC);
    q = func_02024104(arg0, func_02023770(arg0));
    if (q == NULL) {
        return;
    }
    func_02028fd4(arg0, (s16) (*(u16 *) q + 0xC), *(u8 *) (q + 0x28));
}
