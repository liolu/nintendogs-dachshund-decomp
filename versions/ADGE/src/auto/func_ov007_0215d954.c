/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_02005e08(void *);
void func_020d4660(void *);
s32 func_0200562c(u8 *, void *);
void func_020054dc(s32, s32, s32);
void func_020055fc(s32, s32, s32, s32, s32, s32, s32, s32);
void func_020055a4(s32, s32, s32, s32, s32, s32, s32);
void func_020055cc(s32, s32, s32, s32, s32, s32, s32, s32);
void func_020054cc(s32, s32);
void func_020054c4(s32, s32);
void func_020d45fc(s32);

s32 func_ov007_0215d954(u8 *arg0) {
    s16 blk[17];
    s32 r4;

    func_02005e08(blk);
    blk[1] = 0x15;
    blk[3] = 1;
    blk[4] = 0;
    blk[5] = 1;
    func_020d4660(blk);
    blk[2]  = 0x12;
    blk[6]  = 0;
    blk[11] = 3;
    blk[12] = 0x10;
    blk[7]  = 4;
    blk[8]  = 0x60;
    blk[14] = 0x180;
    blk[15] = 8;
    r4      = func_0200562c(arg0, blk);
    func_020054dc(r4, 1, 1);
    func_020055fc(r4 + 0x2c, 2, 0, 0, 1, 0, 0, 0);
    func_020055a4(r4 + 0x2c, 2, 0, 0, 0, 5, 4);
    func_020055cc(r4 + 0x78, 2, 0, 0, 0, 5, 1, 0);
    func_020054cc(r4, 0x10);
    func_020054c4(r4, 0x200010);
    func_020d45fc(r4);
    return r4;
}
