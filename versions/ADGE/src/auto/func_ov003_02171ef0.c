/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_02035264(void *, s32);
void func_0203e5ac(void *, s32, s32);
s32 func_0202df7c(void *);
void func_02122f74(s32);
void func_02122cf8(s8, s16);
void func_02028fd4(void *, s32, s32);
void func_0203e5e8(void *, s32);
s32 func_020399a4(void *);
u8 *func_020a5fcc(void);
void func_020a5a1c(s32, s8);

void func_ov003_02171ef0(void *arg0) {
    s32 var_r0;

    if (func_02035264(arg0, 1) != 0) {
        func_0203e5ac(arg0, 1, 0);
    }
    if (*(u16 *) ((u8 *) arg0 + 0xFC) > 0x64) {
        if (func_0202df7c(arg0) != 0) {
            func_02122f74(3);
        }
        func_02122cf8(*(s8 *) ((u8 *) arg0 + 0x88), *(s16 *) ((u8 *) arg0 + 0xF6));
        func_02028fd4(arg0, 0x57, 1);
        func_0203e5e8(arg0, 0xC);
        var_r0 = 1;
    } else {
        var_r0 = 0;
    }
    if (var_r0 == 0) {
        return;
    }
    if (func_020399a4(arg0) == 0) {
        return;
    }
    {
        u8 *p               = func_020a5fcc() + 0x88;
        *(s32 *) (p + 0x6C) = 0;
    }
    func_020a5a1c(2, *(s8 *) ((u8 *) arg0 + 0x88));
}
