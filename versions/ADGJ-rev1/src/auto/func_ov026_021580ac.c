/* compiler: 1.2/sp2p3 */
#include "m2c.h"

void func_020c3d00(void *);
s32 func_020c1fb0(void *, s32);
void *func_020c4da4(void *, s32);
void func_020c4ce8(void);
void func_020c3b50(void *);
s32 func_020c3ab8(void *, void *);
void *func_020c5000(void);
void func_02069634(void *, void *, void *);
void func_020069bc(void *, void *);
s32 func_020c4fd0(s32, s32);
void *func_020c5468(void *, s32, void *);
void func_020c4ef0(void *, void *);

s32 func_ov026_021580ac(void *arg0) {
    u32 buf[3];
    void *r6;
    s32 r5;
    u8 *r4;

    func_020c3d00(arg0);
    r6 = func_020c4da4(arg0, func_020c1fb0(arg0, 0));
    func_020c4ce8();
    func_020c3b50(buf);
    r5                   = func_020c3ab8(arg0, buf);
    r4                   = (u8 *) func_020c5000();
    *(s32 *) (r4 + 0x3C) = 0;
    *(s32 *) (r4 + 0x40) = 0x400;
    *(s32 *) (r4 + 0x44) = 0;
    *(s32 *) (r4 + 0x30) = 0;
    *(s32 *) (r4 + 0x34) = 0x3000;
    *(s32 *) (r4 + 0x38) = 0x7000;
    func_02069634(r4 + 0x3C, r4 + 0x30, r4 + 0x48);
    func_020069bc(r4 + 0x48, r4 + 0x48);
    r4 = (u8 *) func_020c4fd0(r5, 0);
    func_020c4ef0(r4, func_020c5468(arg0, 0x88, r6));
    return r5;
}
