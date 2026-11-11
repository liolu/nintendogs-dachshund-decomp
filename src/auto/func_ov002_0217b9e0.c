/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02044470(void *, s32, s32, s32);
void func_01ff832c(s32, s32 *, void *, void *);
void func_02038ef8(void *);
void func_02036fbc(void *, s32);
s32 func_ov002_0217bb6c(void *, s32, s32);
s32 func_020351a0(void *);
void func_0203e2b8(void *, s32);
extern s32 data_02150330;

void func_ov002_0217b9e0(void *arg0) {
    s32 blk[3];
    s32 out[3];
    s32 w4c;
    s32 w58;
    s32 w64;

    w4c    = *(s32 *) ((u8 *) &data_02150330 + 0x4C);
    w58    = *(s32 *) ((u8 *) &data_02150330 + 0x58);
    w64    = *(s32 *) ((u8 *) &data_02150330 + 0x64);
    blk[0] = w4c;
    blk[1] = w58;
    blk[2] = w64;
    func_02044470(out, w64, w58, w4c);
    func_01ff832c(0x6000, blk, (u8 *) arg0 + 0x2A0, (u8 *) arg0 + 0x278);
    func_01ff832c(0x3000, out, (u8 *) arg0 + 0x278, (u8 *) arg0 + 0x278);
    func_02038ef8(arg0);
    func_02036fbc(arg0, 0x200);
    if (func_ov002_0217bb6c(arg0, 8, 0) != 0) {
        return;
    }
    if (func_020351a0(arg0) == 0) {
        return;
    }
    func_0203e2b8(arg0, 0x20E);
}
