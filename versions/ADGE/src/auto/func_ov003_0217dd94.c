/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020447ac(void *, s32, s32, s32);
void func_01ff832c(s32, s32 *, void *, void *);
void func_02039128(void *);
void func_02037130(void *, s32);
s32 func_ov003_0217df20(void *, s32, s32);
s32 func_0203535c(void *);
void func_0203e5e8(void *, s32);
extern s32 data_02150e58;

void func_ov003_0217dd94(void *arg0) {
    s32 blk[3];
    s32 out[3];
    s32 w4c;
    s32 w58;
    s32 w64;

    w4c    = *(s32 *) ((u8 *) &data_02150e58 + 0x4C);
    w58    = *(s32 *) ((u8 *) &data_02150e58 + 0x58);
    w64    = *(s32 *) ((u8 *) &data_02150e58 + 0x64);
    blk[0] = w4c;
    blk[1] = w58;
    blk[2] = w64;
    func_020447ac(out, w64, w58, w4c);
    func_01ff832c(0x6000, blk, (u8 *) arg0 + 0x2A0, (u8 *) arg0 + 0x278);
    func_01ff832c(0x3000, out, (u8 *) arg0 + 0x278, (u8 *) arg0 + 0x278);
    func_02039128(arg0);
    func_02037130(arg0, 0x200);
    if (func_ov003_0217df20(arg0, 8, 0) != 0) {
        return;
    }
    if (func_0203535c(arg0) == 0) {
        return;
    }
    func_0203e5e8(arg0, 0x20E);
}
