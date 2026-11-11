/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020399a4(void *);
void func_0203e5e8(void *, s32);
void func_020a5a1c(s32, s8);
void *func_020a5fcc(void);
s32 func_ov003_021729a4(void *, s32, s32, s32);

void func_ov003_02171388(void *arg0) {
    u8 *p;
    s32 r;
    u16 f4;

    p = (u8 *) arg0;
    r = func_ov003_021729a4(arg0, 0x1E, 0x18A, 0x8000);
    if (*(s16 *) (p + 0xEA) >= 0x10 && *(s16 *) (p + 0xEA) <= 0x1E) {
        return;
    }
    if (r == 0) {
        return;
    }
    if (func_020399a4(arg0) != 0) {
        u8 *x               = (u8 *) func_020a5fcc() + 0x88;
        *(s32 *) (x + 0x6C) = 0;
        func_020a5a1c(2, *(s8 *) (p + 0x88));
    }
    f4 = *(u16 *) (p + 0xF4);
    if (f4 >= 0x4F && f4 < 0x63) {
        func_0203e5e8(arg0, 0x438);
        return;
    }
    func_0203e5e8(arg0, 0xE);
}
