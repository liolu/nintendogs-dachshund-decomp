/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_0210835c(void *, void *);
void func_02122524(void *, s32 *, s32);

void func_ov004_02162d4c(u8 *arg0) {
    s32 sp[3];
    s16 r1;
    u8 *r5;

    r1 = *(s16 *) (arg0 + 0x94);
    r5 = *(u8 **) (arg0 + 0x214);
    if (r1 == 0x3F) {
        sp[0] = 0x1000;
        sp[1] = 0;
        sp[2] = 0;
        func_0210835c(arg0, arg0 + 0xC8);
        func_02122524(arg0 + 0xC8, sp, 0x2AAB);
        if (*(s32 *) (r5 + 4) != 0) {
            sp[0] = 0;
            sp[1] = 0x1000;
            sp[2] = 0;
            func_02122524(arg0 + 0xC8, sp, 0x2AAB);
            return;
        }
        sp[0] = 0;
        sp[1] = 0x1000;
        sp[2] = 0;
        func_02122524(arg0 + 0xC8, sp, 0xD555);
        return;
    }
    if (r1 != 0x3E) {
        return;
    }
    sp[0] = 0x1000;
    sp[1] = 0;
    sp[2] = 0;
    func_0210835c(arg0, arg0 + 0xC8);
    func_02122524(arg0 + 0xC8, sp, 0x2AAB);
    if (*(s32 *) (r5 + 4) != 0) {
        sp[0] = 0;
        sp[1] = 0x1000;
        sp[2] = 0;
        func_02122524(arg0 + 0xC8, sp, 0xEAAB);
        return;
    }
    sp[0] = 0;
    sp[1] = 0x1000;
    sp[2] = 0;
    func_02122524(arg0 + 0xC8, sp, 0x1555);
}
