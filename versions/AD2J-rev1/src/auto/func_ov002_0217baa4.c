/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02150330[];
void func_02044470(void *);
void func_01ff832c(s32, void *, void *, void *);
void func_02038ef8(void *);
void func_02036fbc(void *, s32);
s32 func_ov002_0217bb6c(void *, s32, s32);
s32 func_020351a0(void *);
void func_0203e2b8(void *, s32);

void func_ov002_0217baa4(void *arg0) {
    s32 sp0[3];
    s32 spC[3];

    sp0[0] = *(s32 *) (data_02150330 + 0x4C);
    sp0[1] = *(s32 *) (data_02150330 + 0x58);
    sp0[2] = *(s32 *) (data_02150330 + 0x64);
    func_02044470(spC);
    func_01ff832c(-0x6000, sp0, (u8 *) arg0 + 0x2A0, (u8 *) arg0 + 0x278);
    func_01ff832c(0x3000, spC, (u8 *) arg0 + 0x278, (u8 *) arg0 + 0x278);
    func_02038ef8(arg0);
    func_02036fbc(arg0, 0x200);
    if (func_ov002_0217bb6c(arg0, 7, 0) != 0) {
        return;
    }
    if (func_020351a0(arg0) == 0) {
        return;
    }
    func_0203e2b8(arg0, 0x20D);
}
