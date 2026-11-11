/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020399a4(void *);
void func_0203e5e8(void *, s32);
void func_020a5a1c(s32, s8);
u8 *func_020a5fcc(void);
s32 func_ov003_021728e4(void *, s32, s32, s32, s32, s32, s32);

void func_ov003_02170938(void *arg0) {
    u16 v;

    if (func_ov003_021728e4(arg0, 0, 0x1F6, 0x1F7, 0x202, 0x203, 0x64) == 0) {
        return;
    }
    if (func_020399a4(arg0) != 0) {
        u8 *p               = func_020a5fcc() + 0x88;
        *(s32 *) (p + 0x6C) = 0;
        func_020a5a1c(2, *(s8 *) ((u8 *) arg0 + 0x88));
    }
    v = *(u16 *) ((u8 *) arg0 + 0xF4);
    if (v >= 0x4F && v < 0x63) {
        func_0203e5e8(arg0, 0x438);
        return;
    }
    func_0203e5e8(arg0, 0xD);
}
