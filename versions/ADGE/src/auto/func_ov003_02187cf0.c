/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0203e5ac(void *, s32, s32);
void func_0206823c(void *, void *, void *);
void func_02114658(s32, void *, void *);
void func_ov003_02188bb0(void *, s32, s32, void *, s32, s32);
extern s32 data_0214da80;

void func_ov003_02187cf0(void *arg0) {
    s32 buf[4];

    func_02114658(data_0214da80, buf, (u8 *) arg0 + 0x2C4);
    func_0206823c(buf, (u8 *) arg0 + 0x2C4, buf);
    func_ov003_02188bb0(arg0, 5, 0x57, (u8 *) arg0 + 0x348, 0x14D2, 2);
    if (*(u16 *) ((u8 *) arg0 + 0x11E) > 0x28) {
        func_0203e5ac(arg0, 0, 0x74);
        return;
    }
    if (*(s16 *) ((u8 *) arg0 + 0xEE) != 0x103) {
        return;
    }
    func_0203e5ac(arg0, 0, 0x72);
}
