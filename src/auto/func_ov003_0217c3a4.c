/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0203910c(void);
s32 func_02037130(void *, s32);
void func_02035978(void *, s32);
s32 func_02028714(void *, s32, s32);
s32 func_020354a8(void *, s32);
s32 func_02028114(void *);
void func_0202f9a0(void *);

void func_ov003_0217c3a4(void *arg0) {
    s32 r4;

    func_0203910c();
    r4 = func_02037130(arg0, 0x392);
    func_02035978(arg0, 1);
    if (*(u16 *) ((u8 *) arg0 + 0xFC) > 0x28) {
        if (func_02028714(arg0, 0, 1) != 0) {
            return;
        }
    }
    if (func_020354a8(arg0, 0) != 0) {
        return;
    }
    if (r4 < (func_02028114(arg0) << 6)) {
        func_0202f9a0(arg0);
        return;
    }
    if (*(u16 *) ((u8 *) arg0 + 0xFC) <= 0x190) {
        return;
    }
    func_0202f9a0(arg0);
}
