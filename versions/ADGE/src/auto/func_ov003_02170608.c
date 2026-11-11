/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020399a4(void *);
void func_0203e5e8(void *, s32);
void func_020a5a1c(s32, s8);
u8 *func_020a5fcc(void);
s32 func_ov003_021728e4(void *, s32, s32, s32, s32, s32, s32);
s32 func_02023770(void *);
void *func_02024104(void *, s32);
void func_0202911c(void *, s32, s32);

void func_ov003_02170608(void *arg0) {
    u8 *temp_r0;

    if (func_ov003_021728e4(arg0, 1, 0x4D, 0x4E, 0x4F, 0x50, 0xA) == 0) {
        return;
    }
    if (func_020399a4(arg0) != 0) {
        u8 *p               = func_020a5fcc() + 0x88;
        *(s32 *) (p + 0x6C) = 0;
        func_020a5a1c(2, *(s8 *) ((u8 *) arg0 + 0x88));
    }
    func_0203e5e8(arg0, 2);
    temp_r0 = func_02024104(arg0, func_02023770(arg0));
    if (temp_r0 == 0) {
        return;
    }
    func_0202911c(arg0, (s16) (*(u16 *) temp_r0 + 0xC), *(u8 *) (temp_r0 + 0x28));
}
