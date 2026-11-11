/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c3cfc(void *);
s32 func_020c1fac(void *, s32);
void *func_020c4da0(void *, s32);
void func_020c4ce4(void);
void func_020c3b4c(void *);
s32 func_020c3ab4(void *, void *);
void *func_020c4ffc(void);
void func_02069634(void *, void *, void *);
void func_020069bc(void *, void *);
s32 func_020c4fcc(s32, s32);
void *func_020c5464(void *, s32, void *);
void func_020c4eec(void *, void *);

s32 func_ov013_0215829c(void *arg0) {
    u32 buf[3];
    void *r6;
    s32 r5;
    u8 *r4;

    func_020c3cfc(arg0);
    r6 = func_020c4da0(arg0, func_020c1fac(arg0, 0));
    func_020c4ce4();
    func_020c3b4c(buf);
    r5                   = func_020c3ab4(arg0, buf);
    r4                   = (u8 *) func_020c4ffc();
    *(s32 *) (r4 + 0x3C) = 0;
    *(s32 *) (r4 + 0x40) = 0x400;
    *(s32 *) (r4 + 0x44) = 0;
    *(s32 *) (r4 + 0x30) = 0;
    *(s32 *) (r4 + 0x34) = 0x3000;
    *(s32 *) (r4 + 0x38) = 0x7000;
    func_02069634(r4 + 0x3C, r4 + 0x30, r4 + 0x48);
    func_020069bc(r4 + 0x48, r4 + 0x48);
    r4 = (u8 *) func_020c4fcc(r5, 0);
    func_020c4eec(r4, func_020c5464(arg0, 0x88, r6));
    return r5;
}
