/* compiler: 1.2/sp2p3 */
#include "m2c.h"

s32 func_020399a4(void *a);
void func_0203e5e8(void *a, s32 b);
void func_020a5a1c(s32 a, s8 b);
u8 *func_020a5fcc(void);
s32 func_ov003_021729a4(void *a, s32 b, s32 c, s32 d);

void func_ov003_02171588(u8 *arg0) {
    s32 temp_r0;
    s16 temp_r1;
    u16 temp_r0_2;
    u8 *p;

    temp_r0 = func_ov003_021729a4(arg0, 0x1b, -1, 0xe000);
    temp_r1 = *(s16 *) (arg0 + 0xEA);
    if (temp_r1 >= 0x10 && temp_r1 <= 0x1E) {
        return;
    }
    if (temp_r0 == 0) {
        return;
    }
    if (func_020399a4(arg0) != 0) {
        p                   = func_020a5fcc() + 0x88;
        *(s32 *) (p + 0x6C) = 0;
        func_020a5a1c(2, *(s8 *) (arg0 + 0x88));
    }
    temp_r0_2 = *(u16 *) (arg0 + 0xF4);
    if (temp_r0_2 >= 0x4F && temp_r0_2 < 0x63) {
        func_0203e5e8(arg0, 0x438);
        return;
    }
    func_0203e5e8(arg0, 11);
}
