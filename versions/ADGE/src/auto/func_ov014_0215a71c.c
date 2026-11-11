/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c9304(void *);
s32 func_020c74f0(void *, s32);
void *func_020ca3a8(void *, s32);
void func_020ca2ec(void);
void func_020c9154(void *);
s32 func_020c90bc(void *, void *);
void *func_020ca604(void);
void func_0206823c(void *, void *, void *);
void func_02006a20(void *, void *);
s32 func_020ca5d4(s32, s32);
void *func_020caa6c(void *, s32, void *);
void func_020ca4f4(void *, void *);

s32 func_ov014_0215a71c(void *arg0) {
    u32 buf[3];
    void *r6;
    s32 r5;
    u8 *r4;

    func_020c9304(arg0);
    r6 = func_020ca3a8(arg0, func_020c74f0(arg0, 0));
    func_020ca2ec();
    func_020c9154(buf);
    r5                   = func_020c90bc(arg0, buf);
    r4                   = (u8 *) func_020ca604();
    *(s32 *) (r4 + 0x3C) = 0;
    *(s32 *) (r4 + 0x40) = 0x400;
    *(s32 *) (r4 + 0x44) = 0;
    *(s32 *) (r4 + 0x30) = 0;
    *(s32 *) (r4 + 0x34) = 0x3000;
    *(s32 *) (r4 + 0x38) = 0x7000;
    func_0206823c(r4 + 0x3C, r4 + 0x30, r4 + 0x48);
    func_02006a20(r4 + 0x48, r4 + 0x48);
    r4 = (u8 *) func_020ca5d4(r5, 0);
    func_020ca4f4(r4, func_020caa6c(arg0, 0x88, r6));
    return r5;
}
