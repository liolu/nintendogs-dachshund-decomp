/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02002dec(void);
s32 func_02002de4(s32);
void func_02006850(s32, void *);
void func_0200684c(s32, s32);
void func_0200668c(s32, void *);
void func_02005da4(void *);
s32 func_020055c8(s32, void *);
void func_02005598(s32, s32, s32, s32, s32, s32, s32, s32);
void *func_02003844(s32, s32);
void func_02004274(s32);
s32 func_ov018_0215cae4(s32);
void func_0200588c(void);
extern void func_0200682c(void);
extern void func_02006764(void);
extern void func_020066c0(void);
extern void func_ov018_0215cdbc(void);
extern s32 *data_ov018_0215d238;

void func_ov018_0215c998(void) {
    s16 hdr[2];
    s16 blk[17];
    s32 r4;
    s32 r5;
    s32 *p;

    r4     = func_02002de4(func_02002dec());
    hdr[0] = 0xff;
    hdr[1] = 0;
    func_02006850(r4, hdr);
    func_0200684c(r4, 4);
    func_0200668c(0, func_0200682c);
    func_0200668c(1, func_02006764);
    func_0200668c(2, func_020066c0);
    func_0200668c(3, func_ov018_0215cdbc);
    func_02005da4(blk);
    blk[1]  = 1;
    blk[3]  = 1;
    blk[5]  = 1;
    blk[4]  = 0;
    blk[7]  = 8;
    blk[11] = 7;
    blk[12] = 0x10;
    r5      = func_020055c8(r4, blk);
    func_02005598(r5 + 0x2c, 1, 0, 0, 1, 5, 1, 0);
    p                   = func_02003844(r4, 8);
    p[0]                = 0;
    p[1]                = 0;
    data_ov018_0215d238 = p;
    func_02004274(r5);
    *data_ov018_0215d238 = func_ov018_0215cae4(r4);
    *(u16 *) 0x04000304 &= ~0x8000;
    func_0200588c();
}
