/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02005da4(void *);
void func_020cedd4(void *);
s32 func_020055c8(u8 *, void *);
void func_02005478(s32, s32, s32);
void func_02005598(s32, s32, s32, s32, s32, s32, s32, s32);
void func_02005540(s32, s32, s32, s32, s32, s32, s32);
void func_02005568(s32, s32, s32, s32, s32, s32, s32, s32);
void func_02005468(s32, s32);
void func_02005460(s32, s32);
void func_020ced70(s32);

s32 func_ov006_0215af6c(u8 *arg0) {
    s16 blk[17];
    s32 r4;

    func_02005da4(blk);
    blk[1] = 0x15;
    blk[3] = 1;
    blk[4] = 0;
    blk[5] = 1;
    func_020cedd4(blk);
    blk[2]  = 0x12;
    blk[6]  = 0;
    blk[11] = 3;
    blk[12] = 0x10;
    blk[7]  = 4;
    blk[8]  = 0x60;
    blk[14] = 0x180;
    blk[15] = 8;
    r4      = func_020055c8(arg0, blk);
    func_02005478(r4, 1, 1);
    func_02005598(r4 + 0x2c, 2, 0, 0, 1, 0, 0, 0);
    func_02005540(r4 + 0x2c, 2, 0, 0, 0, 5, 4);
    func_02005568(r4 + 0x78, 2, 0, 0, 0, 5, 1, 0);
    func_02005468(r4, 0x10);
    func_02005460(r4, 0x200010);
    func_020ced70(r4);
    return r4;
}
