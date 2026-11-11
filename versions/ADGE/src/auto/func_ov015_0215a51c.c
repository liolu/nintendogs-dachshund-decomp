/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02002e50(void);
s32 func_02002e48(s32);
void func_020068b4(s32, void *);
void func_020068b0(s32, s32);
void func_020066f0(s32, void *);
void func_02005e08(void *);
s32 func_0200562c(s32, void *);
void func_020055fc(s32, s32, s32, s32, s32, s32, s32, s32);
void *func_020038a8(s32, s32);
void func_020042d8(s32);
s32 func_ov015_0215a678(s32);
void func_020058f0(void);
void func_020fadb0(s32);
void func_020fac90(s32);
extern void func_02006890(void);
extern void func_020067c8(void);
extern void func_02006724(void);
extern void func_ov015_0215aa3c(void);
extern s32 *data_ov015_0215ab8c;

void func_ov015_0215a51c(void) {
    s16 hdr[2];
    s16 blk[17];
    s32 r4;
    s32 r5;
    s32 *p;

    r4     = func_02002e48(func_02002e50());
    hdr[0] = 0xff;
    hdr[1] = 0;
    func_020068b4(r4, hdr);
    func_020068b0(r4, 4);
    func_020066f0(0, func_02006890);
    func_020066f0(1, func_020067c8);
    func_020066f0(2, func_02006724);
    func_020066f0(3, func_ov015_0215aa3c);
    func_02005e08(blk);
    blk[1]  = 1;
    blk[3]  = 1;
    blk[5]  = 1;
    blk[4]  = 0;
    blk[7]  = 8;
    blk[11] = 7;
    blk[12] = 0x10;
    blk[8]  = 0x40;
    r5      = func_0200562c(r4, blk);
    func_020055fc(r5 + 0x2c, 1, 0, 0, 1, 5, 1, 0);
    p                   = func_020038a8(r4, 0x14);
    p[0]                = 0;
    p[1]                = 0;
    p[2]                = 0;
    p[3]                = 0;
    p[4]                = 0;
    data_ov015_0215ab8c = p;
    func_020042d8(r5);
    *data_ov015_0215ab8c = func_ov015_0215a678(r4);
    func_020fadb0(r4);
    func_020fac90(0);
    func_020058f0();
}
