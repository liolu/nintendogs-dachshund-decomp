/* compiler: 1.2/sp2p3 */
#include "m2c.h"

extern u8 data_02150e58[];
void func_020447ac(void *);
void func_01ff832c(s32, void *, void *, void *);
void func_02039128(void *);
void func_02037130(void *, s32);
s32 func_ov003_0217df20(void *, s32, s32);
s32 func_0203535c(void *);
void func_0203e5e8(void *, s32);

void func_ov003_0217de58(void *arg0) {
    s32 sp0[3];
    s32 spC[3];

    sp0[0] = *(s32 *) (data_02150e58 + 0x4C);
    sp0[1] = *(s32 *) (data_02150e58 + 0x58);
    sp0[2] = *(s32 *) (data_02150e58 + 0x64);
    func_020447ac(spC);
    func_01ff832c(-0x6000, sp0, (u8 *) arg0 + 0x2A0, (u8 *) arg0 + 0x278);
    func_01ff832c(0x3000, spC, (u8 *) arg0 + 0x278, (u8 *) arg0 + 0x278);
    func_02039128(arg0);
    func_02037130(arg0, 0x200);
    if (func_ov003_0217df20(arg0, 7, 0) != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0x20D);
}
